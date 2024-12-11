// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeneralBlutilities/Public/Ejercicio1.h"
#include "Runtime/AssetRegistry/Public/AssetRegistry/IAssetRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEjercicio1() {}

// Begin Cross Module References
ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GENERALBLUTILITIES_API UClass* Z_Construct_UClass_UEjercicio1();
GENERALBLUTILITIES_API UClass* Z_Construct_UClass_UEjercicio1_NoRegister();
GENERALBLUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAqTestStruct();
UPackage* Z_Construct_UPackage__Script_GeneralBlutilities();
// End Cross Module References

// Begin ScriptStruct FAqTestStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AqTestStruct;
class UScriptStruct* FAqTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AqTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AqTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAqTestStruct, (UObject*)Z_Construct_UPackage__Script_GeneralBlutilities(), TEXT("AqTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_AqTestStruct.OuterSingleton;
}
template<> GENERALBLUTILITIES_API UScriptStruct* StaticStruct<FAqTestStruct>()
{
	return FAqTestStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAqTestStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ReadWriteJson" },
		{ "ModuleRelativePath", "Public/Ejercicio1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasManyTri_MetaData[] = {
		{ "Category", "ReadWriteJson" },
		{ "ModuleRelativePath", "Public/Ejercicio1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasManyMats_MetaData[] = {
		{ "Category", "ReadWriteJson" },
		{ "ModuleRelativePath", "Public/Ejercicio1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMassive_MetaData[] = {
		{ "Category", "ReadWriteJson" },
		{ "ModuleRelativePath", "Public/Ejercicio1.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasManyTri_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasManyTri;
	static void NewProp_bHasManyMats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasManyMats;
	static void NewProp_bIsMassive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMassive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAqTestStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bHasManyTri_SetBit(void* Obj)
{
	((FAqTestStruct*)Obj)->bHasManyTri = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bHasManyTri = { "bHasManyTri", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAqTestStruct), &Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bHasManyTri_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasManyTri_MetaData), NewProp_bHasManyTri_MetaData) };
void Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bHasManyMats_SetBit(void* Obj)
{
	((FAqTestStruct*)Obj)->bHasManyMats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bHasManyMats = { "bHasManyMats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAqTestStruct), &Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bHasManyMats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasManyMats_MetaData), NewProp_bHasManyMats_MetaData) };
void Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bIsMassive_SetBit(void* Obj)
{
	((FAqTestStruct*)Obj)->bIsMassive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bIsMassive = { "bIsMassive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAqTestStruct), &Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bIsMassive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMassive_MetaData), NewProp_bIsMassive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAqTestStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bHasManyTri,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bHasManyMats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_bIsMassive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeneralBlutilities,
	nullptr,
	&NewStructOps,
	"AqTestStruct",
	Z_Construct_UScriptStruct_FAqTestStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::PropPointers),
	sizeof(FAqTestStruct),
	alignof(FAqTestStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAqTestStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAqTestStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AqTestStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AqTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FAqTestStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AqTestStruct.InnerSingleton;
}
// End ScriptStruct FAqTestStruct

// Begin Class UEjercicio1 Function ExportAllAssetsDependencies
#if WITH_EDITOR
struct Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics
{
	struct Ejercicio1_eventExportAllAssetsDependencies_Parms
	{
		FAssetRegistryDependencyOptions InOptions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dependencies" },
		{ "ModuleRelativePath", "Public/Ejercicio1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::NewProp_InOptions = { "InOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ejercicio1_eventExportAllAssetsDependencies_Parms, InOptions), Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOptions_MetaData), NewProp_InOptions_MetaData) }; // 1395807487
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::NewProp_InOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEjercicio1, nullptr, "ExportAllAssetsDependencies", nullptr, nullptr, Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::Ejercicio1_eventExportAllAssetsDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::Ejercicio1_eventExportAllAssetsDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UEjercicio1::execExportAllAssetsDependencies)
{
	P_GET_STRUCT_REF(FAssetRegistryDependencyOptions,Z_Param_Out_InOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEjercicio1::ExportAllAssetsDependencies(Z_Param_Out_InOptions);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UEjercicio1 Function ExportAllAssetsDependencies

// Begin Class UEjercicio1 Function WriteStringToFile
#if WITH_EDITOR
struct Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics
{
	struct Ejercicio1_eventWriteStringToFile_Parms
	{
		FString FilePath;
		FString InString;
		bool bOutSuccess;
		FString OutInfoMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReadWriteJson" },
		{ "ModuleRelativePath", "Public/Ejercicio1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ejercicio1_eventWriteStringToFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ejercicio1_eventWriteStringToFile_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
void Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((Ejercicio1_eventWriteStringToFile_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ejercicio1_eventWriteStringToFile_Parms), &Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ejercicio1_eventWriteStringToFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::NewProp_OutInfoMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEjercicio1, nullptr, "WriteStringToFile", nullptr, nullptr, Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::Ejercicio1_eventWriteStringToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::Ejercicio1_eventWriteStringToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEjercicio1_WriteStringToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEjercicio1_WriteStringToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UEjercicio1::execWriteStringToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEjercicio1::WriteStringToFile(Z_Param_FilePath,Z_Param_InString,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UEjercicio1 Function WriteStringToFile

// Begin Class UEjercicio1 Function WriteStructToJSonFile
#if WITH_EDITOR
struct Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics
{
	struct Ejercicio1_eventWriteStructToJSonFile_Parms
	{
		FName InObjectName;
		FAqTestStruct InStruct;
		bool bOutSuccess;
		FString OutInfoMessage;
		FString OutString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReadWriteJson" },
		{ "ModuleRelativePath", "Public/Ejercicio1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InObjectName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ejercicio1_eventWriteStructToJSonFile_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InObjectName_MetaData), NewProp_InObjectName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ejercicio1_eventWriteStructToJSonFile_Parms, InStruct), Z_Construct_UScriptStruct_FAqTestStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStruct_MetaData), NewProp_InStruct_MetaData) }; // 3426523841
void Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((Ejercicio1_eventWriteStructToJSonFile_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ejercicio1_eventWriteStructToJSonFile_Parms), &Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ejercicio1_eventWriteStructToJSonFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_OutString = { "OutString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ejercicio1_eventWriteStructToJSonFile_Parms, OutString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_InObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_InStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_OutInfoMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::NewProp_OutString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEjercicio1, nullptr, "WriteStructToJSonFile", nullptr, nullptr, Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::Ejercicio1_eventWriteStructToJSonFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::Ejercicio1_eventWriteStructToJSonFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UEjercicio1::execWriteStructToJSonFile)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InObjectName);
	P_GET_STRUCT_REF(FAqTestStruct,Z_Param_Out_InStruct);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutString);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEjercicio1::WriteStructToJSonFile(Z_Param_Out_InObjectName,Z_Param_Out_InStruct,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage,Z_Param_Out_OutString);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UEjercicio1 Function WriteStructToJSonFile

// Begin Class UEjercicio1
void UEjercicio1::StaticRegisterNativesUEjercicio1()
{
#if WITH_EDITOR
	UClass* Class = UEjercicio1::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExportAllAssetsDependencies", &UEjercicio1::execExportAllAssetsDependencies },
		{ "WriteStringToFile", &UEjercicio1::execWriteStringToFile },
		{ "WriteStructToJSonFile", &UEjercicio1::execWriteStructToJSonFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEjercicio1);
UClass* Z_Construct_UClass_UEjercicio1_NoRegister()
{
	return UEjercicio1::StaticClass();
}
struct Z_Construct_UClass_UEjercicio1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ejercicio1.h" },
		{ "ModuleRelativePath", "Public/Ejercicio1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEjercicio1_ExportAllAssetsDependencies, "ExportAllAssetsDependencies" }, // 2280447313
		{ &Z_Construct_UFunction_UEjercicio1_WriteStringToFile, "WriteStringToFile" }, // 3923613634
		{ &Z_Construct_UFunction_UEjercicio1_WriteStructToJSonFile, "WriteStructToJSonFile" }, // 1770883407
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEjercicio1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEjercicio1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GeneralBlutilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEjercicio1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEjercicio1_Statics::ClassParams = {
	&UEjercicio1::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEjercicio1_Statics::Class_MetaDataParams), Z_Construct_UClass_UEjercicio1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEjercicio1()
{
	if (!Z_Registration_Info_UClass_UEjercicio1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEjercicio1.OuterSingleton, Z_Construct_UClass_UEjercicio1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEjercicio1.OuterSingleton;
}
template<> GENERALBLUTILITIES_API UClass* StaticClass<UEjercicio1>()
{
	return UEjercicio1::StaticClass();
}
UEjercicio1::UEjercicio1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEjercicio1);
UEjercicio1::~UEjercicio1() {}
// End Class UEjercicio1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rthu3_Documents_Unreal_Projects_Tarea2_CPP_Plugins_GeneralBlutilities_Source_GeneralBlutilities_Public_Ejercicio1_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAqTestStruct::StaticStruct, Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewStructOps, TEXT("AqTestStruct"), &Z_Registration_Info_UScriptStruct_AqTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAqTestStruct), 3426523841U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEjercicio1, UEjercicio1::StaticClass, TEXT("UEjercicio1"), &Z_Registration_Info_UClass_UEjercicio1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEjercicio1), 2451107797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rthu3_Documents_Unreal_Projects_Tarea2_CPP_Plugins_GeneralBlutilities_Source_GeneralBlutilities_Public_Ejercicio1_h_2856280206(TEXT("/Script/GeneralBlutilities"),
	Z_CompiledInDeferFile_FID_Users_rthu3_Documents_Unreal_Projects_Tarea2_CPP_Plugins_GeneralBlutilities_Source_GeneralBlutilities_Public_Ejercicio1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rthu3_Documents_Unreal_Projects_Tarea2_CPP_Plugins_GeneralBlutilities_Source_GeneralBlutilities_Public_Ejercicio1_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_rthu3_Documents_Unreal_Projects_Tarea2_CPP_Plugins_GeneralBlutilities_Source_GeneralBlutilities_Public_Ejercicio1_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rthu3_Documents_Unreal_Projects_Tarea2_CPP_Plugins_GeneralBlutilities_Source_GeneralBlutilities_Public_Ejercicio1_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
