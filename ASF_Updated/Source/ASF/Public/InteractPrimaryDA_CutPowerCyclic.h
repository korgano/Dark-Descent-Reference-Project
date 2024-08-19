#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionPrimaryDataAsset.h"
#include "InteractPrimaryDA_CutPowerCyclic.generated.h"

UCLASS(Blueprintable)
class ASF_API UInteractPrimaryDA_CutPowerCyclic : public UInteractionPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeCycle;
    
    UInteractPrimaryDA_CutPowerCyclic();

};

