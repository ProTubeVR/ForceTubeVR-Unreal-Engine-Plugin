// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ForceTubeVRForUE4/Private/ForceTubeVRForUE4PrivatePCH.h"
#include "ForceTubeVRForUE4/Public/PlayerControllerCppExample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerControllerCppExample() {}
// Cross Module References
	FORCETUBEVRFORUE4_API UClass* Z_Construct_UClass_APlayerControllerCppExample_NoRegister();
	FORCETUBEVRFORUE4_API UClass* Z_Construct_UClass_APlayerControllerCppExample();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ForceTubeVRForUE4();
// End Cross Module References
	void APlayerControllerCppExample::StaticRegisterNativesAPlayerControllerCppExample()
	{
	}
	UClass* Z_Construct_UClass_APlayerControllerCppExample_NoRegister()
	{
		return APlayerControllerCppExample::StaticClass();
	}
	struct Z_Construct_UClass_APlayerControllerCppExample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerControllerCppExample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ForceTubeVRForUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerControllerCppExample_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerControllerCppExample.h" },
		{ "ModuleRelativePath", "Public/PlayerControllerCppExample.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerControllerCppExample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerCppExample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerControllerCppExample_Statics::ClassParams = {
		&APlayerControllerCppExample::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayerControllerCppExample_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerControllerCppExample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerControllerCppExample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerControllerCppExample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerControllerCppExample, 212213103);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerControllerCppExample(Z_Construct_UClass_APlayerControllerCppExample, &APlayerControllerCppExample::StaticClass, TEXT("/Script/ForceTubeVRForUE4"), TEXT("APlayerControllerCppExample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerCppExample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
