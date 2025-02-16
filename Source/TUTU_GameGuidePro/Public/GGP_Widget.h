#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/BackgroundBlur.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/Image.h"
#include"Components/Overlay.h"
//#include "DiffUtils.h"
#include "Components/ProgressBar.h"
#include"Components/RichTextBlock.h"
#include "Components/TextBlock.h"
#include "MediaAssets/Public/MediaPlayer.h"
#include "GGP_Widget.generated.h"

UENUM(BlueprintType)
enum class ETutorialType:uint8
{
	None, 
	Message,
	Modal,
};

UCLASS(Abstract)
class TUTU_GAMEGUIDEPRO_API UGGP_Widget: public UUserWidget
{
	GENERATED_BODY()

protected:
	//构造
	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	//消息文本块(多格式文本)
	UPROPERTY(BlueprintReadWrite,Category="Default",meta=(BindWidget))
	URichTextBlock* MessageTutorialText;
	//教程框(覆层)
	UPROPERTY(BlueprintReadWrite,Category="Default",meta=(BindWidget))
	UOverlay*TutorialBoxOverlay;
	//画布面板
	UPROPERTY(BlueprintReadWrite,Category="Default",meta=(BindWidget))
	UCanvasPanel* TutoriaModaCanvas;
	//背景模糊
	UPROPERTY(BlueprintReadWrite,Category="Default",meta=(BindWidget))
	UBackgroundBlur* Blur;
	//视频教程文字描述
	UPROPERTY(BlueprintReadWrite,Category="Default",meta=(BindWidget))
	URichTextBlock* ModalTutorialText;
	//标题文本
	UPROPERTY(BlueprintReadWrite,Category="Default",meta=(BindWidget))
	UTextBlock* ModalTitleText;
	//教程视频 视频
	UPROPERTY(BlueprintReadWrite,Category="Default",meta=(BindWidget))
	UImage* ModalTutorialMedia;
	//进度条(玩家进入教程按入按钮的时间)
	UPROPERTY(BlueprintReadWrite,Category="Default",meta=(BindWidget))
	UProgressBar* ConfirmationProgressBar;
	//按钮
	UPROPERTY(BlueprintReadWrite,Category="Default",meta=(BindWidget))
	UButton* ConfirmButton;
	
	//显示和隐藏消息动画
	UPROPERTY(BlueprintReadWrite,Transient,Category="Animations",meta=(BindWidgetAnim))
	UWidgetAnimation* ShowMessageAnim;
	UPROPERTY(BlueprintReadWrite,Transient,Category="Animations",meta=(BindWidgetAnim))
	UWidgetAnimation* HideMessageAnim;

	UPROPERTY(BlueprintReadWrite,Transient,Category="Animations",meta=(BindWidgetAnim))
	UWidgetAnimation* ShowModaAnim;
	UPROPERTY(BlueprintReadWrite,Transient,Category="Animations",meta=(BindWidgetAnim))
	UWidgetAnimation* HideModaAnim;

	//教程类型
	UPROPERTY(BlueprintReadWrite, Category = "GGP")
	ETutorialType CurentTutorialType;

	//视频材质
	UPROPERTY(EditDefaultsOnly,Category="GGP")
	UMaterialInstance* TutorialMediaMaterial;

	//媒体播放器
	UPROPERTY(EditDefaultsOnly,Category="GGP")
	UMediaPlayer* TutorialMediaPlayer;
	
public:
	//文本消息
	UFUNCTION(BlueprintCallable, Category = "GGP") //显示教程消息
	void ShowMessageTutorial(FText InContent);

	UFUNCTION(BlueprintCallable, Category = "GGP")//隐藏教程消息
	void HideTurorial();

	UFUNCTION(BlueprintCallable, Category = "GGP")//更新教程消息
	void UpdateMessageTutorialText(FText NewContent);

	//视频消息
	UFUNCTION(BlueprintCallable, Category = "GGP")//显示教程视频
	void ShowModalTutorial(FName InTitle,FText InContent,UObject* InMedia);

	UFUNCTION(BlueprintCallable, Category = "GGP")//更新教程视频文本
	void UpdateModalTutorialText(FText NewContent);

	UFUNCTION(BlueprintCallable, Category = "GGP")//设置按钮时间
	void SetUpModal(float InHoldTime){ModalApprovalHoldTime=InHoldTime;}

private:
	
	UFUNCTION()//按下提醒按键
	void HoldingStarted();
	UFUNCTION()//松开提示按键
	void HoldingCanceled();
	
	FTimerHandle CollapserTimer;		   //时间句柄
	bool bIsModalOpen=false;			  //视频默认是否开启
	bool bIsTutorialMessageVisible=false; //文本默认是否隐藏
	bool bTick=false;					  //是否开启Tick
	float ModalApprovalHoldTime=2;		  //按下按键需要保持的时间
public:
	UPROPERTY(BlueprintReadWrite, Category = "GGP")//进度条的变化率
	float HodingProgressBarChange;
	UPROPERTY(BlueprintReadWrite,Category = "GGP")//进度条的变化值
	float HodingLerpAlpha=0;
	
};
