#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ResourceMissionSystem_DataAsset.generated.h"

class UMaterialMission_DataAsset;
class UResourceMission_DataAsset;
class USupplyMission_DataAsset;
class USurvivorMission_DataAsset;

UCLASS(Blueprintable)
class ASF_API UResourceMissionSystem_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartSpawningProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndSpawningProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawningProbabilityGrowthPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMissionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USupplyMission_DataAsset*> SupplyMissionAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialMission_DataAsset*> MaterialMissionAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USurvivorMission_DataAsset*> SurvivorMissionAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UResourceMission_DataAsset*> ScriptedMissions;
    
    UResourceMissionSystem_DataAsset();

};

