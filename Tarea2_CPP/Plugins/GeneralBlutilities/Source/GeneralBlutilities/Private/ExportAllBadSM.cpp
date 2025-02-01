// Fill out your copyright notice in the Description page of Project Settings.
/*
#define MAX_NUM_OF_TRIANGLES 10000
#define MAX_NUM_OF_SOURCE_MODELS 5
#define MAX_RESOURCE_SIZE_BYTES 6000*/

#include "ExportAllBadSM.h"
#include "Ejercicio1.h"
#include "Engine/StaticMeshActor.h"
#include "EngineUtils.h"


enum Constants
{
	Max_Num_Of_Source_Models=5,
	Max_Num_Of_Triangles=1000,
	Max_Resource_Size_Bytes=6000
};

struct FAqTestStruct;
#if WITH_EDITOR
void UExportAllBadSM::ExportAll(TMap<FName, FJsonValidation>& OutMap,TArray<FString>& OutStaticMeshes)
{
	if (!GEditor) return;
	OutMap.Empty();
	for (TActorIterator<AStaticMeshActor> It(GEditor->GetEditorWorldContext().World()); It; ++It)
	{
		
		FJsonValidation TempStruct;
		if (It->GetStaticMeshComponent()->GetStaticMesh()->GetNumTriangles(0)>Max_Num_Of_Triangles)
		{TempStruct.bHasManyTri=true;}
		if (It->GetStaticMeshComponent()->GetStaticMesh()->GetNumSourceModels()>Max_Num_Of_Source_Models)
		{TempStruct.bHasManyMats=true;}
		if (It->GetStaticMeshComponent()->GetStaticMesh()->GetResourceSizeBytes(EResourceSizeMode::EstimatedTotal)>Max_Resource_Size_Bytes)
		{TempStruct.bIsMassive=true;}
		if (TempStruct.bHasManyTri||TempStruct.bHasManyMats||TempStruct.bIsMassive)
		{
			OutMap.Add(*It->GetActorNameOrLabel(),TempStruct);
			OutStaticMeshes.Add(It->GetStaticMeshComponent()->GetStaticMesh().GetPath());
		}
		
		
	}

	
}
#endif