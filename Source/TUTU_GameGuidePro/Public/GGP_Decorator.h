// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "GGP_Decorator.generated.h"

/**
 * 
 */
UCLASS()
class TUTU_GAMEGUIDEPRO_API UGGP_Decorator : public URichTextBlockDecorator
{
	GENERATED_BODY()

public:
	UGGP_Decorator(const FObjectInitializer& ObjectInitializer);

	virtual TSharedPtr<ITextDecorator> CreateDecorator(URichTextBlock* InOwner)override;

	virtual const FSlateBrush* FindImageBrush(FName TagOrid,bool bWarnIfMissing);

	//获取图片的相对大小
	float GetRelativeImageScale(){return RelativeImageScale;}
	
protected:
	//相对大小
	UPROPERTY(EditAnywhere,Category=Appearance,meta=(RowType="RichImageRow"))
	float RelativeImageScale=1.5f;
	
	UPROPERTY(EditAnywhere,Category=Appearance,meta=(RowType="RichImageRow"))
	class UDataTable* ImageSet;

	FRichImageRow* FindImageRow(FName TagOrId,bool bWarnIfMissing);
};
