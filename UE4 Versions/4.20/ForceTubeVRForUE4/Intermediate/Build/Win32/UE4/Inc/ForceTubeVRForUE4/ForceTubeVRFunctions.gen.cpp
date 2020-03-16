// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ForceTubeVRForUE4/Private/ForceTubeVRForUE4PrivatePCH.h"
#include "ForceTubeVRForUE4/Public/ForceTubeVRFunctions.h"
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
	uint32 Get_Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel_CRC() { return 2708864U; }
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			{ "GetBatteryLevel", &UForceTubeVRFunctions::execGetBatteryLevel },
			{ "InitAsync", &UForceTubeVRFunctions::execInitAsync },
			{ "Kick", &UForceTubeVRFunctions::execKick },
			{ "OpenAndroidBluetoothSettings", &UForceTubeVRFunctions::execOpenAndroidBluetoothSettings },
			{ "Rumble", &UForceTubeVRFunctions::execRumble },
			{ "SetActiveResearch", &UForceTubeVRFunctions::execSetActiveResearch },
			{ "Shot", &UForceTubeVRFunctions::execShot },
			{ "TempoToKickPower", &UForceTubeVRFunctions::execTempoToKickPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics
	{
		struct ForceTubeVRFunctions_eventGetBatteryLevel_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventGetBatteryLevel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "Get the battery value of a connected ForceTubeVR (only get the first if it is more than one connected)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "GetBatteryLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventGetBatteryLevel_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics
	{
		struct ForceTubeVRFunctions_eventInitAsync_Parms
		{
			bool pistolsFirst;
		};
		static void NewProp_pistolsFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pistolsFirst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::NewProp_pistolsFirst_SetBit(void* Obj)
	{
		((ForceTubeVRFunctions_eventInitAsync_Parms*)Obj)->pistolsFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::NewProp_pistolsFirst = { UE4CodeGen_Private::EPropertyClass::Bool, "pistolsFirst", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ForceTubeVRFunctions_eventInitAsync_Parms), &Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::NewProp_pistolsFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::NewProp_pistolsFirst,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "CPP_Default_pistolsFirst", "false" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "True = load the two first ForceTubeVRs found in the rifle butt and rifle bolt channels, false = load the two first ForceTubeVRs found in the pistol1 and pistol2 channels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "InitAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventInitAsync_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics
	{
		struct ForceTubeVRFunctions_eventKick_Parms
		{
			uint8 power;
			ForceTubeVRChannel channel;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_channel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_channel_Underlying;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::NewProp_channel = { UE4CodeGen_Private::EPropertyClass::Enum, "channel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventKick_Parms, channel), Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::NewProp_channel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::NewProp_power = { UE4CodeGen_Private::EPropertyClass::Byte, "power", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventKick_Parms, power), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::NewProp_channel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::NewProp_power,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "CPP_Default_channel", "rifle" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "0 = no power, 255 = max power, this function is linear" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "Kick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventKick_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Kick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "Only for android packages, open the default android bluetooth settings activity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "OpenAndroidBluetoothSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics
	{
		struct ForceTubeVRFunctions_eventRumble_Parms
		{
			uint8 power;
			float timeInSeconds;
			ForceTubeVRChannel channel;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_channel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_channel_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeInSeconds;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_channel = { UE4CodeGen_Private::EPropertyClass::Enum, "channel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventRumble_Parms, channel), Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_channel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_timeInSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "timeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventRumble_Parms, timeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_power = { UE4CodeGen_Private::EPropertyClass::Byte, "power", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventRumble_Parms, power), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_channel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_timeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_power,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "CPP_Default_channel", "rifle" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "For power : 0 = no power, 255 = max power, if power <= 126, only the little motor is activated, this function is linear ; for timeInSeconds : 0.0f seconds is a special command that make the ForceTubeVR never stop the rumble" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "Rumble", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventRumble_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Rumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics
	{
		struct ForceTubeVRFunctions_eventSetActiveResearch_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::NewProp_active_SetBit(void* Obj)
	{
		((ForceTubeVRFunctions_eventSetActiveResearch_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::NewProp_active = { UE4CodeGen_Private::EPropertyClass::Bool, "active", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ForceTubeVRFunctions_eventSetActiveResearch_Parms), &Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "It is true by default, set it to false prevent the DLL to make a thread regularly check for disconnections and reconnect the ForceTubeVR if needed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "SetActiveResearch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventSetActiveResearch_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics
	{
		struct ForceTubeVRFunctions_eventShot_Parms
		{
			uint8 kickPower;
			uint8 rumblePower;
			float rumbleDuration;
			ForceTubeVRChannel channel;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_channel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_channel_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rumbleDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rumblePower;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_kickPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_channel = { UE4CodeGen_Private::EPropertyClass::Enum, "channel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventShot_Parms, channel), Z_Construct_UEnum_ForceTubeVRForUE4_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_channel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_rumbleDuration = { UE4CodeGen_Private::EPropertyClass::Float, "rumbleDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventShot_Parms, rumbleDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_rumblePower = { UE4CodeGen_Private::EPropertyClass::Byte, "rumblePower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventShot_Parms, rumblePower), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_kickPower = { UE4CodeGen_Private::EPropertyClass::Byte, "kickPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventShot_Parms, kickPower), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_channel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_rumbleDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_rumblePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_kickPower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "CPP_Default_channel", "rifle" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "Combination of kick and rumble methods ; rumble duration still be in seconds and still don't stop if you set this parameter at 0.0f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "Shot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventShot_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Shot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics
	{
		struct ForceTubeVRFunctions_eventTempoToKickPower_Parms
		{
			float tempo;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tempo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventTempoToKickPower_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::NewProp_tempo = { UE4CodeGen_Private::EPropertyClass::Float, "tempo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ForceTubeVRFunctions_eventTempoToKickPower_Parms, tempo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::NewProp_tempo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "Take duration in seconds between two shots (for auto-shots) and give you the maximal kick power you can use without any loss (in high shot frequencies, you will have some loss of kick if kick power is too big)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, "TempoToKickPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ForceTubeVRFunctions_eventTempoToKickPower_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UForceTubeVRFunctions_NoRegister()
	{
		return UForceTubeVRFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UForceTubeVRFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceTubeVRFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ForceTubeVRForUE4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UForceTubeVRFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel, "GetBatteryLevel" }, // 1981028070
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_InitAsync, "InitAsync" }, // 875352650
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_Kick, "Kick" }, // 3945570087
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings, "OpenAndroidBluetoothSettings" }, // 3921557022
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_Rumble, "Rumble" }, // 2761040175
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch, "SetActiveResearch" }, // 563709538
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_Shot, "Shot" }, // 1475754072
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower, "TempoToKickPower" }, // 2885359510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceTubeVRFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ForceTubeVRFunctions.h" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceTubeVRFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceTubeVRFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForceTubeVRFunctions_Statics::ClassParams = {
		&UForceTubeVRFunctions::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UForceTubeVRFunctions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UForceTubeVRFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceTubeVRFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForceTubeVRFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForceTubeVRFunctions, 268024067);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceTubeVRFunctions(Z_Construct_UClass_UForceTubeVRFunctions, &UForceTubeVRFunctions::StaticClass, TEXT("/Script/ForceTubeVRForUE4"), TEXT("UForceTubeVRFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceTubeVRFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
