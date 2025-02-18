// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLUA_UNREAL_LuaDelegate_generated_h
#error "LuaDelegate.generated.h already included, missing '#pragma once' in LuaDelegate.h"
#endif
#define SLUA_UNREAL_LuaDelegate_generated_h

#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_SPARSE_DATA
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEventTrigger);


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEventTrigger);


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaDelegate(); \
	friend struct Z_Construct_UClass_ULuaDelegate_Statics; \
public: \
	DECLARE_CLASS(ULuaDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaDelegate)


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_INCLASS \
private: \
	static void StaticRegisterNativesULuaDelegate(); \
	friend struct Z_Construct_UClass_ULuaDelegate_Statics; \
public: \
	DECLARE_CLASS(ULuaDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaDelegate)


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaDelegate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaDelegate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaDelegate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaDelegate(ULuaDelegate&&); \
	NO_API ULuaDelegate(const ULuaDelegate&); \
public:


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaDelegate(ULuaDelegate&&); \
	NO_API ULuaDelegate(const ULuaDelegate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaDelegate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaDelegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaDelegate)


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_PRIVATE_PROPERTY_OFFSET
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_22_PROLOG
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_PRIVATE_PROPERTY_OFFSET \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_RPC_WRAPPERS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_INCLASS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_PRIVATE_PROPERTY_OFFSET \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_INCLASS_NO_PURE_DECLS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LuaDelegate."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ULuaDelegate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
