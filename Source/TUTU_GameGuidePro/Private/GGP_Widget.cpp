#include "GGP_Widget.h"
#include "Animation/WidgetAnimation.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/CanvasPanel.h"
#include "Components/Image.h"
#include "Components/Overlay.h"
#include "Components/ProgressBar.h"
#include "Components/RichTextBlock.h"
#include "Components/TextBlock.h"
#include "MediaAssets/Public/FileMediaSource.h"
#include "TimerManager.h"

class UFileMediaSource;

void UGGP_Widget::NativeConstruct()
{
	Super::NativeConstruct();

	// 隐藏当前对象的可视性，使其不可见
	SetVisibility(ESlateVisibility::Collapsed);

	// 隐藏名为 TutorialBoxOverlay 的 UI 控件的可视性，使其不可见
	TutorialBoxOverlay->SetVisibility(ESlateVisibility::Collapsed);
	//背景模糊默认塌陷
	Blur->SetVisibility(ESlateVisibility::Collapsed);
	//画布面板默认塌陷
	TutoriaModaCanvas->SetVisibility(ESlateVisibility::Collapsed);
	//绑定按钮 抬起和松开
	ConfirmButton->OnPressed.AddDynamic(this,&UGGP_Widget::HoldingStarted);
	ConfirmButton->OnReleased.AddDynamic(this,&UGGP_Widget::HoldingCanceled);

	// 初始化变量
	CurentTutorialType = ETutorialType::None;  
}

void UGGP_Widget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!bTick) return;

	HodingLerpAlpha+=(HodingLerpAlpha>0||HodingProgressBarChange>0)*HodingProgressBarChange*InDeltaTime;
	ConfirmationProgressBar->SetPercent(HodingLerpAlpha);
	
	if (HodingLerpAlpha>=1)
	{
		HideTurorial();
		bTick=false;
	}
}

void UGGP_Widget::ShowMessageTutorial(FText InContent)
{
	// 显示
	SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	// 将消息文本块控件的渲染不透明度设置为 0,自动换行为false
	MessageTutorialText->SetRenderOpacity(0);
	MessageTutorialText->SetAutoWrapText(false);
	MessageTutorialText->SetText(InContent);

	// 创建一个新的计时器句柄，并设置计时器
	GetWorld()->GetTimerManager().SetTimer(*(new FTimerHandle()),[this]()
	{
		////消息当前可见
		if (!IsValidLowLevel())return;
		//不透明度设置为 0,自动换行为true
		MessageTutorialText->SetRenderOpacity(1);
		MessageTutorialText->SetAutoWrapText(true);
	}
	,0.1,false);

	//消息当前不可见
	if (!bIsTutorialMessageVisible)
	// 播放名为 ShowMessageAnim 的动画，用于显示教程消息
	PlayAnimation(ShowMessageAnim);
	//教程消息现在可见
	bIsTutorialMessageVisible=true;
	//取消之前设置的计时任务
	GetWorld()->GetTimerManager().ClearTimer(CollapserTimer);
	
}

//隐藏教程消息
void UGGP_Widget::HideTurorial()
{
	if (CurentTutorialType==ETutorialType::Modal&&!bIsModalOpen||CurentTutorialType==ETutorialType::Message&&!bIsTutorialMessageVisible)
	{
		return;
	}

	//根据类型拿到对应动画
	auto AnimToPlay = CurentTutorialType == ETutorialType::Message ? HideMessageAnim: HideModaAnim ;
	
	//动画播放则返回
	if (IsAnimationPlaying(AnimToPlay))
	{
		return;
	}
	
	//播放隐藏动画
	PlayAnimation(AnimToPlay);

	//获取动画的结束时间
	auto AnimLength=AnimToPlay->GetEndTime();

	//如果两个教程同时显示需要一起关闭
	if (bIsModalOpen+bIsTutorialMessageVisible==2)
	{
		auto OtherAnimToPlay=CurentTutorialType==ETutorialType::Message?HideModaAnim:HideMessageAnim;

		//播放动画
		PlayAnimation(AnimToPlay);

		//拿到最长的动画时长
		if (OtherAnimToPlay->GetEndTime()>AnimLength)
		{
			AnimLength=OtherAnimToPlay->GetEndTime();
		}
		
	}

	// 创建一个新的计时器句柄，并设置计时器
	GetWorld()->GetTimerManager().SetTimer(CollapserTimer,[this]()
	{
		//倒塌
		SetVisibility(ESlateVisibility::Collapsed);
	}
	,AnimLength+0.5,false);

	if (bIsModalOpen)
	{
		auto Controller=GetOwningPlayer();     // 获取拥有者的控制器
		Controller->SetPause(false);		   // 取消游戏暂停
		Controller->SetShowMouseCursor(false);  // 隐藏鼠标光标
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(Controller); // 设置输入模式为仅游戏
	}
	bIsModalOpen=false;					 // 将模态窗口状态标记为关闭
	bIsTutorialMessageVisible=false;    // 将教程消息可见性标记为关闭
}

