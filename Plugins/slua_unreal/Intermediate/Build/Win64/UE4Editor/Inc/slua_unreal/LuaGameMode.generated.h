// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLUA_UNREAL_LuaGameMode_generated_h
#error "LuaGameMode.generated.h already included, missing '#pragma once' in LuaGameMode.h"
#endif
#define SLUA_UNREAL_LuaGameMode_generated_h

#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_SPARSE_DATA
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_RPC_WRAPPERS
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALuaGameMode(); \
	friend struct Z_Construct_UClass_ALuaGameMode_Statics; \
public: \
	DECLARE_CLASS(ALuaGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ALuaGameMode) \
	virtual UObject* _getUObject() const override { return const_cast<ALuaGameMode*>(this); }


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALuaGameMode(); \
	friend struct Z_Construct_UClass_ALuaGameMode_Statics; \
public: \
	DECLARE_CLASS(ALuaGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ALuaGameMode) \
	virtual UObject* _getUObject() const override { return const_cast<ALuaGameMode*>(this); }


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALuaGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALuaGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuaGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuaGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuaGameMode(ALuaGameMode&&); \
	NO_API ALuaGameMode(const ALuaGameMode&); \
public:


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALuaGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuaGameMode(ALuaGameMode&&); \
	NO_API ALuaGameMode(const ALuaGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuaGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuaGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALuaGameMode)


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LuaFilePath() { return STRUCT_OFFSET(ALuaGameMode, LuaFilePath); }


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_9_PROLOG
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_RPC_WRAPPERS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_INCLASS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_INCLASS_NO_PURE_DECLS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LuaGameMode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ALuaGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
