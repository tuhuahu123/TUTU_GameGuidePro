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

// Slate ͼƬ�ؼ���
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
            // ��������߶�
            const TSharedRef<FSlateFontMeasure> FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
            const float TextHeight = FontMeasure->GetMaxCharacterHeight(TextStyle.Font, 1.0f);

            // ����ͼ��ߴ�
            float IconHeight = TextHeight * FontScale;
            float IconWidth = (IconHeight / Brush->ImageSize.Y) * Brush->ImageSize.X;

            // �����ֶ����õĿ��
            if (Width.IsSet()) IconWidth = Width.GetValue();
            if (Height.IsSet()) IconHeight = Height.GetValue();

            // ���㴹ֱ����ƫ��
            const FVector2D Offset(0.0f, (IconHeight - TextHeight) / 2.0f);
            const FSlateRenderTransform Transform(Offset);

            // �����ؼ��㼶
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
                                        .Image(Brush)  // ����ͼƬ��Դ
                                ]
                        ]
                ];
        }
    }
};

// ���ı��������߼���
class FRichInlineImage : public FRichTextDecorator
{
public:
    FRichInlineImage(URichTextBlock* InOwner, UGGP_Decorator* InDecorator)
        : FRichTextDecorator(InOwner), Decorator(InDecorator) {
    }

    // ����Ƿ�֧�ֵ�ǰ��ǩ
    virtual bool Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const override
    {
        return (
            RunParseResult.Name == TEXT("img") &&
            RunParseResult.MetaData.Contains(TEXT("id"))
            );
    }

protected:
    // ����ͼƬ�ؼ�
    virtual TSharedPtr<SWidget> CreateDecoratorWidget(
        const FTextRunInfo& RunInfo,
        const FTextBlockStyle& DefaultTextStyle
    ) const override
    {
        // ��ȡ��ǩ�еĲ���
        const FString* Id = RunInfo.MetaData.Find(TEXT("id"));
        if (!Id) return nullptr;

        // ����ͼƬ��Դ
        const FSlateBrush* Brush = Decorator->FindImageBrush(**Id, true);
        if (!Brush) return nullptr;

        // ������߲���
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

        // �����ؼ�
        return SNew(SRichInlineImage, Brush, DefaultTextStyle, Width, Height, Decorator->GetRelativeImageScale());
    }

private:
    UGGP_Decorator* Decorator;
};

// ���캯��
UGGP_Decorator::UGGP_Decorator(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
}

// ����������ʵ��
TSharedPtr<ITextDecorator> UGGP_Decorator::CreateDecorator(URichTextBlock* InOwner)
{
    return MakeShareable(new FRichInlineImage(InOwner, this));
}

// ����ͼƬ��Դ���ؼ��޸���
const FSlateBrush* UGGP_Decorator::FindImageBrush(FName TagOrid, bool bWarnIfMissing)
{
    const FRichImageRow* ImageRow = FindImageRow(TagOrid, bWarnIfMissing);
    if (ImageRow)
    {
        // ֱ�ӷ��� Brush���������������
        return &ImageRow->Brush;
    }

    // ���������־
    if (bWarnIfMissing)
    {
        UE_LOG(LogTemp, Error, TEXT("δ�ҵ�IDΪ %s ��ͼƬ��Դ"), *TagOrid.ToString());
    }
    return nullptr;
}

// ����������
FRichImageRow* UGGP_Decorator::FindImageRow(FName TagOrId, bool bWarnIfMissing)
{
    if (ImageSet)
    {
        FString ContextString;
        return ImageSet->FindRow<FRichImageRow>(TagOrId, ContextString, bWarnIfMissing);
    }

    if (bWarnIfMissing)
    {
        UE_LOG(LogTemp, Error, TEXT("���ݱ�� ImageSet δ���ã�"));
    }
    return nullptr;
}