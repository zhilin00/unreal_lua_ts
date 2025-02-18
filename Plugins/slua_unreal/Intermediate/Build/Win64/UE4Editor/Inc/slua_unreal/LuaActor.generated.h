// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLUA_UNREAL_LuaActor_generated_h
#error "LuaActor.generated.h already included, missing '#pragma once' in LuaActor.h"
#endif
#define SLUA_UNREAL_LuaActor_generated_h

#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_SPARSE_DATA
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnRegistLuaTick); \
	DECLARE_FUNCTION(execRegistLuaTick);


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnRegistLuaTick); \
	DECLARE_FUNCTION(execRegistLuaTick);


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALuaActor(); \
	friend struct Z_Construct_UClass_ALuaActor_Statics; \
public: \
	DECLARE_CLASS(ALuaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ALuaActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALuaActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LuaNetSerialization=NETFIELD_REP_START, \
		NETFIELD_REP_END=LuaNetSerialization	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesALuaActor(); \
	friend struct Z_Construct_UClass_ALuaActor_Statics; \
public: \
	DECLARE_CLASS(ALuaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ALuaActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALuaActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LuaNetSerialization=NETFIELD_REP_START, \
		NETFIELD_REP_END=LuaNetSerialization	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALuaActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALuaActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuaActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuaActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuaActor(ALuaActor&&); \
	NO_API ALuaActor(const ALuaActor&); \
public:


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALuaActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuaActor(ALuaActor&&); \
	NO_API ALuaActor(const ALuaActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuaActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuaActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALuaActor)


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LuaFilePath() { return STRUCT_OFFSET(ALuaActor, LuaFilePath); }


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_10_PROLOG
#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_PRIVATE_PROPERTY_OFFSET \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_RPC_WRAPPERS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_INCLASS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_PRIVATE_PROPERTY_OFFSET \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_SPARSE_DATA \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_INCLASS_NO_PURE_DECLS \
	ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LuaActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ALuaActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ue4Lua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
