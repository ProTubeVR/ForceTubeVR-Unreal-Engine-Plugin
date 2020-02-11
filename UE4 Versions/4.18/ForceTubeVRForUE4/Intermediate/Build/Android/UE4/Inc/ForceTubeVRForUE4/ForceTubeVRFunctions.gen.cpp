// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ForceTubeVRForUE4PrivatePCH.h"
#include "Public/ForceTubeVRFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceTubeVRFunctions() {}
// Cross Module References
	FORCETUBEVRFORUE4_API UEnum* Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel();
	UPackage* Z_Construct_UPackage__Script_ForceTubeVRForUE4();
	FORCETUBEVRFORUE4_API UClass* Z_Construct_UClass_UForceTubeVRFunctions_NoRegister();
	FORCETUBEVRFORUE4_API UClass* Z_Construct_UClass_UForceTubeVRFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Kick();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Rumble();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Shot();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower();
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
	uint32 Get_Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel_CRC() { return 158206719U; }
	UEnum* Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ForceTubeVRForUE4();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ForceTubeVRChannel"), 0, Get_Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ForceTubeVRChannel::all", (int64)ForceTubeVRChannel::all },
				{ "ForceTubeVRChannel::rifle", (int64)ForceTubeVRChannel::rifle },
				{ "ForceTubeVRChannel::rifleButt", (int64)ForceTubeVRChannel::rifleButt },
				{ "ForceTubeVRChannel::rifleBolt", (int64)ForceTubeVRChannel::rifleBolt },
				{ "ForceTubeVRChannel::pistol1", (int64)ForceTubeVRChannel::pistol1 },
				{ "ForceTubeVRChannel::pistol2", (int64)ForceTubeVRChannel::pistol2 },
				{ "ForceTubeVRChannel::other", (int64)ForceTubeVRChannel::other },
				{ "ForceTubeVRChannel::vest", (int64)ForceTubeVRChannel::vest },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ForceTubeVRForUE4,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ForceTubeVRChannel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ForceTubeVRChannel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UForceTubeVRFunctions::StaticRegisterNativesUForceTubeVRFunctions()
	{
		UClass* Class = UForceTubeVRFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBatteryLevel", (Native)&UForceTubeVRFunctions::execGetBatteryLevel },
			{ "InitAsync", (Native)&UForceTubeVRFunctions::execInitAsync },
			{ "Kick", (Native)&UForceTubeVRFunctions::execKick },
			{ "OpenAndroidBluetoothSettings", (Native)&UForceTubeVRFunctions::execOpenAndroidBluetoothSettings },
			{ "Rumble", (Native)&UForceTubeVRFunctions::execRumble },
			{ "SetActiveResearch", (Native)&UForceTubeVRFunctions::execSetActiveResearch },
			{ "Shot", (Native)&UForceTubeVRFunctions::execShot },
			{ "TempoToKickPower", (Native)&UForceTubeVRFunctions::execTempoToKickPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel()
	{
		struct ForceTubeVRFunctions_eventGetBatteryLevel_Parms
		{
			uint8 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventGetBatteryLevel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceTubeVR" },
				{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
				{ "ToolTip", "Get the battery value of a connected ForceTubeVR (only get the first if it is more than one connected)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "GetBatteryLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventGetBatteryLevel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync()
	{
		struct ForceTubeVRFunctions_eventInitAsync_Parms
		{
			bool pistolsFirst;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_pistolsFirst_SetBit = [](void* Obj){ ((ForceTubeVRFunctions_eventInitAsync_Parms*)Obj)->pistolsFirst = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pistolsFirst = { UE4CodeGen_Private::EPropertyClass::Bool, "pistolsFirst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ForceTubeVRFunctions_eventInitAsync_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_pistolsFirst_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pistolsFirst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceTubeVR" },
				{ "CPP_Default_pistolsFirst", "false" },
				{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
				{ "ToolTip", "True = load the two first ForceTubeVRs found in the rifle butt and rifle bolt channels, false = load the two first ForceTubeVRs found in the pistol1 and pistol2 channels" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "InitAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventInitAsync_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_channel = { UE4CodeGen_Private::EPropertyClass::Enum, "channel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventKick_Parms, channel), Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_channel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_power = { UE4CodeGen_Private::EPropertyClass::Byte, "power", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventKick_Parms, power), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_channel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_channel_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_power,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceTubeVR" },
				{ "CPP_Default_channel", "rifle" },
				{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
				{ "ToolTip", "0 = no power, 255 = max power, this function is linear" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "Kick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventKick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceTubeVR" },
				{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
				{ "ToolTip", "Only for android packages, open the default android bluetooth settings activity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "OpenAndroidBluetoothSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_channel = { UE4CodeGen_Private::EPropertyClass::Enum, "channel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventRumble_Parms, channel), Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_channel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeInSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "timeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventRumble_Parms, timeInSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_power = { UE4CodeGen_Private::EPropertyClass::Byte, "power", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventRumble_Parms, power), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_channel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_channel_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_timeInSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_power,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceTubeVR" },
				{ "CPP_Default_channel", "rifle" },
				{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
				{ "ToolTip", "For power : 0 = no power, 255 = max power, if power <= 126, only the little motor is activated, this function is linear ; for timeInSeconds : 0.0f seconds is a special command that make the ForceTubeVR never stop the rumble" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "Rumble", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventRumble_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch()
	{
		struct ForceTubeVRFunctions_eventSetActiveResearch_Parms
		{
			bool active;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_active_SetBit = [](void* Obj){ ((ForceTubeVRFunctions_eventSetActiveResearch_Parms*)Obj)->active = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active = { UE4CodeGen_Private::EPropertyClass::Bool, "active", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ForceTubeVRFunctions_eventSetActiveResearch_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_active_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_active,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceTubeVR" },
				{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
				{ "ToolTip", "It is true by default, set it to false prevent the DLL to make a thread regularly check for disconnections and reconnect the ForceTubeVR if needed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "SetActiveResearch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventSetActiveResearch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_channel = { UE4CodeGen_Private::EPropertyClass::Enum, "channel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventShot_Parms, channel), Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_channel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rumbleDuration = { UE4CodeGen_Private::EPropertyClass::Float, "rumbleDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventShot_Parms, rumbleDuration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_rumblePower = { UE4CodeGen_Private::EPropertyClass::Byte, "rumblePower", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventShot_Parms, rumblePower), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_kickPower = { UE4CodeGen_Private::EPropertyClass::Byte, "kickPower", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventShot_Parms, kickPower), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_channel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_channel_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rumbleDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rumblePower,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_kickPower,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceTubeVR" },
				{ "CPP_Default_channel", "rifle" },
				{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
				{ "ToolTip", "Combination of kick and rumble methods ; rumble duration still be in seconds and still don't stop if you set this parameter at 0.0f" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "Shot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventShot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventTempoToKickPower_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tempo = { UE4CodeGen_Private::EPropertyClass::Float, "tempo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventTempoToKickPower_Parms, tempo), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tempo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ForceTubeVR" },
				{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
				{ "ToolTip", "Take duration in seconds between two shots (for auto-shots) and give you the maximal kick power you can use without any loss (in high shot frequencies, you will have some loss of kick if kick power is too big)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "TempoToKickPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventTempoToKickPower_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UForceTubeVRFunctions_NoRegister()
	{
		return UForceTubeVRFunctions::StaticClass();
	}
	UClass* Z_Construct_UClass_UForceTubeVRFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_ForceTubeVRForUE4,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel, "GetBatteryLevel" }, // 166826549
				{ &Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync, "InitAsync" }, // 2531331962
				{ &Z_Construct_UFunction_UForceTubeVRFunctions_Kick, "Kick" }, // 1255444183
				{ &Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings, "OpenAndroidBluetoothSettings" }, // 2581744570
				{ &Z_Construct_UFunction_UForceTubeVRFunctions_Rumble, "Rumble" }, // 2585262644
				{ &Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch, "SetActiveResearch" }, // 2534776992
				{ &Z_Construct_UFunction_UForceTubeVRFunctions_Shot, "Shot" }, // 1078085975
				{ &Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower, "TempoToKickPower" }, // 2272961211
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ForceTubeVRFunctions.h" },
				{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UForceTubeVRFunctions>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UForceTubeVRFunctions::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForceTubeVRFunctions, 2202563364);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceTubeVRFunctions(Z_Construct_UClass_UForceTubeVRFunctions, &UForceTubeVRFunctions::StaticClass, TEXT("/Script/ForceTubeVRForUE4"), TEXT("UForceTubeVRFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceTubeVRFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
