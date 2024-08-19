#pragma once
#include "CoreMinimal.h"
#include "EnumHealValueType.h"
#include "InteractionPrimaryDataAsset.h"
#include "IntHealPrimaryDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UIntHealPrimaryDataAsset : public UInteractionPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumHealValueType HealingMethod;
    
    UIntHealPrimaryDataAsset();

};