//更新教程消息
void UGGP_Widget::UpdateMessageTutorialText(FText NewContent)
{
	//判断原来的字符串和新的字符串是否相等，不相等用新的
	if (MessageTutorialText->GetText().ToString().Len()==NewContent.ToString().Len())
	{
		NewContent=FText::FromString(NewContent.ToString()+TEXT(""));
	}

	MessageTutorialText->SetText(NewContent);
	
}

void UGGP_Widget::ShowModalTutorial(FName InTitle, FText InContent, UObject* InMedia)
{
	// 检查参数
	if (!InMedia || !TutorialMediaPlayer)
	{
		return;
	}

	/*if (!ModalApprovalHoldTime||!TutorialMediaPlayer)
	{
		UE_LOG(LogTemp,Error,TEXT("set the ModalTutorialMedia and TutorialMediaPlayer fo %s widget blueprint"),*GetName());
		return;
	}*/

	//UI可见
	SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	//只允许UI相应
	auto Controller=GetOwningPlayer();
	Controller->SetPause(true);				//开启暂停
	Controller->SetShowMouseCursor(true);	//显示鼠标
	// 设置输入模式
	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(Controller);
	//设置标题和内容
	ModalTutorialText->SetText(InContent);		
	ModalTitleText->SetText(FText::FromName(InTitle));  

	//播放对应的视频资源
	if (InMedia)
	{
		if(InMedia->GetClass()->IsChildOf<UFileMediaSource>())
		{
			TutorialMediaPlayer->OpenSource(Cast<UFileMediaSource>(InMedia));
			//ModalTutorialMedia->SetBrushFromMaterial(TutorialMediaMaterial);
			ModalTutorialMedia->SetBrushFromMaterial(Cast<UMaterialInterface>(TutorialMediaMaterial));
		}
		else
		{
			ModalTutorialMedia->SetBrushResourceObject(InMedia);
			
		}
	}
	else
	{
		UE_LOG(LogTemp,Error,TEXT("You forgot to set the tutorial's media %s"),*InTitle.ToString());
	}

	
	CurentTutorialType=ETutorialType::Modal;  //视频模式
	
	if (!bIsModalOpen)
		PlayAnimation(ShowModaAnim);  //播放显示动画

	//进度条从0开始
	HodingLerpAlpha=0;				
	ConfirmationProgressBar->SetPercent(0);
	
	bIsModalOpen=true;
	//清除播放的时间计时器
	GetWorld()->GetTimerManager().ClearTimer(CollapserTimer);
}

void UGGP_Widget::UpdateModalTutorialText(FText NewContent)
{
	if (ModalTitleText->GetText().ToString().Equals(NewContent.ToString()))
	{
		// 字符串相等时追加空字符串
		NewContent = FText::FromString(NewContent.ToString() + TEXT(""));
	}

	////判断原来的字符串和新的字符串是否相等，不相等用新的
	//if (ModalTitleText->GetText().ToString().Len()==NewContent.ToString().Len())
	//{
	//	// 如果原字符串长度与新字符串长度相等，将新字符串附加一个空字符串
	//	NewContent=FText::FromString(NewContent.ToString()+TEXT(""));
	//}

	// 设置模态窗口标题文本为新的内容
	ModalTitleText->SetText(NewContent);
}

void UGGP_Widget::HoldingStarted()
{
	if (!bIsModalOpen)return;
	
		//获取进度条变化率
		HodingProgressBarChange=1/ModalApprovalHoldTime;

		bTick=true;
	
}

void UGGP_Widget::HoldingCanceled()
{
	HodingProgressBarChange=-2;
}
