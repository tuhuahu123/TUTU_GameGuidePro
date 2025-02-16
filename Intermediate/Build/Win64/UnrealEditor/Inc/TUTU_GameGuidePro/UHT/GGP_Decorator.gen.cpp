// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TUTU_GameGuidePro/Public/GGP_Decorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGP_Decorator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	TUTU_GAMEGUIDEPRO_API UClass* Z_Construct_UClass_UGGP_Decorator();
	TUTU_GAMEGUIDEPRO_API UClass* Z_Construct_UClass_UGGP_Decorator_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	UPackage* Z_Construct_UPackage__Script_TUTU_GameGuidePro();
// End Cross Module References
	void UGGP_Decorator::StaticRegisterNativesUGGP_Decorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGGP_Decorator);
	UClass* Z_Construct_UClass_UGGP_Decorator_NoRegister()
	{
		return UGGP_Decorator::StaticClass();
	}
	struct Z_Construct_UClass_UGGP_Decorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeImageScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RelativeImageScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGGP_Decorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_TUTU_GameGuidePro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Decorator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GGP_Decorator.h" },
		{ "ModuleRelativePath", "Public/GGP_Decorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Decorator_Statics::NewProp_RelativeImageScale_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "//\xe7\x9b\xb8\xe5\xaf\xb9\xe5\xa4\xa7\xe5\xb0\x8f\n" },
		{ "ModuleRelativePath", "Public/GGP_Decorator.h" },
		{ "RowType", "RichImageRow" },
		{ "ToolTip", "\xe7\x9b\xb8\xe5\xaf\xb9\xe5\xa4\xa7\xe5\xb0\x8f" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGGP_Decorator_Statics::NewProp_RelativeImageScale = { "RelativeImageScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Decorator, RelativeImageScale), METADATA_PARAMS(Z_Construct_UClass_UGGP_Decorator_Statics::NewProp_RelativeImageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Decorator_Statics::NewProp_RelativeImageScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGP_Decorator_Statics::NewProp_ImageSet_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/GGP_Decorator.h" },
		{ "RowType", "RichImageRow" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGP_Decorator_Statics::NewProp_ImageSet = { "ImageSet", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGGP_Decorator, ImageSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGGP_Decorator_Statics::NewProp_ImageSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Decorator_Statics::NewProp_ImageSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGGP_Decorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Decorator_Statics::NewProp_RelativeImageScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGP_Decorator_Statics::NewProp_ImageSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGGP_Decorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGP_Decorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGP_Decorator_Statics::ClassParams = {
		&UGGP_Decorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGGP_Decorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Decorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGGP_Decorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGGP_Decorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGGP_Decorator()
	{
		if (!Z_Registration_Info_UClass_UGGP_Decorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGP_Decorator.OuterSingleton, Z_Construct_UClass_UGGP_Decorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGGP_Decorator.OuterSingleton;
	}
	template<> TUTU_GAMEGUIDEPRO_API UClass* StaticClass<UGGP_Decorator>()
	{
		return UGGP_Decorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGGP_Decorator);
	UGGP_Decorator::~UGGP_Decorator() {}
	struct Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Decorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Decorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGGP_Decorator, UGGP_Decorator::StaticClass, TEXT("UGGP_Decorator"), &Z_Registration_Info_UClass_UGGP_Decorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGP_Decorator), 3316356438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Decorator_h_3437610503(TEXT("/Script/TUTU_GameGuidePro"),
		Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Decorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TUTU_GameGuidePro_HostProject_Plugins_TUTU_GameGuidePro_Source_TUTU_GameGuidePro_Public_GGP_Decorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
