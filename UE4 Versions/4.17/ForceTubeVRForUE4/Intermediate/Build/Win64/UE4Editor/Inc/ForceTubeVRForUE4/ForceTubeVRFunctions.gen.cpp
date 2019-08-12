// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ForceTubeVRForUE4PrivatePCH.h"
#include "Public/ForceTubeVRFunctions.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceTubeVRFunctions() {}
// Cross Module References
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel();
	FORCETUBEVRFORUE4_API UClass* Z_Construct_UClass_UForceTubeVRFunctions();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Kick();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Rumble();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Shot();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower();
	FORCETUBEVRFORUE4_API UClass* Z_Construct_UClass_UForceTubeVRFunctions_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ForceTubeVRForUE4();
// End Cross Module References
	void UForceTubeVRFunctions::StaticRegisterNativesUForceTubeVRFunctions()
	{
		UClass* Class = UForceTubeVRFunctions::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetBatteryLevel", (Native)&UForceTubeVRFunctions::execGetBatteryLevel },
			{ "Kick", (Native)&UForceTubeVRFunctions::execKick },
			{ "OpenAndroidBluetoothSettings", (Native)&UForceTubeVRFunctions::execOpenAndroidBluetoothSettings },
			{ "Rumble", (Native)&UForceTubeVRFunctions::execRumble },
			{ "SetActiveResearch", (Native)&UForceTubeVRFunctions::execSetActiveResearch },
			{ "Shot", (Native)&UForceTubeVRFunctions::execShot },
			{ "TempoToKickPower", (Native)&UForceTubeVRFunctions::execTempoToKickPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel()
	{
		struct ForceTubeVRFunctions_eventGetBatteryLevel_Parms
		{
			uint8 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetBatteryLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(ForceTubeVRFunctions_eventGetBatteryLevel_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ReturnValue, ForceTubeVRFunctions_eventGetBatteryLevel_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Kick()
	{
		struct ForceTubeVRFunctions_eventKick_Parms
		{
			uint8 power;
		};
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Kick"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(ForceTubeVRFunctions_eventKick_Parms));
			UProperty* NewProp_power = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("power"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(power, ForceTubeVRFunctions_eventKick_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("0 = no power, 255 = max power, this function is linear"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings()
	{
		struct ForceTubeVRFunctions_eventOpenAndroidBluetoothSettings_Parms
		{
			bool isInVR;
		};
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OpenAndroidBluetoothSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(ForceTubeVRFunctions_eventOpenAndroidBluetoothSettings_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(isInVR, ForceTubeVRFunctions_eventOpenAndroidBluetoothSettings_Parms);
			UProperty* NewProp_isInVR = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("isInVR"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(isInVR, ForceTubeVRFunctions_eventOpenAndroidBluetoothSettings_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(isInVR, ForceTubeVRFunctions_eventOpenAndroidBluetoothSettings_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Rumble()
	{
		struct ForceTubeVRFunctions_eventRumble_Parms
		{
			uint8 power;
			float timeInSeconds;
		};
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Rumble"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(ForceTubeVRFunctions_eventRumble_Parms));
			UProperty* NewProp_timeInSeconds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("timeInSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(timeInSeconds, ForceTubeVRFunctions_eventRumble_Parms), 0x0010000000000080);
			UProperty* NewProp_power = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("power"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(power, ForceTubeVRFunctions_eventRumble_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("For power : 0 = no power, 255 = max power, if power <= 126, only the little motor is activated, this function is linear ; for timeInSeconds : 0.0f seconds is a special command that make the ForceTubeVR never stop the rumble"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch()
	{
		struct ForceTubeVRFunctions_eventSetActiveResearch_Parms
		{
			bool active;
		};
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetActiveResearch"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(ForceTubeVRFunctions_eventSetActiveResearch_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(active, ForceTubeVRFunctions_eventSetActiveResearch_Parms);
			UProperty* NewProp_active = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("active"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(active, ForceTubeVRFunctions_eventSetActiveResearch_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(active, ForceTubeVRFunctions_eventSetActiveResearch_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("It is true by default, set it to false prevent the DLL to make a thread regularly check for disconnections and reconnect the ForceTubeVR if needed"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Shot()
	{
		struct ForceTubeVRFunctions_eventShot_Parms
		{
			uint8 kickPower;
			uint8 rumblePower;
			float rumbleDuration;
		};
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Shot"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(ForceTubeVRFunctions_eventShot_Parms));
			UProperty* NewProp_rumbleDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("rumbleDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(rumbleDuration, ForceTubeVRFunctions_eventShot_Parms), 0x0010000000000080);
			UProperty* NewProp_rumblePower = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("rumblePower"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(rumblePower, ForceTubeVRFunctions_eventShot_Parms), 0x0010000000000080);
			UProperty* NewProp_kickPower = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("kickPower"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(kickPower, ForceTubeVRFunctions_eventShot_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Combination of kick and rumble methods ; rumble duration still be in seconds and still don't stop if you set this parameter at 0.0f"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower()
	{
		struct ForceTubeVRFunctions_eventTempoToKickPower_Parms
		{
			float tempo;
			uint8 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TempoToKickPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(ForceTubeVRFunctions_eventTempoToKickPower_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ReturnValue, ForceTubeVRFunctions_eventTempoToKickPower_Parms), 0x0010000000000580);
			UProperty* NewProp_tempo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("tempo"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(tempo, ForceTubeVRFunctions_eventTempoToKickPower_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Take duration in seconds between two shots (for auto-shots) and give you the maximal kick power you can use without any loss (in high shot frequencies, you will have some loss of kick if kick power is too big)"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UForceTubeVRFunctions_NoRegister()
	{
		return UForceTubeVRFunctions::StaticClass();
	}
	UClass* Z_Construct_UClass_UForceTubeVRFunctions()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_ForceTubeVRForUE4();
			OuterClass = UForceTubeVRFunctions::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_Kick());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_Rumble());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_Shot());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel(), "GetBatteryLevel"); // 1738383808
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_Kick(), "Kick"); // 2649274017
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings(), "OpenAndroidBluetoothSettings"); // 3638681091
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_Rumble(), "Rumble"); // 2467415040
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch(), "SetActiveResearch"); // 2482819690
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_Shot(), "Shot"); // 1250226237
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower(), "TempoToKickPower"); // 3874416451
				static TCppClassTypeInfo<TCppClassTypeTraits<UForceTubeVRFunctions> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ForceTubeVRFunctions.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForceTubeVRFunctions, 2909438102);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceTubeVRFunctions(Z_Construct_UClass_UForceTubeVRFunctions, &UForceTubeVRFunctions::StaticClass, TEXT("/Script/ForceTubeVRForUE4"), TEXT("UForceTubeVRFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceTubeVRFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
