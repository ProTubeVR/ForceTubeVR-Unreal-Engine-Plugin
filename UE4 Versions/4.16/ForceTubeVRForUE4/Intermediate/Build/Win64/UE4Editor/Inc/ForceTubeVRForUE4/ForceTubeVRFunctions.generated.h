// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ForceTubeVRChannel : uint8;
#ifdef FORCETUBEVRFORUE4_ForceTubeVRFunctions_generated_h
#error "ForceTubeVRFunctions.generated.h already included, missing '#pragma once' in ForceTubeVRFunctions.h"
#endif
#define FORCETUBEVRFORUE4_ForceTubeVRFunctions_generated_h

#define Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBatteryLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UForceTubeVRFunctions::GetBatteryLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTempoToKickPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_tempo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UForceTubeVRFunctions::TempoToKickPower(Z_Param_tempo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveResearch) \
	{ \
		P_GET_UBOOL(Z_Param_active); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UForceTubeVRFunctions::SetActiveResearch(Z_Param_active); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_kickPower); \
		P_GET_PROPERTY(UByteProperty,Z_Param_rumblePower); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rumbleDuration); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UForceTubeVRFunctions::Shot(Z_Param_kickPower,Z_Param_rumblePower,Z_Param_rumbleDuration,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRumble) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_power); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeInSeconds); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UForceTubeVRFunctions::Rumble(Z_Param_power,Z_Param_timeInSeconds,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKick) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_power); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UForceTubeVRFunctions::Kick(Z_Param_power,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitAsync) \
	{ \
		P_GET_UBOOL(Z_Param_pistolsFirst); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UForceTubeVRFunctions::InitAsync(Z_Param_pistolsFirst); \
		P_NATIVE_END; \
	}


#define Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBatteryLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UForceTubeVRFunctions::GetBatteryLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTempoToKickPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_tempo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UForceTubeVRFunctions::TempoToKickPower(Z_Param_tempo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveResearch) \
	{ \
		P_GET_UBOOL(Z_Param_active); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UForceTubeVRFunctions::SetActiveResearch(Z_Param_active); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_kickPower); \
		P_GET_PROPERTY(UByteProperty,Z_Param_rumblePower); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rumbleDuration); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UForceTubeVRFunctions::Shot(Z_Param_kickPower,Z_Param_rumblePower,Z_Param_rumbleDuration,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRumble) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_power); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeInSeconds); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UForceTubeVRFunctions::Rumble(Z_Param_power,Z_Param_timeInSeconds,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKick) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_power); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UForceTubeVRFunctions::Kick(Z_Param_power,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitAsync) \
	{ \
		P_GET_UBOOL(Z_Param_pistolsFirst); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UForceTubeVRFunctions::InitAsync(Z_Param_pistolsFirst); \
		P_NATIVE_END; \
	}


#define Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUForceTubeVRFunctions(); \
	friend FORCETUBEVRFORUE4_API class UClass* Z_Construct_UClass_UForceTubeVRFunctions(); \
public: \
	DECLARE_CLASS(UForceTubeVRFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ForceTubeVRForUE4"), NO_API) \
	DECLARE_SERIALIZER(UForceTubeVRFunctions) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUForceTubeVRFunctions(); \
	friend FORCETUBEVRFORUE4_API class UClass* Z_Construct_UClass_UForceTubeVRFunctions(); \
public: \
	DECLARE_CLASS(UForceTubeVRFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ForceTubeVRForUE4"), NO_API) \
	DECLARE_SERIALIZER(UForceTubeVRFunctions) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UForceTubeVRFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceTubeVRFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForceTubeVRFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceTubeVRFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForceTubeVRFunctions(UForceTubeVRFunctions&&); \
	NO_API UForceTubeVRFunctions(const UForceTubeVRFunctions&); \
public:


#define Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UForceTubeVRFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForceTubeVRFunctions(UForceTubeVRFunctions&&); \
	NO_API UForceTubeVRFunctions(const UForceTubeVRFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForceTubeVRFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceTubeVRFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceTubeVRFunctions)


#define Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_PRIVATE_PROPERTY_OFFSET
#define Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_21_PROLOG
#define Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_PRIVATE_PROPERTY_OFFSET \
	Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_RPC_WRAPPERS \
	Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_INCLASS \
	Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_PRIVATE_PROPERTY_OFFSET \
	Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_INCLASS_NO_PURE_DECLS \
	Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Union16c_Plugins_ForceTubeVRForUE4_Source_ForceTubeVRForUE4_Public_ForceTubeVRFunctions_h


#define FOREACH_ENUM_FORCETUBEVRCHANNEL(op) \
	op(ForceTubeVRChannel::all) \
	op(ForceTubeVRChannel::rifle) \
	op(ForceTubeVRChannel::rifleButt) \
	op(ForceTubeVRChannel::rifleBolt) \
	op(ForceTubeVRChannel::pistol1) \
	op(ForceTubeVRChannel::pistol2) \
	op(ForceTubeVRChannel::other) \
	op(ForceTubeVRChannel::vest) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
