// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PFTUE5/Public/FTUE4BPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFTUE4BPLibrary() {}
// Cross Module References
	PFTUE5_API UEnum* Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel();
	UPackage* Z_Construct_UPackage__Script_PFTUE5();
	PFTUE5_API UScriptStruct* Z_Construct_UScriptStruct_FConnectedJson();
	PFTUE5_API UClass* Z_Construct_UClass_UFTUE4BPLibrary_NoRegister();
	PFTUE5_API UClass* Z_Construct_UClass_UFTUE4BPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ForceTubeVRChannel;
	static UEnum* ForceTubeVRChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ForceTubeVRChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ForceTubeVRChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel, Z_Construct_UPackage__Script_PFTUE5(), TEXT("ForceTubeVRChannel"));
		}
		return Z_Registration_Info_UEnum_ForceTubeVRChannel.OuterSingleton;
	}
	template<> PFTUE5_API UEnum* StaticEnum<ForceTubeVRChannel>()
	{
		return ForceTubeVRChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel_Statics::Enumerators[] = {
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel_Statics::Enum_MetaDataParams[] = {
		{ "all.Name", "ForceTubeVRChannel::all" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
		{ "other.Name", "ForceTubeVRChannel::other" },
		{ "pistol1.Name", "ForceTubeVRChannel::pistol1" },
		{ "pistol2.Name", "ForceTubeVRChannel::pistol2" },
		{ "rifle.Name", "ForceTubeVRChannel::rifle" },
		{ "rifleBolt.Name", "ForceTubeVRChannel::rifleBolt" },
		{ "rifleButt.Name", "ForceTubeVRChannel::rifleButt" },
		{ "vest.Name", "ForceTubeVRChannel::vest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PFTUE5,
		nullptr,
		"ForceTubeVRChannel",
		"ForceTubeVRChannel",
		Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel()
	{
		if (!Z_Registration_Info_UEnum_ForceTubeVRChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ForceTubeVRChannel.InnerSingleton, Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ForceTubeVRChannel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConnectedJson;
class UScriptStruct* FConnectedJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConnectedJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConnectedJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectedJson, Z_Construct_UPackage__Script_PFTUE5(), TEXT("ConnectedJson"));
	}
	return Z_Registration_Info_UScriptStruct_ConnectedJson.OuterSingleton;
}
template<> PFTUE5_API UScriptStruct* StaticStruct<FConnectedJson>()
{
	return FConnectedJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConnectedJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Connected_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connected_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectedJson_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConnectedJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectedJson>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected_Inner = { "Connected", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected_MetaData[] = {
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected = { "Connected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConnectedJson, Connected), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectedJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectedJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PFTUE5,
		nullptr,
		&NewStructOps,
		"ConnectedJson",
		sizeof(FConnectedJson),
		alignof(FConnectedJson),
		Z_Construct_UScriptStruct_FConnectedJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectedJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectedJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectedJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConnectedJson()
	{
		if (!Z_Registration_Info_UScriptStruct_ConnectedJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConnectedJson.InnerSingleton, Z_Construct_UScriptStruct_FConnectedJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConnectedJson.InnerSingleton;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execUpdateSelectChannel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_connectedForceTubes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFTUE4BPLibrary::UpdateSelectChannel(Z_Param_connectedForceTubes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execClearChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_nChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFTUE4BPLibrary::ClearChannel(Z_Param_nChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execRemoveFromChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_nChannel);
		P_GET_PROPERTY(FStrProperty,Z_Param_sName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFTUE4BPLibrary::RemoveFromChannel(Z_Param_nChannel,Z_Param_sName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execAddToChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_nChannel);
		P_GET_PROPERTY(FStrProperty,Z_Param_sName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFTUE4BPLibrary::AddToChannel(Z_Param_nChannel,Z_Param_sName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execListChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFTUE4BPLibrary::ListChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execListConnectedForceTube)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFTUE4BPLibrary::ListConnectedForceTube();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execGetBatteryLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UFTUE4BPLibrary::GetBatteryLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execTempoToKickPower)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_tempo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UFTUE4BPLibrary::TempoToKickPower(Z_Param_tempo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execShotChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_kickPower);
		P_GET_PROPERTY(FByteProperty,Z_Param_rumblePower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rumbleDuration);
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFTUE4BPLibrary::ShotChannel(Z_Param_kickPower,Z_Param_rumblePower,Z_Param_rumbleDuration,ForceTubeVRChannel(Z_Param_channel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execRumbleChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_power);
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeInSeconds);
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFTUE4BPLibrary::RumbleChannel(Z_Param_power,Z_Param_timeInSeconds,ForceTubeVRChannel(Z_Param_channel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execKickChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_power);
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFTUE4BPLibrary::KickChannel(Z_Param_power,ForceTubeVRChannel(Z_Param_channel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execSetActive)
	{
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFTUE4BPLibrary::SetActive(Z_Param_active);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFTUE4BPLibrary::execInitAsync)
	{
		P_GET_UBOOL(Z_Param_pistolsFirst);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFTUE4BPLibrary::InitAsync(Z_Param_pistolsFirst);
		P_NATIVE_END;
	}
	void UFTUE4BPLibrary::StaticRegisterNativesUFTUE4BPLibrary()
	{
		UClass* Class = UFTUE4BPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToChannel", &UFTUE4BPLibrary::execAddToChannel },
			{ "ClearChannel", &UFTUE4BPLibrary::execClearChannel },
			{ "GetBatteryLevel", &UFTUE4BPLibrary::execGetBatteryLevel },
			{ "InitAsync", &UFTUE4BPLibrary::execInitAsync },
			{ "KickChannel", &UFTUE4BPLibrary::execKickChannel },
			{ "ListChannels", &UFTUE4BPLibrary::execListChannels },
			{ "ListConnectedForceTube", &UFTUE4BPLibrary::execListConnectedForceTube },
			{ "RemoveFromChannel", &UFTUE4BPLibrary::execRemoveFromChannel },
			{ "RumbleChannel", &UFTUE4BPLibrary::execRumbleChannel },
			{ "SetActive", &UFTUE4BPLibrary::execSetActive },
			{ "ShotChannel", &UFTUE4BPLibrary::execShotChannel },
			{ "TempoToKickPower", &UFTUE4BPLibrary::execTempoToKickPower },
			{ "UpdateSelectChannel", &UFTUE4BPLibrary::execUpdateSelectChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics
	{
		struct FTUE4BPLibrary_eventAddToChannel_Parms
		{
			int32 nChannel;
			FString sName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_nChannel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_sName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_nChannel = { "nChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventAddToChannel_Parms, nChannel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_sName = { "sName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventAddToChannel_Parms, sName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FTUE4BPLibrary_eventAddToChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTUE4BPLibrary_eventAddToChannel_Parms), &Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_nChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_sName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "AddToChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::FTUE4BPLibrary_eventAddToChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics
	{
		struct FTUE4BPLibrary_eventClearChannel_Parms
		{
			int32 nChannel;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_nChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::NewProp_nChannel = { "nChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventClearChannel_Parms, nChannel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::NewProp_nChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "ClearChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::FTUE4BPLibrary_eventClearChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics
	{
		struct FTUE4BPLibrary_eventGetBatteryLevel_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventGetBatteryLevel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "GetBatteryLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::FTUE4BPLibrary_eventGetBatteryLevel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics
	{
		struct FTUE4BPLibrary_eventInitAsync_Parms
		{
			bool pistolsFirst;
		};
		static void NewProp_pistolsFirst_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_pistolsFirst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::NewProp_pistolsFirst_SetBit(void* Obj)
	{
		((FTUE4BPLibrary_eventInitAsync_Parms*)Obj)->pistolsFirst = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::NewProp_pistolsFirst = { "pistolsFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTUE4BPLibrary_eventInitAsync_Parms), &Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::NewProp_pistolsFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::NewProp_pistolsFirst,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "CPP_Default_pistolsFirst", "false" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "InitAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::FTUE4BPLibrary_eventInitAsync_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics
	{
		struct FTUE4BPLibrary_eventKickChannel_Parms
		{
			uint8 power;
			ForceTubeVRChannel channel;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_power;
		static const UECodeGen_Private::FBytePropertyParams NewProp_channel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_channel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_power = { "power", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventKickChannel_Parms, power), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventKickChannel_Parms, channel), Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) }; // 16196557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_power,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_channel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "KickChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::FTUE4BPLibrary_eventKickChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics
	{
		struct FTUE4BPLibrary_eventListChannels_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventListChannels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "ListChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::FTUE4BPLibrary_eventListChannels_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics
	{
		struct FTUE4BPLibrary_eventListConnectedForceTube_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventListConnectedForceTube_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "ListConnectedForceTube", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::FTUE4BPLibrary_eventListConnectedForceTube_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics
	{
		struct FTUE4BPLibrary_eventRemoveFromChannel_Parms
		{
			int32 nChannel;
			FString sName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_nChannel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_sName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_nChannel = { "nChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventRemoveFromChannel_Parms, nChannel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_sName = { "sName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventRemoveFromChannel_Parms, sName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FTUE4BPLibrary_eventRemoveFromChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTUE4BPLibrary_eventRemoveFromChannel_Parms), &Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_nChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_sName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "RemoveFromChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::FTUE4BPLibrary_eventRemoveFromChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics
	{
		struct FTUE4BPLibrary_eventRumbleChannel_Parms
		{
			uint8 power;
			float timeInSeconds;
			ForceTubeVRChannel channel;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_power;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeInSeconds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_channel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_channel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_power = { "power", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventRumbleChannel_Parms, power), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_timeInSeconds = { "timeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventRumbleChannel_Parms, timeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventRumbleChannel_Parms, channel), Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) }; // 16196557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_power,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_timeInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_channel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "RumbleChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::FTUE4BPLibrary_eventRumbleChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics
	{
		struct FTUE4BPLibrary_eventSetActive_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((FTUE4BPLibrary_eventSetActive_Parms*)Obj)->active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTUE4BPLibrary_eventSetActive_Parms), &Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "SetActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::FTUE4BPLibrary_eventSetActive_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics
	{
		struct FTUE4BPLibrary_eventShotChannel_Parms
		{
			uint8 kickPower;
			uint8 rumblePower;
			float rumbleDuration;
			ForceTubeVRChannel channel;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_kickPower;
		static const UECodeGen_Private::FBytePropertyParams NewProp_rumblePower;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rumbleDuration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_channel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_channel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_kickPower = { "kickPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventShotChannel_Parms, kickPower), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_rumblePower = { "rumblePower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventShotChannel_Parms, rumblePower), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_rumbleDuration = { "rumbleDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventShotChannel_Parms, rumbleDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventShotChannel_Parms, channel), Z_Construct_UEnum_PFTUE5_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) }; // 16196557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_kickPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_rumblePower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_rumbleDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_channel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "ShotChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::FTUE4BPLibrary_eventShotChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics
	{
		struct FTUE4BPLibrary_eventTempoToKickPower_Parms
		{
			float tempo;
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tempo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::NewProp_tempo = { "tempo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventTempoToKickPower_Parms, tempo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventTempoToKickPower_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::NewProp_tempo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "TempoToKickPower", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::FTUE4BPLibrary_eventTempoToKickPower_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics
	{
		struct FTUE4BPLibrary_eventUpdateSelectChannel_Parms
		{
			FString connectedForceTubes;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectedForceTubes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_connectedForceTubes = { "connectedForceTubes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventUpdateSelectChannel_Parms, connectedForceTubes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTUE4BPLibrary_eventUpdateSelectChannel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_connectedForceTubes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, nullptr, "UpdateSelectChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::FTUE4BPLibrary_eventUpdateSelectChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFTUE4BPLibrary);
	UClass* Z_Construct_UClass_UFTUE4BPLibrary_NoRegister()
	{
		return UFTUE4BPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFTUE4BPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFTUE4BPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PFTUE5,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFTUE4BPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel, "AddToChannel" }, // 492861361
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel, "ClearChannel" }, // 3383851605
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel, "GetBatteryLevel" }, // 3558934856
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync, "InitAsync" }, // 3349480129
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel, "KickChannel" }, // 4176511567
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels, "ListChannels" }, // 3780803389
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube, "ListConnectedForceTube" }, // 4227236220
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel, "RemoveFromChannel" }, // 455960370
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel, "RumbleChannel" }, // 904999213
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_SetActive, "SetActive" }, // 329967620
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel, "ShotChannel" }, // 747915525
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower, "TempoToKickPower" }, // 3080410972
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel, "UpdateSelectChannel" }, // 3539388397
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFTUE4BPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FTUE4BPLibrary.h" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFTUE4BPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFTUE4BPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFTUE4BPLibrary_Statics::ClassParams = {
		&UFTUE4BPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFTUE4BPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFTUE4BPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFTUE4BPLibrary()
	{
		if (!Z_Registration_Info_UClass_UFTUE4BPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFTUE4BPLibrary.OuterSingleton, Z_Construct_UClass_UFTUE4BPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFTUE4BPLibrary.OuterSingleton;
	}
	template<> PFTUE5_API UClass* StaticClass<UFTUE4BPLibrary>()
	{
		return UFTUE4BPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFTUE4BPLibrary);
	struct Z_CompiledInDeferFile_FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_Statics::EnumInfo[] = {
		{ ForceTubeVRChannel_StaticEnum, TEXT("ForceTubeVRChannel"), &Z_Registration_Info_UEnum_ForceTubeVRChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 16196557U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FConnectedJson::StaticStruct, Z_Construct_UScriptStruct_FConnectedJson_Statics::NewStructOps, TEXT("ConnectedJson"), &Z_Registration_Info_UScriptStruct_ConnectedJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConnectedJson), 1864721952U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFTUE4BPLibrary, UFTUE4BPLibrary::StaticClass, TEXT("UFTUE4BPLibrary"), &Z_Registration_Info_UClass_UFTUE4BPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFTUE4BPLibrary), 4229780980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_2928336207(TEXT("/Script/PFTUE5"),
		Z_CompiledInDeferFile_FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
