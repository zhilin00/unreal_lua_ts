// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/LuaOverrider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaOverrider() {}
// Cross Module References
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverrider_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverrider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ULuaOverrider::execInputGesture)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputGesture_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaOverrider::execInputVectorAxis)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputVectorAxis_Implementation(Z_Param_Out_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaOverrider::execInputTouch)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputTouch_Implementation(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaOverrider::execInputAxis)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAxis_Implementation(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaOverrider::execInputAction)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAction_Implementation(Z_Param_Key);
		P_NATIVE_END;
	}
	static FName NAME_ULuaOverrider_InputAction = FName(TEXT("InputAction"));
	void ULuaOverrider::InputAction(FKey Key)
	{
		LuaOverrider_eventInputAction_Parms Parms;
		Parms.Key=Key;
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_InputAction),&Parms);
	}
	static FName NAME_ULuaOverrider_InputAxis = FName(TEXT("InputAxis"));
	void ULuaOverrider::InputAxis(float AxisValue)
	{
		LuaOverrider_eventInputAxis_Parms Parms;
		Parms.AxisValue=AxisValue;
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_InputAxis),&Parms);
	}
	static FName NAME_ULuaOverrider_InputGesture = FName(TEXT("InputGesture"));
	void ULuaOverrider::InputGesture(float Value)
	{
		LuaOverrider_eventInputGesture_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_InputGesture),&Parms);
	}
	static FName NAME_ULuaOverrider_InputTouch = FName(TEXT("InputTouch"));
	void ULuaOverrider::InputTouch(ETouchIndex::Type FingerIndex, FVector const& Location)
	{
		LuaOverrider_eventInputTouch_Parms Parms;
		Parms.FingerIndex=FingerIndex;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_InputTouch),&Parms);
	}
	static FName NAME_ULuaOverrider_InputVectorAxis = FName(TEXT("InputVectorAxis"));
	void ULuaOverrider::InputVectorAxis(FVector const& AxisValue)
	{
		LuaOverrider_eventInputVectorAxis_Parms Parms;
		Parms.AxisValue=AxisValue;
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_InputVectorAxis),&Parms);
	}
	static FName NAME_ULuaOverrider_TriggerAnimNotify = FName(TEXT("TriggerAnimNotify"));
	void ULuaOverrider::TriggerAnimNotify()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_TriggerAnimNotify),NULL);
	}
	void ULuaOverrider::StaticRegisterNativesULuaOverrider()
	{
		UClass* Class = ULuaOverrider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InputAction", &ULuaOverrider::execInputAction },
			{ "InputAxis", &ULuaOverrider::execInputAxis },
			{ "InputGesture", &ULuaOverrider::execInputGesture },
			{ "InputTouch", &ULuaOverrider::execInputTouch },
			{ "InputVectorAxis", &ULuaOverrider::execInputVectorAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaOverrider_InputAction_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaOverrider_eventInputAction_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "InputAction", nullptr, nullptr, sizeof(LuaOverrider_eventInputAction_Parms), Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaOverrider_InputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaOverrider_eventInputAxis_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "InputAxis", nullptr, nullptr, sizeof(LuaOverrider_eventInputAxis_Parms), Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaOverrider_InputAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaOverrider_eventInputGesture_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "InputGesture", nullptr, nullptr, sizeof(LuaOverrider_eventInputGesture_Parms), Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaOverrider_InputGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaOverrider_eventInputTouch_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaOverrider_eventInputTouch_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_FingerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "InputTouch", nullptr, nullptr, sizeof(LuaOverrider_eventInputTouch_Parms), Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaOverrider_InputTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaOverrider_eventInputVectorAxis_Parms, AxisValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::NewProp_AxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::NewProp_AxisValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "InputVectorAxis", nullptr, nullptr, sizeof(LuaOverrider_eventInputVectorAxis_Parms), Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaOverrider_InputVectorAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "TriggerAnimNotify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuaOverrider_NoRegister()
	{
		return ULuaOverrider::StaticClass();
	}
	struct Z_Construct_UClass_ULuaOverrider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaOverrider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaOverrider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaOverrider_InputAction, "InputAction" }, // 2258115362
		{ &Z_Construct_UFunction_ULuaOverrider_InputAxis, "InputAxis" }, // 2312658731
		{ &Z_Construct_UFunction_ULuaOverrider_InputGesture, "InputGesture" }, // 1884790615
		{ &Z_Construct_UFunction_ULuaOverrider_InputTouch, "InputTouch" }, // 234656272
		{ &Z_Construct_UFunction_ULuaOverrider_InputVectorAxis, "InputVectorAxis" }, // 3060127610
		{ &Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify, "TriggerAnimNotify" }, // 1198500451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaOverrider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuaOverrider.h" },
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaOverrider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaOverrider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuaOverrider_Statics::ClassParams = {
		&ULuaOverrider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULuaOverrider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaOverrider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuaOverrider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuaOverrider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuaOverrider, 3509832478);
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaOverrider>()
	{
		return ULuaOverrider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuaOverrider(Z_Construct_UClass_ULuaOverrider, &ULuaOverrider::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ULuaOverrider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaOverrider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
