// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeneralBlutilities/Public/ExportAllBadSM.h"
#include "GeneralBlutilities/Public/Ejercicio1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportAllBadSM() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UActorActionUtility();
GENERALBLUTILITIES_API UClass* Z_Construct_UClass_UExportAllBadSM();
GENERALBLUTILITIES_API UClass* Z_Construct_UClass_UExportAllBadSM_NoRegister();
GENERALBLUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAqTestStruct();
UPackage* Z_Construct_UPackage__Script_GeneralBlutilities();
// End Cross Module References

// Begin Class UExportAllBadSM Function ExportAll
#if WITH_EDITOR
struct Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics
{
	struct ExportAllBadSM_eventExportAll_Parms
	{
		TMap<FName,FAqTestStruct> OutMap;
		TArray<FString> OutStaticMeshes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExportAllBadSM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutMap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutStaticMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutStaticMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::NewProp_OutMap_ValueProp = { "OutMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAqTestStruct, METADATA_PARAMS(0, nullptr) }; // 3426523841
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::NewProp_OutMap_Key_KeyProp = { "OutMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::NewProp_OutMap = { "OutMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExportAllBadSM_eventExportAll_Parms, OutMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3426523841
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::NewProp_OutStaticMeshes_Inner = { "OutStaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::NewProp_OutStaticMeshes = { "OutStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExportAllBadSM_eventExportAll_Parms, OutStaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::NewProp_OutMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::NewProp_OutMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::NewProp_OutMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::NewProp_OutStaticMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::NewProp_OutStaticMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExportAllBadSM, nullptr, "ExportAll", nullptr, nullptr, Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::ExportAllBadSM_eventExportAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::ExportAllBadSM_eventExportAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExportAllBadSM_ExportAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExportAllBadSM_ExportAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UExportAllBadSM::execExportAll)
{
	P_GET_TMAP_REF(FName,FAqTestStruct,Z_Param_Out_OutMap);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutStaticMeshes);
	P_FINISH;
	P_NATIVE_BEGIN;
	UExportAllBadSM::ExportAll(Z_Param_Out_OutMap,Z_Param_Out_OutStaticMeshes);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UExportAllBadSM Function ExportAll

// Begin Class UExportAllBadSM
void UExportAllBadSM::StaticRegisterNativesUExportAllBadSM()
{
#if WITH_EDITOR
	UClass* Class = UExportAllBadSM::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExportAll", &UExportAllBadSM::execExportAll },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExportAllBadSM);
UClass* Z_Construct_UClass_UExportAllBadSM_NoRegister()
{
	return UExportAllBadSM::StaticClass();
}
struct Z_Construct_UClass_UExportAllBadSM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "ExportAllBadSM.h" },
		{ "ModuleRelativePath", "Public/ExportAllBadSM.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExportAllBadSM_ExportAll, "ExportAll" }, // 4218578900
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportAllBadSM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExportAllBadSM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorActionUtility,
	(UObject* (*)())Z_Construct_UPackage__Script_GeneralBlutilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExportAllBadSM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExportAllBadSM_Statics::ClassParams = {
	&UExportAllBadSM::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExportAllBadSM_Statics::Class_MetaDataParams), Z_Construct_UClass_UExportAllBadSM_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExportAllBadSM()
{
	if (!Z_Registration_Info_UClass_UExportAllBadSM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExportAllBadSM.OuterSingleton, Z_Construct_UClass_UExportAllBadSM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExportAllBadSM.OuterSingleton;
}
template<> GENERALBLUTILITIES_API UClass* StaticClass<UExportAllBadSM>()
{
	return UExportAllBadSM::StaticClass();
}
UExportAllBadSM::UExportAllBadSM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExportAllBadSM);
UExportAllBadSM::~UExportAllBadSM() {}
// End Class UExportAllBadSM

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rthu3_Documents_Unreal_Projects_Tarea2_CPP_Plugins_GeneralBlutilities_Source_GeneralBlutilities_Public_ExportAllBadSM_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExportAllBadSM, UExportAllBadSM::StaticClass, TEXT("UExportAllBadSM"), &Z_Registration_Info_UClass_UExportAllBadSM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExportAllBadSM), 465074192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rthu3_Documents_Unreal_Projects_Tarea2_CPP_Plugins_GeneralBlutilities_Source_GeneralBlutilities_Public_ExportAllBadSM_h_2467401428(TEXT("/Script/GeneralBlutilities"),
	Z_CompiledInDeferFile_FID_Users_rthu3_Documents_Unreal_Projects_Tarea2_CPP_Plugins_GeneralBlutilities_Source_GeneralBlutilities_Public_ExportAllBadSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rthu3_Documents_Unreal_Projects_Tarea2_CPP_Plugins_GeneralBlutilities_Source_GeneralBlutilities_Public_ExportAllBadSM_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
