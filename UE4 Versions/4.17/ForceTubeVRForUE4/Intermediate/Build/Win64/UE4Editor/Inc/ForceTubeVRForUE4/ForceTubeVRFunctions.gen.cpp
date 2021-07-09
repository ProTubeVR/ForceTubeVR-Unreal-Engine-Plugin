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
	FORCETUBEVRFORUE4_API UEnum* Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel();
	UPackage* Z_Construct_UPackage__Script_ForceTubeVRForUE4();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel();
	FORCETUBEVRFORUE4_API UClass* Z_Construct_UClass_UForceTubeVRFunctions();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Kick();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Rumble();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Shot();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower();
	FORCETUBEVRFORUE4_API UClass* Z_Construct_UClass_UForceTubeVRFunctions_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
static UEnum* ForceTubeVRChannel_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel, Z_Construct_UPackage__Script_ForceTubeVRForUE4(), TEXT("ForceTubeVRChannel"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ForceTubeVRChannel(ForceTubeVRChannel_StaticEnum, TEXT("/Script/ForceTubeVRForUE4"), TEXT("ForceTubeVRChannel"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ForceTubeVRForUE4();
		extern uint32 Get_Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ForceTubeVRChannel"), 0, Get_Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ForceTubeVRChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ForceTubeVRChannel::all"), 0);
			EnumNames.Emplace(TEXT("ForceTubeVRChannel::rifle"), 1);
			EnumNames.Emplace(TEXT("ForceTubeVRChannel::rifleButt"), 2);
			EnumNames.Emplace(TEXT("ForceTubeVRChannel::rifleBolt"), 3);
			EnumNames.Emplace(TEXT("ForceTubeVRChannel::pistol1"), 4);
			EnumNames.Emplace(TEXT("ForceTubeVRChannel::pistol2"), 5);
			EnumNames.Emplace(TEXT("ForceTubeVRChannel::other"), 6);
			EnumNames.Emplace(TEXT("ForceTubeVRChannel::vest"), 7);
			EnumNames.Emplace(TEXT("ForceTubeVRChannel::ForceTubeVRChannel_MAX"), 8);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ForceTubeVRChannel");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel_CRC() { return 3122594215U; }
	void UForceTubeVRFunctions::StaticRegisterNativesUForceTubeVRFunctions()
	{
		UClass* Class = UForceTubeVRFunctions::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetBatteryLevel", (Native)&UForceTubeVRFunctions::execGetBatteryLevel },
			{ "InitAsync", (Native)&UForceTubeVRFunctions::execInitAsync },
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
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the battery value of a connected ForceTubeVR (only get the first if it is more than one connected)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync()
	{
		struct ForceTubeVRFunctions_eventInitAsync_Parms
		{
			bool pistolsFirst;
		};
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InitAsync"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(ForceTubeVRFunctions_eventInitAsync_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(pistolsFirst, ForceTubeVRFunctions_eventInitAsync_Parms);
			UProperty* NewProp_pistolsFirst = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("pistolsFirst"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(pistolsFirst, ForceTubeVRFunctions_eventInitAsync_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(pistolsFirst, ForceTubeVRFunctions_eventInitAsync_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_pistolsFirst"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("True = load the two first ForceTubeVRs found in the rifle butt and rifle bolt channels, false = load the two first ForceTubeVRs found in the pistol1 and pistol2 channels"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Kick()
	{
		struct ForceTubeVRFunctions_eventKick_Parms
		{
			uint8 power;
			ForceTubeVRChannel channel;
		};
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Kick"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(ForceTubeVRFunctions_eventKick_Parms));
			UProperty* NewProp_channel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("channel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(channel, ForceTubeVRFunctions_eventKick_Parms), 0x0010000000000080, Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel());
			UProperty* NewProp_channel_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_channel, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_power = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("power"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(power, ForceTubeVRFunctions_eventKick_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_channel"), TEXT("rifle"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("0 = no power, 255 = max power, this function is linear"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings()
	{
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OpenAndroidBluetoothSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ForceTubeVRFunctions.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Only for android packages, open the default android bluetooth settings activity"));
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
			ForceTubeVRChannel channel;
		};
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Rumble"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(ForceTubeVRFunctions_eventRumble_Parms));
			UProperty* NewProp_channel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("channel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(channel, ForceTubeVRFunctions_eventRumble_Parms), 0x0010000000000080, Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel());
			UProperty* NewProp_channel_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_channel, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_timeInSeconds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("timeInSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(timeInSeconds, ForceTubeVRFunctions_eventRumble_Parms), 0x0010000000000080);
			UProperty* NewProp_power = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("power"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(power, ForceTubeVRFunctions_eventRumble_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_channel"), TEXT("rifle"));
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
			ForceTubeVRChannel channel;
		};
		UObject* Outer = Z_Construct_UClass_UForceTubeVRFunctions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Shot"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(ForceTubeVRFunctions_eventShot_Parms));
			UProperty* NewProp_channel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("channel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(channel, ForceTubeVRFunctions_eventShot_Parms), 0x0010000000000080, Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel());
			UProperty* NewProp_channel_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_channel, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_rumbleDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("rumbleDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(rumbleDuration, ForceTubeVRFunctions_eventShot_Parms), 0x0010000000000080);
			UProperty* NewProp_rumblePower = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("rumblePower"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(rumblePower, ForceTubeVRFunctions_eventShot_Parms), 0x0010000000000080);
			UProperty* NewProp_kickPower = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("kickPower"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(kickPower, ForceTubeVRFunctions_eventShot_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ForceTubeVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_channel"), TEXT("rifle"));
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
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_Kick());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_Rumble());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_Shot());
				OuterClass->LinkChild(Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel(), "GetBatteryLevel"); // 1331877547
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync(), "InitAsync"); // 2632485486
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_Kick(), "Kick"); // 2658579411
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings(), "OpenAndroidBluetoothSettings"); // 3392919938
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_Rumble(), "Rumble"); // 3748892470
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch(), "SetActiveResearch"); // 2482819690
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UForceTubeVRFunctions_Shot(), "Shot"); // 345568581
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
	IMPLEMENT_CLASS(UForceTubeVRFunctions, 3589800166);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceTubeVRFunctions(Z_Construct_UClass_UForceTubeVRFunctions, &UForceTubeVRFunctions::StaticClass, TEXT("/Script/ForceTubeVRForUE4"), TEXT("UForceTubeVRFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceTubeVRFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
