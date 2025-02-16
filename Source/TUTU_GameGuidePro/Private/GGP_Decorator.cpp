#include "GGP_Decorator.h"
#include "Fonts/FontMeasure.h"
#include "Misc/DefaultValueHelper.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Images/SImage.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstance.h"

// Slate 图片控件类
class SRichInlineImage : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SRichInlineImage) {}
    SLATE_END_ARGS()

    void Construct(
        const FArguments& InArgs,
        const FSlateBrush* Brush,
        const FTextBlockStyle& TextStyle,
        TOptional<int32> Width,
        TOptional<int32> Height,
        float FontScale
    )
    {
        if (ensure(Brush))
        {
            // 计算字体高度
            const TSharedRef<FSlateFontMeasure> FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
            const float TextHeight = FontMeasure->GetMaxCharacterHeight(TextStyle.Font, 1.0f);

            // 计算图标尺寸
            float IconHeight = TextHeight * FontScale;
            float IconWidth = (IconHeight / Brush->ImageSize.Y) * Brush->ImageSize.X;

            // 覆盖手动设置的宽高
            if (Width.IsSet()) IconWidth = Width.GetValue();
            if (Height.IsSet()) IconHeight = Height.GetValue();

            // 计算垂直居中偏移
            const FVector2D Offset(0.0f, (IconHeight - TextHeight) / 2.0f);
            const FSlateRenderTransform Transform(Offset);

            // 构建控件层级
            ChildSlot
                [
                    SNew(SBox)
                        .HeightOverride(IconHeight)
                        .WidthOverride(IconWidth)
                        .RenderTransform(Transform)
                        [
                            SNew(SScaleBox)
                                .Stretch(EStretch::ScaleToFit)
                                .StretchDirection(EStretchDirection::Both)
                                .VAlign(VAlign_Center)
                                [
                                    SNew(SImage)
                                        .Image(Brush)  // 设置图片资源
                                ]
                        ]
                ];
        }
    }
};

// 富文本修饰器逻辑类
class FRichInlineImage : public FRichTextDecorator
{
public:
    FRichInlineImage(URichTextBlock* InOwner, UGGP_Decorator* InDecorator)
        : FRichTextDecorator(InOwner), Decorator(InDecorator) {
    }

    // 检查是否支持当前标签
    virtual bool Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const override
    {
        return (
            RunParseResult.Name == TEXT("img") &&
            RunParseResult.MetaData.Contains(TEXT("id"))
            );
    }

protected:
    // 创建图片控件
    virtual TSharedPtr<SWidget> CreateDecoratorWidget(
        const FTextRunInfo& RunInfo,
        const FTextBlockStyle& DefaultTextStyle
    ) const override
    {
        // 获取标签中的参数
        const FString* Id = RunInfo.MetaData.Find(TEXT("id"));
        if (!Id) return nullptr;

        // 查找图片资源
        const FSlateBrush* Brush = Decorator->FindImageBrush(**Id, true);
        if (!Brush) return nullptr;

        // 解析宽高参数
        TOptional<int32> Width, Height;
        if (const FString* WidthStr = RunInfo.MetaData.Find(TEXT("Width")))
        {
            int32 Temp;
            if (FDefaultValueHelper::ParseInt(*WidthStr, Temp)) Width = Temp;
        }
        if (const FString* HeightStr = RunInfo.MetaData.Find(TEXT("Height")))
        {
            int32 Temp;
            if (FDefaultValueHelper::ParseInt(*HeightStr, Temp)) Height = Temp;
        }

        // 创建控件
        return SNew(SRichInlineImage, Brush, DefaultTextStyle, Width, Height, Decorator->GetRelativeImageScale());
    }

private:
    UGGP_Decorator* Decorator;
};

// 构造函数
UGGP_Decorator::UGGP_Decorator(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
}

// 创建修饰器实例
TSharedPtr<ITextDecorator> UGGP_Decorator::CreateDecorator(URichTextBlock* InOwner)
{
    return MakeShareable(new FRichInlineImage(InOwner, this));
}

// 查找图片资源（关键修复）
const FSlateBrush* UGGP_Decorator::FindImageBrush(FName TagOrid, bool bWarnIfMissing)
{
    const FRichImageRow* ImageRow = FindImageRow(TagOrid, bWarnIfMissing);
    if (ImageRow)
    {
        // 直接返回 Brush，无需检查材质类型
        return &ImageRow->Brush;
    }

    // 输出错误日志
    if (bWarnIfMissing)
    {
        UE_LOG(LogTemp, Error, TEXT("未找到ID为 %s 的图片资源"), *TagOrid.ToString());
    }
    return nullptr;
}

// 查找数据行
FRichImageRow* UGGP_Decorator::FindImageRow(FName TagOrId, bool bWarnIfMissing)
{
    if (ImageSet)
    {
        FString ContextString;
        return ImageSet->FindRow<FRichImageRow>(TagOrId, ContextString, bWarnIfMissing);
    }

    if (bWarnIfMissing)
    {
        UE_LOG(LogTemp, Error, TEXT("数据表格 ImageSet 未配置！"));
    }
    return nullptr;
}