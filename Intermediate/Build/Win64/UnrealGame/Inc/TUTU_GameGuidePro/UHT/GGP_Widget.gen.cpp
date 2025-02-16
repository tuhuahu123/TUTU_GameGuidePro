// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TUTU_GameGuidePro/Public/GGP_Widget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGP_Widget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	TUTU_GAMEGUIDEPRO_API UClass* Z_Construct_UClass_UGGP_Widget();
	TUTU_GAMEGUIDEPRO_API UClass* Z_Construct_UClass_UGGP_Widget_NoRegister();
	TUTU_GAMEGUIDEPRO_API UEnum* Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType();
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TUTU_GameGuidePro();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETutorialType;
	static UEnum* ETutorialType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETutorialType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETutorialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType, Z_Construct_UPackage__Script_TUTU_GameGuidePro(), TEXT("ETutorialType"));
		}
		return Z_Registration_Info_UEnum_ETutorialType.OuterSingleton;
	}
	template<> TUTU_GAMEGUIDEPRO_API UEnum* StaticEnum<ETutorialType>()
	{
		return ETutorialType_StaticEnum();
	}
	struct Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType_Statics::Enumerators[] = {
		{ "ETutorialType::None", (int64)ETutorialType::None },
		{ "ETutorialType::Message", (int64)ETutorialType::Message },
		{ "ETutorialType::Modal", (int64)ETutorialType::Modal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Message.Name", "ETutorialType::Message" },
		{ "Modal.Name", "ETutorialType::Modal" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "None.Name", "ETutorialType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TUTU_GameGuidePro,
		nullptr,
		"ETutorialType",
		"ETutorialType",
		Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType()
	{
		if (!Z_Registration_Info_UEnum_ETutorialType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETutorialType.InnerSingleton, Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETutorialType.InnerSingleton;
	}
	DEFINE_FUNCTION(UGGP_Widget::execHoldingCanceled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HoldingCanceled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGGP_Widget::execHoldingStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HoldingStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGGP_Widget::execSetUpModal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHoldTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpModal(Z_Param_InHoldTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGGP_Widget::execUpdateModalTutorialText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_NewContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateModalTutorialText(Z_Param_NewContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGGP_Widget::execShowModalTutorial)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTitle);
		P_GET_PROPERTY(FTextProperty,Z_Param_InContent);
		P_GET_OBJECT(UObject,Z_Param_InMedia);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowModalTutorial(Z_Param_InTitle,Z_Param_InContent,Z_Param_InMedia);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGGP_Widget::execUpdateMessageTutorialText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_NewContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMessageTutorialText(Z_Param_NewContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGGP_Widget::execHideTurorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideTurorial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGGP_Widget::execShowMessageTutorial)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMessageTutorial(Z_Param_InContent);
		P_NATIVE_END;
	}
	void UGGP_Widget::StaticRegisterNativesUGGP_Widget()
	{
		UClass* Class = UGGP_Widget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideTurorial", &UGGP_Widget::execHideTurorial },
			{ "HoldingCanceled", &UGGP_Widget::execHoldingCanceled },
			{ "HoldingStarted", &UGGP_Widget::execHoldingStarted },
			{ "SetUpModal", &UGGP_Widget::execSetUpModal },
			{ "ShowMessageTutorial", &UGGP_Widget::execShowMessageTutorial },
			{ "ShowModalTutorial", &UGGP_Widget::execShowModalTutorial },
			{ "UpdateMessageTutorialText", &UGGP_Widget::execUpdateMessageTutorialText },
			{ "UpdateModalTutorialText", &UGGP_Widget::execUpdateModalTutorialText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGGP_Widget_HideTurorial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGP_Widget_HideTurorial_Statics::Function_MetaDataParams[] = {
		{ "Category", "GGP" },
		{ "Comment", "//\xe9\x9a\x90\xe8\x97\x8f\xe6\x95\x99\xe7\xa8\x8b\xe6\xb6\x88\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe9\x9a\x90\xe8\x97\x8f\xe6\x95\x99\xe7\xa8\x8b\xe6\xb6\x88\xe6\x81\xaf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGP_Widget_HideTurorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGP_Widget, nullptr, "HideTurorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGGP_Widget_HideTurorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_HideTurorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGGP_Widget_HideTurorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGP_Widget_HideTurorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGGP_Widget_HoldingCanceled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGP_Widget_HoldingCanceled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x9d\xbe\xe5\xbc\x80\xe6\x8f\x90\xe7\xa4\xba\xe6\x8c\x89\xe9\x94\xae\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\x9d\xbe\xe5\xbc\x80\xe6\x8f\x90\xe7\xa4\xba\xe6\x8c\x89\xe9\x94\xae" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGP_Widget_HoldingCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGP_Widget, nullptr, "HoldingCanceled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGGP_Widget_HoldingCanceled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_HoldingCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGGP_Widget_HoldingCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGP_Widget_HoldingCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGGP_Widget_HoldingStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGP_Widget_HoldingStarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x8c\x89\xe4\xb8\x8b\xe6\x8f\x90\xe9\x86\x92\xe6\x8c\x89\xe9\x94\xae\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\x8c\x89\xe4\xb8\x8b\xe6\x8f\x90\xe9\x86\x92\xe6\x8c\x89\xe9\x94\xae" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGP_Widget_HoldingStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGP_Widget, nullptr, "HoldingStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGGP_Widget_HoldingStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_HoldingStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGGP_Widget_HoldingStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGP_Widget_HoldingStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics
	{
		struct GGP_Widget_eventSetUpModal_Parms
		{
			float InHoldTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InHoldTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics::NewProp_InHoldTime = { "InHoldTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GGP_Widget_eventSetUpModal_Parms, InHoldTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics::NewProp_InHoldTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics::Function_MetaDataParams[] = {
		{ "Category", "GGP" },
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe6\x8c\x89\xe9\x92\xae\xe6\x97\xb6\xe9\x97\xb4\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe6\x8c\x89\xe9\x92\xae\xe6\x97\xb6\xe9\x97\xb4" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGP_Widget, nullptr, "SetUpModal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics::GGP_Widget_eventSetUpModal_Parms), Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGGP_Widget_SetUpModal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGP_Widget_SetUpModal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics
	{
		struct GGP_Widget_eventShowMessageTutorial_Parms
		{
			FText InContent;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InContent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics::NewProp_InContent = { "InContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GGP_Widget_eventShowMessageTutorial_Parms, InContent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics::NewProp_InContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics::Function_MetaDataParams[] = {
		{ "Category", "GGP" },
		{ "Comment", "//\xe6\x96\x87\xe6\x9c\xac\xe6\xb6\x88\xe6\x81\xaf\n//\xe6\x98\xbe\xe7\xa4\xba\xe6\x95\x99\xe7\xa8\x8b\xe6\xb6\x88\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\x96\x87\xe6\x9c\xac\xe6\xb6\x88\xe6\x81\xaf\n\xe6\x98\xbe\xe7\xa4\xba\xe6\x95\x99\xe7\xa8\x8b\xe6\xb6\x88\xe6\x81\xaf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGP_Widget, nullptr, "ShowMessageTutorial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics::GGP_Widget_eventShowMessageTutorial_Parms), Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics
	{
		struct GGP_Widget_eventShowModalTutorial_Parms
		{
			FName InTitle;
			FText InContent;
			UObject* InMedia;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTitle;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InContent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMedia;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::NewProp_InTitle = { "InTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GGP_Widget_eventShowModalTutorial_Parms, InTitle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::NewProp_InContent = { "InContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GGP_Widget_eventShowModalTutorial_Parms, InContent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::NewProp_InMedia = { "InMedia", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GGP_Widget_eventShowModalTutorial_Parms, InMedia), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::NewProp_InTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::NewProp_InContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::NewProp_InMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::Function_MetaDataParams[] = {
		{ "Category", "GGP" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\xb6\x88\xe6\x81\xaf\n//\xe6\x98\xbe\xe7\xa4\xba\xe6\x95\x99\xe7\xa8\x8b\xe8\xa7\x86\xe9\xa2\x91\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\xb6\x88\xe6\x81\xaf\n\xe6\x98\xbe\xe7\xa4\xba\xe6\x95\x99\xe7\xa8\x8b\xe8\xa7\x86\xe9\xa2\x91" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGP_Widget, nullptr, "ShowModalTutorial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::GGP_Widget_eventShowModalTutorial_Parms), Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics
	{
		struct GGP_Widget_eventUpdateMessageTutorialText_Parms
		{
			FText NewContent;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewContent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics::NewProp_NewContent = { "NewContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GGP_Widget_eventUpdateMessageTutorialText_Parms, NewContent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics::NewProp_NewContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics::Function_MetaDataParams[] = {
		{ "Category", "GGP" },
		{ "Comment", "//\xe6\x9b\xb4\xe6\x96\xb0\xe6\x95\x99\xe7\xa8\x8b\xe6\xb6\x88\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe6\x95\x99\xe7\xa8\x8b\xe6\xb6\x88\xe6\x81\xaf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGP_Widget, nullptr, "UpdateMessageTutorialText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics::GGP_Widget_eventUpdateMessageTutorialText_Parms), Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics
	{
		struct GGP_Widget_eventUpdateModalTutorialText_Parms
		{
			FText NewContent;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewContent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics::NewProp_NewContent = { "NewContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GGP_Widget_eventUpdateModalTutorialText_Parms, NewContent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics::NewProp_NewContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics::Function_MetaDataParams[] = {
		{ "Category", "GGP" },
		{ "Comment", "//\xe6\x9b\xb4\xe6\x96\xb0\xe6\x95\x99\xe7\xa8\x8b\xe8\xa7\x86\xe9\xa2\x91\xe6\x96\x87\xe6\x9c\xac\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe6\x95\x99\xe7\xa8\x8b\xe8\xa7\x86\xe9\xa2\x91\xe6\x96\x87\xe6\x9c\xac" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGP_Widget, nullptr, "UpdateModalTutorialText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics::GGP_Widget_eventUpdateModalTutorialText_Parms), Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGGP_Widget);
	UClass* Z_Construct_UClass_UGGP_Widget_NoRegister()
	{
		return UGGP_Widget::StaticClass();
	}
	struct Z_Construct_UClass_UGGP_Widget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageTutorialText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageTutorialText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TutorialBoxOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TutorialBoxOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TutoriaModaCanvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TutoriaModaCanvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blur_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModalTutorialText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModalTutorialText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModalTitleText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModalTitleText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModalTutorialMedia_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModalTutorialMedia;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmationProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfirmationProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfirmButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowMessageAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowMessageAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HideMessageAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HideMessageAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowModaAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowModaAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HideModaAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HideModaAnim;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurentTutorialType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurentTutorialType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurentTutorialType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TutorialMediaMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TutorialMediaMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TutorialMediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TutorialMediaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HodingProgressBarChange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HodingProgressBarChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HodingLerpAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HodingLerpAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGGP_Widget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TUTU_GameGuidePro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGGP_Widget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGGP_Widget_HideTurorial, "HideTurorial" }, // 3746147302
		{ &Z_Construct_UFunction_UGGP_Widget_HoldingCanceled, "HoldingCanceled" }, // 1423662462
		{ &Z_Construct_UFunction_UGGP_Widget_HoldingStarted, "HoldingStarted" }, // 2802282145
		{ &Z_Construct_UFunction_UGGP_Widget_SetUpModal, "SetUpModal" }, // 1958838190
		{ &Z_Construct_UFunction_UGGP_Widget_ShowMessageTutorial, "ShowMessageTutorial" }, // 2187139521
		{ &Z_Construct_UFunction_UGGP_Widget_ShowModalTutorial, "ShowModalTutorial" }, // 1718840394
		{ &Z_Construct_UFunction_UGGP_Widget_UpdateMessageTutorialText, "UpdateMessageTutorialText" }, // 2677770203
		{ &Z_Construct_UFunction_UGGP_Widget_UpdateModalTutorialText, "UpdateModalTutorialText" }, // 2544391567
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GGP_Widget.h" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_MessageTutorialText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Default" },
		{ "Comment", "//\xe6\xb6\x88\xe6\x81\xaf\xe6\x96\x87\xe6\x9c\xac\xe5\x9d\x97(\xe5\xa4\x9a\xe6\xa0\xbc\xe5\xbc\x8f\xe6\x96\x87\xe6\x9c\xac)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\xb6\x88\xe6\x81\xaf\xe6\x96\x87\xe6\x9c\xac\xe5\x9d\x97(\xe5\xa4\x9a\xe6\xa0\xbc\xe5\xbc\x8f\xe6\x96\x87\xe6\x9c\xac)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_MessageTutorialText = { "MessageTutorialText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, MessageTutorialText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_MessageTutorialText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_MessageTutorialText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialBoxOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Default" },
		{ "Comment", "//\xe6\x95\x99\xe7\xa8\x8b\xe6\xa1\x86(\xe8\xa6\x86\xe5\xb1\x82)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\x95\x99\xe7\xa8\x8b\xe6\xa1\x86(\xe8\xa6\x86\xe5\xb1\x82)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialBoxOverlay = { "TutorialBoxOverlay", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, TutorialBoxOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialBoxOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialBoxOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutoriaModaCanvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Default" },
		{ "Comment", "//\xe7\x94\xbb\xe5\xb8\x83\xe9\x9d\xa2\xe6\x9d\xbf\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe7\x94\xbb\xe5\xb8\x83\xe9\x9d\xa2\xe6\x9d\xbf" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutoriaModaCanvas = { "TutoriaModaCanvas", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, TutoriaModaCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutoriaModaCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutoriaModaCanvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_Blur_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Default" },
		{ "Comment", "//\xe8\x83\x8c\xe6\x99\xaf\xe6\xa8\xa1\xe7\xb3\x8a\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe8\x83\x8c\xe6\x99\xaf\xe6\xa8\xa1\xe7\xb3\x8a" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_Blur = { "Blur", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, Blur), Z_Construct_UClass_UBackgroundBlur_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_Blur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_Blur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTutorialText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Default" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x95\x99\xe7\xa8\x8b\xe6\x96\x87\xe5\xad\x97\xe6\x8f\x8f\xe8\xbf\xb0\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x95\x99\xe7\xa8\x8b\xe6\x96\x87\xe5\xad\x97\xe6\x8f\x8f\xe8\xbf\xb0" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTutorialText = { "ModalTutorialText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, ModalTutorialText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTutorialText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTutorialText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTitleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Default" },
		{ "Comment", "//\xe6\xa0\x87\xe9\xa2\x98\xe6\x96\x87\xe6\x9c\xac\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\xa0\x87\xe9\xa2\x98\xe6\x96\x87\xe6\x9c\xac" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTitleText = { "ModalTitleText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, ModalTitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTitleText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTutorialMedia_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Default" },
		{ "Comment", "//\xe6\x95\x99\xe7\xa8\x8b\xe8\xa7\x86\xe9\xa2\x91 \xe8\xa7\x86\xe9\xa2\x91\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\x95\x99\xe7\xa8\x8b\xe8\xa7\x86\xe9\xa2\x91 \xe8\xa7\x86\xe9\xa2\x91" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTutorialMedia = { "ModalTutorialMedia", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, ModalTutorialMedia), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTutorialMedia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTutorialMedia_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ConfirmationProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Default" },
		{ "Comment", "//\xe8\xbf\x9b\xe5\xba\xa6\xe6\x9d\xa1(\xe7\x8e\xa9\xe5\xae\xb6\xe8\xbf\x9b\xe5\x85\xa5\xe6\x95\x99\xe7\xa8\x8b\xe6\x8c\x89\xe5\x85\xa5\xe6\x8c\x89\xe9\x92\xae\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe8\xbf\x9b\xe5\xba\xa6\xe6\x9d\xa1(\xe7\x8e\xa9\xe5\xae\xb6\xe8\xbf\x9b\xe5\x85\xa5\xe6\x95\x99\xe7\xa8\x8b\xe6\x8c\x89\xe5\x85\xa5\xe6\x8c\x89\xe9\x92\xae\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ConfirmationProgressBar = { "ConfirmationProgressBar", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, ConfirmationProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ConfirmationProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ConfirmationProgressBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ConfirmButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Default" },
		{ "Comment", "//\xe6\x8c\x89\xe9\x92\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\x8c\x89\xe9\x92\xae" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ConfirmButton = { "ConfirmButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, ConfirmButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ConfirmButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ConfirmButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ShowMessageAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animations" },
		{ "Comment", "//\xe6\x98\xbe\xe7\xa4\xba\xe5\x92\x8c\xe9\x9a\x90\xe8\x97\x8f\xe6\xb6\x88\xe6\x81\xaf\xe5\x8a\xa8\xe7\x94\xbb\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\x98\xbe\xe7\xa4\xba\xe5\x92\x8c\xe9\x9a\x90\xe8\x97\x8f\xe6\xb6\x88\xe6\x81\xaf\xe5\x8a\xa8\xe7\x94\xbb" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ShowMessageAnim = { "ShowMessageAnim", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, ShowMessageAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ShowMessageAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ShowMessageAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HideMessageAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HideMessageAnim = { "HideMessageAnim", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, HideMessageAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HideMessageAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HideMessageAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ShowModaAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ShowModaAnim = { "ShowModaAnim", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, ShowModaAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ShowModaAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ShowModaAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HideModaAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HideModaAnim = { "HideModaAnim", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, HideModaAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HideModaAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HideModaAnim_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_CurentTutorialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_CurentTutorialType_MetaData[] = {
		{ "Category", "GGP" },
		{ "Comment", "//\xe6\x95\x99\xe7\xa8\x8b\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe6\x95\x99\xe7\xa8\x8b\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_CurentTutorialType = { "CurentTutorialType", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, CurentTutorialType), Z_Construct_UEnum_TUTU_GameGuidePro_ETutorialType, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_CurentTutorialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_CurentTutorialType_MetaData)) }; // 633627318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialMediaMaterial_MetaData[] = {
		{ "Category", "GGP" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x9d\x90\xe8\xb4\xa8\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x9d\x90\xe8\xb4\xa8" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialMediaMaterial = { "TutorialMediaMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, TutorialMediaMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialMediaMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialMediaMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialMediaPlayer_MetaData[] = {
		{ "Category", "GGP" },
		{ "Comment", "//\xe5\xaa\x92\xe4\xbd\x93\xe6\x92\xad\xe6\x94\xbe\xe5\x99\xa8\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe5\xaa\x92\xe4\xbd\x93\xe6\x92\xad\xe6\x94\xbe\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialMediaPlayer = { "TutorialMediaPlayer", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, TutorialMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialMediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialMediaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HodingProgressBarChange_MetaData[] = {
		{ "Category", "GGP" },
		{ "Comment", "//\xe8\xbf\x9b\xe5\xba\xa6\xe6\x9d\xa1\xe7\x9a\x84\xe5\x8f\x98\xe5\x8c\x96\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe8\xbf\x9b\xe5\xba\xa6\xe6\x9d\xa1\xe7\x9a\x84\xe5\x8f\x98\xe5\x8c\x96\xe7\x8e\x87" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HodingProgressBarChange = { "HodingProgressBarChange", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, HodingProgressBarChange), METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HodingProgressBarChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HodingProgressBarChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HodingLerpAlpha_MetaData[] = {
		{ "Category", "GGP" },
		{ "Comment", "//\xe8\xbf\x9b\xe5\xba\xa6\xe6\x9d\xa1\xe7\x9a\x84\xe5\x8f\x98\xe5\x8c\x96\xe5\x80\xbc\n" },
		{ "ModuleRelativePath", "Public/GGP_Widget.h" },
		{ "ToolTip", "\xe8\xbf\x9b\xe5\xba\xa6\xe6\x9d\xa1\xe7\x9a\x84\xe5\x8f\x98\xe5\x8c\x96\xe5\x80\xbc" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HodingLerpAlpha = { "HodingLerpAlpha", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Widget, HodingLerpAlpha), METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HodingLerpAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HodingLerpAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGGP_Widget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_MessageTutorialText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialBoxOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutoriaModaCanvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_Blur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTutorialText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTitleText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ModalTutorialMedia,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ConfirmationProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ConfirmButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ShowMessageAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HideMessageAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_ShowModaAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HideModaAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_CurentTutorialType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_CurentTutorialType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialMediaMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_TutorialMediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HodingProgressBarChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Widget_Statics::NewProp_HodingLerpAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGGP_Widget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGP_Widget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGP_Widget_Statics::ClassParams = {
		&UGGP_Widget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGGP_Widget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGGP_Widget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Widget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGGP_Widget()
	{
		if (!Z_Registration_Info_UClass_UGGP_Widget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGP_Widget.OuterSingleton, Z_Construct_UClass_UGGP_Widget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGGP_Widget.OuterSingleton;
	}
	template<> TUTU_GAMEGUIDEPRO_API UClass* StaticClass<UGGP_Widget>()
	{
		return UGGP_Widget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGGP_Widget);
	UGGP_Widget::~UGGP_Widget() {}
	struct Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Widget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Widget_h_Statics::EnumInfo[] = {
		{ ETutorialType_StaticEnum, TEXT("ETutorialType"), &Z_Registration_Info_UEnum_ETutorialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 633627318U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Widget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGGP_Widget, UGGP_Widget::StaticClass, TEXT("UGGP_Widget"), &Z_Registration_Info_UClass_UGGP_Widget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGP_Widget), 484276418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Widget_h_1839482290(TEXT("/Script/TUTU_GameGuidePro"),
		Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Widget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Widget_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Widget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Widget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
