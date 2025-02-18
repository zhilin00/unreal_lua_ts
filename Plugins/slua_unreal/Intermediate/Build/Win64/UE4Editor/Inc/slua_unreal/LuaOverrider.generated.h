// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FKey;
#ifdef SLUA_UNREAL_LuaOverrider_generated_h
#error "LuaOverrider.generated.h already included, missing '#pragma once' in LuaOverrider.h"
#endif
#define SLUA_UNREAL_LuaOverrider_generated_h

#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_SPARSE_DATA
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_RPC_WRAPPERS \
	virtual void InputGesture_Implementation(float Value); \
	virtual void InputVectorAxis_Implementation(FVector const& AxisValue); \
	virtual void InputTouch_Implementation(ETouchIndex::Type FingerIndex, FVector const& Location); \
	virtual void InputAxis_Implementation(float AxisValue); \
	virtual void InputAction_Implementation(FKey Key); \
 \
	DECLARE_FUNCTION(execInputGesture); \
	DECLARE_FUNCTION(execInputVectorAxis); \
	DECLARE_FUNCTION(execInputTouch); \
	DECLARE_FUNCTION(execInputAxis); \
	DECLARE_FUNCTION(execInputAction);


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InputGesture_Implementation(float Value); \
	virtual void InputVectorAxis_Implementation(FVector const& AxisValue); \
	virtual void InputTouch_Implementation(ETouchIndex::Type FingerIndex, FVector const& Location); \
	virtual void InputAxis_Implementation(float AxisValue); \
	virtual void InputAction_Implementation(FKey Key); \
 \
	DECLARE_FUNCTION(execInputGesture); \
	DECLARE_FUNCTION(execInputVectorAxis); \
	DECLARE_FUNCTION(execInputTouch); \
	DECLARE_FUNCTION(execInputAxis); \
	DECLARE_FUNCTION(execInputAction);


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_EVENT_PARMS \
	struct LuaOverrider_eventInputAction_Parms \
	{ \
		FKey Key; \
	}; \
	struct LuaOverrider_eventInputAxis_Parms \
	{ \
		float AxisValue; \
	}; \
	struct LuaOverrider_eventInputGesture_Parms \
	{ \
		float Value; \
	}; \
	struct LuaOverrider_eventInputTouch_Parms \
	{ \
		TEnumAsByte<ETouchIndex::Type> FingerIndex; \
		FVector Location; \
	}; \
	struct LuaOverrider_eventInputVectorAxis_Parms \
	{ \
		FVector AxisValue; \
	};


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_CALLBACK_WRAPPERS
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaOverrider(); \
	friend struct Z_Construct_UClass_ULuaOverrider_Statics; \
public: \
	DECLARE_CLASS(ULuaOverrider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaOverrider)


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULuaOverrider(); \
	friend struct Z_Construct_UClass_ULuaOverrider_Statics; \
public: \
	DECLARE_CLASS(ULuaOverrider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaOverrider)


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaOverrider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaOverrider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaOverrider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaOverrider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaOverrider(ULuaOverrider&&); \
	NO_API ULuaOverrider(const ULuaOverrider&); \
public:


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaOverrider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaOverrider(ULuaOverrider&&); \
	NO_API ULuaOverrider(const ULuaOverrider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaOverrider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaOverrider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaOverrider)


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_PRIVATE_PROPERTY_OFFSET
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_10_PROLOG \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_EVENT_PARMS


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_PRIVATE_PROPERTY_OFFSET \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_RPC_WRAPPERS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_CALLBACK_WRAPPERS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_INCLASS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_PRIVATE_PROPERTY_OFFSET \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_CALLBACK_WRAPPERS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_INCLASS_NO_PURE_DECLS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ULuaOverrider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
