// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ForceTubeVRForUE4PrivatePCH.h"
#include "Public/PlayerControllerCppExample.h"
PRAGMA_DISABLE_OPTIMIZATION
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
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_ForceTubeVRForUE4();
			OuterClass = APlayerControllerCppExample::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900284u;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<APlayerControllerCppExample> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PlayerControllerCppExample.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/PlayerControllerCppExample.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerControllerCppExample, 950898259);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerControllerCppExample(Z_Construct_UClass_APlayerControllerCppExample, &APlayerControllerCppExample::StaticClass, TEXT("/Script/ForceTubeVRForUE4"), TEXT("APlayerControllerCppExample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerCppExample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
