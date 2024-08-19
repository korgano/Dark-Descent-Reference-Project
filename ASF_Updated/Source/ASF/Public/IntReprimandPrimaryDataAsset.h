#pragma once
#include "CoreMinimal.h"
#include "InteractionPrimaryDataAsset.h"
#include "IntReprimandPrimaryDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UIntReprimandPrimaryDataAsset : public UInteractionPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressHealMultiplier;
    
    UIntReprimandPrimaryDataAsset();

};

