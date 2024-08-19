#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DataCarrierMarine.h"
#include "BMStart_DataAsset.generated.h"

class UDataTable;
class UTrait_DataAsset;

UCLASS(Blueprintable)
class ASF_API UBMStart_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataCarrierMarine> StartingMarines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeVisualCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnlockedResearchProjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnlockedFeatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XenoTechActivationCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinBravery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBravery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BraveryModulo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AvaliableTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OtagoLastStandDeploymentCount;
    
    UBMStart_DataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrait_DataAsset* ComputeInitialTrait(const FDataCarrierMarine& _Marine, const TArray<UTrait_DataAsset*> _UnusedTraits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ComputeInitialBravery(const FDataCarrierMarine& _Marine);
    
};

