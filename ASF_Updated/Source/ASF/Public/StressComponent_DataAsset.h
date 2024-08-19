#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EStressStep.h"
#include "StessEventOnActor.h"
#include "StressComponent_DataAsset.generated.h"

class UDataTable;
class UStressEffect;
class UStressEffect_DataAsset;
class UTrauma_DataAsset;

UCLASS(Blueprintable)
class ASF_API UStressComponent_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UStressEffect>> StressStepEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UStressEffect>, UStressEffect_DataAsset*> StressStepEffectsDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrauma_DataAsset*> TraumasAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStressStep, float> ChanceToSufferATrauma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStessEventOnActor> EventOnActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DT_StressDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DT_StressDamageOverTime;
    
    UStressComponent_DataAsset();

};

