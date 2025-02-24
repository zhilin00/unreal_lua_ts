// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPEGraphPinType;
struct FPEGraphTerminalType;
class UPEPropertyMetaData;
 
class UPEFunctionMetaData;
class UPEParamMetaData;
class UObject;
class UPEClassMetaData;
#ifdef PUERTSEDITOR_PEBlueprintAsset_generated_h
#error "PEBlueprintAsset.generated.h already included, missing '#pragma once' in PEBlueprintAsset.h"
#endif
#define PUERTSEDITOR_PEBlueprintAsset_generated_h

#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPEGraphPinType_Statics; \
	PUERTSEDITOR_API static class UScriptStruct* StaticStruct();


template<> PUERTSEDITOR_API UScriptStruct* StaticStruct<struct FPEGraphPinType>();

#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics; \
	PUERTSEDITOR_API static class UScriptStruct* StaticStruct();


template<> PUERTSEDITOR_API UScriptStruct* StaticStruct<struct FPEGraphTerminalType>();

#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_SPARSE_DATA
#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execRemoveNotExistedComponent); \
	DECLARE_FUNCTION(execRemoveNotExistedMemberVariable); \
	DECLARE_FUNCTION(execAddMemberVariableWithMetaData); \
	DECLARE_FUNCTION(execAddMemberVariable); \
	DECLARE_FUNCTION(execSetupAttachments); \
	DECLARE_FUNCTION(execRemoveNotExistedFunction); \
	DECLARE_FUNCTION(execAddFunctionWithMetaData); \
	DECLARE_FUNCTION(execAddFunction); \
	DECLARE_FUNCTION(execClearParameter); \
	DECLARE_FUNCTION(execAddParameterWithMetaData); \
	DECLARE_FUNCTION(execAddParameter); \
	DECLARE_FUNCTION(execLoadOrCreateWithMetaData); \
	DECLARE_FUNCTION(execLoadOrCreate); \
	DECLARE_FUNCTION(execExisted);


#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execRemoveNotExistedComponent); \
	DECLARE_FUNCTION(execRemoveNotExistedMemberVariable); \
	DECLARE_FUNCTION(execAddMemberVariableWithMetaData); \
	DECLARE_FUNCTION(execAddMemberVariable); \
	DECLARE_FUNCTION(execSetupAttachments); \
	DECLARE_FUNCTION(execRemoveNotExistedFunction); \
	DECLARE_FUNCTION(execAddFunctionWithMetaData); \
	DECLARE_FUNCTION(execAddFunction); \
	DECLARE_FUNCTION(execClearParameter); \
	DECLARE_FUNCTION(execAddParameterWithMetaData); \
	DECLARE_FUNCTION(execAddParameter); \
	DECLARE_FUNCTION(execLoadOrCreateWithMetaData); \
	DECLARE_FUNCTION(execLoadOrCreate); \
	DECLARE_FUNCTION(execExisted);


#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPEBlueprintAsset(); \
	friend struct Z_Construct_UClass_UPEBlueprintAsset_Statics; \
public: \
	DECLARE_CLASS(UPEBlueprintAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuertsEditor"), NO_API) \
	DECLARE_SERIALIZER(UPEBlueprintAsset)


#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUPEBlueprintAsset(); \
	friend struct Z_Construct_UClass_UPEBlueprintAsset_Statics; \
public: \
	DECLARE_CLASS(UPEBlueprintAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuertsEditor"), NO_API) \
	DECLARE_SERIALIZER(UPEBlueprintAsset)


#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPEBlueprintAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPEBlueprintAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPEBlueprintAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPEBlueprintAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPEBlueprintAsset(UPEBlueprintAsset&&); \
	NO_API UPEBlueprintAsset(const UPEBlueprintAsset&); \
public:


#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPEBlueprintAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPEBlueprintAsset(UPEBlueprintAsset&&); \
	NO_API UPEBlueprintAsset(const UPEBlueprintAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPEBlueprintAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPEBlueprintAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPEBlueprintAsset)


#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_PRIVATE_PROPERTY_OFFSET
#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_61_PROLOG
#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_PRIVATE_PROPERTY_OFFSET \
	unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_SPARSE_DATA \
	unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_RPC_WRAPPERS \
	unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_INCLASS \
	unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_PRIVATE_PROPERTY_OFFSET \
	unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_SPARSE_DATA \
	unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_INCLASS_NO_PURE_DECLS \
	unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUERTSEDITOR_API UClass* StaticClass<class UPEBlueprintAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID unreal_lua_ts_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
