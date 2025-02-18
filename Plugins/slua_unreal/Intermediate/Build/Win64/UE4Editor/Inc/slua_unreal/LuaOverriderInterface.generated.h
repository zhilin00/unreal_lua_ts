// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLUA_UNREAL_LuaOverriderInterface_generated_h
#error "LuaOverriderInterface.generated.h already included, missing '#pragma once' in LuaOverriderInterface.h"
#endif
#define SLUA_UNREAL_LuaOverriderInterface_generated_h

#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_SPARSE_DATA
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_RPC_WRAPPERS \
	virtual FString GetLuaFilePath_Implementation() const { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execGetLuaFilePath);


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString GetLuaFilePath_Implementation() const { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execGetLuaFilePath);


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_EVENT_PARMS \
	struct LuaOverriderInterface_eventGetLuaFilePath_Parms \
	{ \
		FString ReturnValue; \
	};


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_CALLBACK_WRAPPERS
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaOverriderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaOverriderInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaOverriderInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaOverriderInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaOverriderInterface(ULuaOverriderInterface&&); \
	NO_API ULuaOverriderInterface(const ULuaOverriderInterface&); \
public:


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaOverriderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaOverriderInterface(ULuaOverriderInterface&&); \
	NO_API ULuaOverriderInterface(const ULuaOverriderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaOverriderInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaOverriderInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaOverriderInterface)


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULuaOverriderInterface(); \
	friend struct Z_Construct_UClass_ULuaOverriderInterface_Statics; \
public: \
	DECLARE_CLASS(ULuaOverriderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaOverriderInterface)


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILuaOverriderInterface() {} \
public: \
	typedef ULuaOverriderInterface UClassType; \
	typedef ILuaOverriderInterface ThisClass; \
	static FString Execute_GetLuaFilePath(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ILuaOverriderInterface() {} \
public: \
	typedef ULuaOverriderInterface UClassType; \
	typedef ILuaOverriderInterface ThisClass; \
	static FString Execute_GetLuaFilePath(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_10_PROLOG \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_EVENT_PARMS


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_RPC_WRAPPERS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_CALLBACK_WRAPPERS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_CALLBACK_WRAPPERS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ULuaOverriderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
