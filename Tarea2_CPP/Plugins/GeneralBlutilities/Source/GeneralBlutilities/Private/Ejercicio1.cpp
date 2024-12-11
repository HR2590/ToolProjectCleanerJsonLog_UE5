// Fill out your copyright notice in the Description page of Project Settings.


#include "Ejercicio1.h"

#include "JsonObjectConverter.h"
#include "Misc/MessageDialog.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Serialization/JsonSerializer.h"

class FAssetRegistryModule;
class IAssetRegistry;
class AssetRegistryInterface;


#if  WITH_EDITOR
void UEjercicio1::GetDependencies(const IAssetRegistry& InAssetRegistry,const FAssetRegistryDependencyOptions& InOptions,
	const FName& InPackageName,FString& OutputText,const size_t InPadding,const size_t& InLevelOfSubDependencies)
{
	
	if (InPadding>InLevelOfSubDependencies||InPadding==0) return;
	TArray<FName> OutDependencies,OutReferences;
	FString Tabs="";
	InAssetRegistry.K2_GetReferencers(InPackageName,InOptions,OutReferences);
	InAssetRegistry.K2_GetDependencies(InPackageName,InOptions,OutDependencies);
	if (OutDependencies.IsEmpty()&&OutReferences.IsEmpty()) return;
	if (InPadding==1) OutputText.Append("AssetRoot["+InPackageName.ToString()+"]"+LINE_TERMINATOR);
	for (const FName& Dependency : OutDependencies)
	{
		Tabs=Tabs.LeftPad(InPadding*5);
		OutputText.Append(Tabs+"|-"+Dependency.ToString()+LINE_TERMINATOR);
		GetDependencies(InAssetRegistry,InOptions,Dependency,OutputText,InPadding+1,InLevelOfSubDependencies);
	}
	
}

void UEjercicio1::ExportAllAssetsDependencies(const FAssetRegistryDependencyOptions& InOptions)
{
	FString OutputText;
	TArray<FAssetData> AllAssets;
	FText Message;
	FText Title=FText::FromString("Exporting Dependencies Assets");
	
	IAssetRegistry& AssetRegistry=FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry")).Get();
	AssetRegistry.GetAllAssets(AllAssets,false);
	for (const FAssetData& AssetData : AllAssets)
	{
		GetDependencies(AssetRegistry,InOptions,AssetData.PackageName,OutputText,1,2);
	}
	FString DateNow=FDateTime::Now().ToString();
	DateNow=DateNow.Replace(TEXT("."),TEXT("_"),ESearchCase::CaseSensitive);
	FString FileName=FPaths::ProjectSavedDir()/"Logs"/TEXT("RefLogOutput_")+DateNow+TEXT(".log");
	if (FText ErrorMessage; FFileHelper::IsFilenameValidForSaving(FileName,ErrorMessage))
	{
		FFileHelper::SaveStringToFile(OutputText, *FileName);
		Message = FText::FromString("Assets Exportados Correctamente en:\n" +FileName);
	}
	else
	{
		Message = FText::FromString("El File Path no es valido!");
	}
	FMessageDialog::Open(EAppMsgType::Type::Ok,Message,&Title);
	
	
	
	
}






void UEjercicio1::WriteStructToJSonFile(const FName& InObjectName,const FAqTestStruct& InStruct,bool& bOutSuccess,FString& OutInfoMessage,FString& OutString)
{
	TSharedPtr<FJsonObject> RootObject = MakeShareable(new FJsonObject());
	TSharedPtr<FJsonObject>	JsonObject=FJsonObjectConverter::UStructToJsonObject(InStruct);
	RootObject->SetObjectField(InObjectName.ToString(),JsonObject);
	if (JsonObject==nullptr)
	{
		bOutSuccess=false;
		OutInfoMessage=FString::Printf(TEXT("JSON Serialization Error"));
		return;
	}
	WriteJson(RootObject,bOutSuccess,OutInfoMessage,OutString);
}
void UEjercicio1::WriteJson(const TSharedPtr<FJsonObject>& JsonObject, bool& bOutSuccess,FString& OutInfoMessage,FString& OutString)
{

	FString JsonString;
	if (!FJsonSerializer::Serialize(JsonObject.ToSharedRef(),TJsonWriterFactory<>::Create(&JsonString,0)))
	{
		bOutSuccess=false;
		OutInfoMessage=FString::Printf(TEXT("JSON Serialization Error"));
		return;
	}
	bOutSuccess=true;
	OutString=OutString+JsonString+TEXT("\n");
	OutInfoMessage=FString::Printf(TEXT("Write JSON Succeed"));
	
}
void UEjercicio1::WriteStringToFile(const FString& InFilePath,const FString& InString,bool& bOutSuccess,FString& OutInfoMessage)
{
	const FString InFilePathFull = InFilePath + TEXT("/Rework.json");
	if (FText ErrorMessage; FFileHelper::IsFilenameValidForSaving(InFilePathFull,ErrorMessage))
	{
		IFileManager::Get().Delete(*InFilePathFull);
		FFileHelper::SaveStringToFile(InString,*InFilePathFull);
	}
	else
	{
		bOutSuccess=false;
		OutInfoMessage=FString::Printf(TEXT("File Path Not Valid: %s"),*ErrorMessage.ToString());
		return;
	}
	
	bOutSuccess=true;
	OutInfoMessage=FString::Printf(TEXT("Write String To File Successfully"));
	
}
#endif
