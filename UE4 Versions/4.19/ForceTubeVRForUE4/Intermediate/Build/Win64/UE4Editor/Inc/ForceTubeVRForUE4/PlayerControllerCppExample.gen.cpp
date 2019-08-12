// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ForceTubeVRForUE4PrivatePCH.h"
#include "Public/PlayerControllerCppExample.h"
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
	UClass* Z_Construct_UClass_APlayerControllerCppExample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_ForceTubeVRForUE4,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PlayerControllerCppExample.h" },
				{ "ModuleRelativePath", "Public/PlayerControllerCppExample.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayerControllerCppExample>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayerControllerCppExample::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerControllerCppExample, 121828703);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerControllerCppExample(Z_Construct_UClass_APlayerControllerCppExample, &APlayerControllerCppExample::StaticClass, TEXT("/Script/ForceTubeVRForUE4"), TEXT("APlayerControllerCppExample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerCppExample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
