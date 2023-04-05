// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ForceTubeVRChannel : uint8;
#ifdef FTUE4_FTUE4BPLibrary_generated_h
#error "FTUE4BPLibrary.generated.h already included, missing '#pragma once' in FTUE4BPLibrary.h"
#endif
#define FTUE4_FTUE4BPLibrary_generated_h

#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConnectedJson_Statics; \
	FTUE4_API static class UScriptStruct* StaticStruct();


template<> FTUE4_API UScriptStruct* StaticStruct<struct FConnectedJson>();

#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_SPARSE_DATA
#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSelectChannel); \
	DECLARE_FUNCTION(execClearChannel); \
	DECLARE_FUNCTION(execRemoveFromChannel); \
	DECLARE_FUNCTION(execAddToChannel); \
	DECLARE_FUNCTION(execListChannels); \
	DECLARE_FUNCTION(execListConnectedForceTube); \
	DECLARE_FUNCTION(execGetBatteryLevel); \
	DECLARE_FUNCTION(execTempoToKickPower); \
	DECLARE_FUNCTION(execShotChannel); \
	DECLARE_FUNCTION(execRumbleChannel); \
	DECLARE_FUNCTION(execKickChannel); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execInitAsync);


#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSelectChannel); \
	DECLARE_FUNCTION(execClearChannel); \
	DECLARE_FUNCTION(execRemoveFromChannel); \
	DECLARE_FUNCTION(execAddToChannel); \
	DECLARE_FUNCTION(execListChannels); \
	DECLARE_FUNCTION(execListConnectedForceTube); \
	DECLARE_FUNCTION(execGetBatteryLevel); \
	DECLARE_FUNCTION(execTempoToKickPower); \
	DECLARE_FUNCTION(execShotChannel); \
	DECLARE_FUNCTION(execRumbleChannel); \
	DECLARE_FUNCTION(execKickChannel); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execInitAsync);


#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFTUE4BPLibrary(); \
	friend struct Z_Construct_UClass_UFTUE4BPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFTUE4BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FTUE4"), NO_API) \
	DECLARE_SERIALIZER(UFTUE4BPLibrary)


#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUFTUE4BPLibrary(); \
	friend struct Z_Construct_UClass_UFTUE4BPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFTUE4BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FTUE4"), NO_API) \
	DECLARE_SERIALIZER(UFTUE4BPLibrary)


#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFTUE4BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFTUE4BPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFTUE4BPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFTUE4BPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFTUE4BPLibrary(UFTUE4BPLibrary&&); \
	NO_API UFTUE4BPLibrary(const UFTUE4BPLibrary&); \
public:


#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFTUE4BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFTUE4BPLibrary(UFTUE4BPLibrary&&); \
	NO_API UFTUE4BPLibrary(const UFTUE4BPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFTUE4BPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFTUE4BPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFTUE4BPLibrary)


#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_PRIVATE_PROPERTY_OFFSET
#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_33_PROLOG
#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_PRIVATE_PROPERTY_OFFSET \
	FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_SPARSE_DATA \
	FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_RPC_WRAPPERS \
	FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_INCLASS \
	FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_PRIVATE_PROPERTY_OFFSET \
	FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_SPARSE_DATA \
	FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_INCLASS_NO_PURE_DECLS \
	FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FTUE4_API UClass* StaticClass<class UFTUE4BPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FTUE4_27_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h


#define FOREACH_ENUM_FORCETUBEVRCHANNEL(op) \
	op(ForceTubeVRChannel::all) \
	op(ForceTubeVRChannel::rifle) \
	op(ForceTubeVRChannel::rifleButt) \
	op(ForceTubeVRChannel::rifleBolt) \
	op(ForceTubeVRChannel::pistol1) \
	op(ForceTubeVRChannel::pistol2) \
	op(ForceTubeVRChannel::other) \
	op(ForceTubeVRChannel::vest) 

enum class ForceTubeVRChannel : uint8;
template<> FTUE4_API UEnum* StaticEnum<ForceTubeVRChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
