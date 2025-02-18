// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLUA_UNREAL_LuaUEObject_generated_h
#error "LuaUEObject.generated.h already included, missing '#pragma once' in LuaUEObject.h"
#endif
#define SLUA_UNREAL_LuaUEObject_generated_h

#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_SPARSE_DATA
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_RPC_WRAPPERS
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaObject(); \
	friend struct Z_Construct_UClass_ULuaObject_Statics; \
public: \
	DECLARE_CLASS(ULuaObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaObject) \
	virtual UObject* _getUObject() const override { return const_cast<ULuaObject*>(this); }


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_INCLASS \
private: \
	static void StaticRegisterNativesULuaObject(); \
	friend struct Z_Construct_UClass_ULuaObject_Statics; \
public: \
	DECLARE_CLASS(ULuaObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaObject) \
	virtual UObject* _getUObject() const override { return const_cast<ULuaObject*>(this); }


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaObject(ULuaObject&&); \
	NO_API ULuaObject(const ULuaObject&); \
public:


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaObject(ULuaObject&&); \
	NO_API ULuaObject(const ULuaObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaObject)


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LuaFilePath() { return STRUCT_OFFSET(ULuaObject, LuaFilePath); }


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_7_PROLOG
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_PRIVATE_PROPERTY_OFFSET \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_RPC_WRAPPERS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_INCLASS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_PRIVATE_PROPERTY_OFFSET \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_INCLASS_NO_PURE_DECLS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LuaObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ULuaObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
