// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/AssetRegistryInterface.h"
#include "Ejercicio1.generated.h"

struct FAssetRegistryDependencyOptions;
using UE::AssetRegistry::EDependencyQuery;
using UE::AssetRegistry::EDependencyCategory;
using UE::AssetRegistry::EDependencyProperty;
using UE::AssetRegistry::FDependencyQuery;


class AssetRegistry;
class FJsonObject;

USTRUCT(BlueprintType,Category="ReadWriteJson")
struct FAqTestStruct
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="ReadWriteJson")
	bool bHasManyTri=false;
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="ReadWriteJson")
	bool bHasManyMats=false;
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="ReadWriteJson")
	bool bIsMassive=false;


};
/**
 * 
 */
UCLASS()
class GENERALBLUTILITIES_API UEjercicio1 : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	static void GetDependencies(const IAssetRegistry& InAssetRegistry,const FAssetRegistryDependencyOptions& InOptions,
	const FName& InPackageName,FString& OutputText,const size_t InPadding,const size_t& InLevelOfSubDependencies);
	
public:
#if WITH_EDITOR
UFUNCTION(BlueprintCallable, Category = "Dependencies")
static void ExportAllAssetsDependencies(const FAssetRegistryDependencyOptions& InOptions);

UFUNCTION(BlueprintCallable, Category = "ReadWriteJson")
static void WriteStructToJSonFile(const FName& InObjectName, const FAqTestStruct& InStruct, bool& bOutSuccess,FString& OutInfoMessage,FString& OutString);

static void WriteJson(const TSharedPtr<FJsonObject>& JsonObject,bool& bOutSuccess,FString& OutInfoMessage,FString& OutString);

UFUNCTION(BlueprintCallable, Category = "ReadWriteJson")
	static void WriteStringToFile(const FString& FilePath,const FString& InString,bool& bOutSuccess,FString& OutInfoMessage);

#endif
};
