#pragma once
#include "CoreMinimal.h"
#include "InteractionPrimaryDataAsset.h"
#include "InteractionStressPills_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UInteractionStressPills_DataAsset : public UInteractionPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressReductionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressReductionValue_WithSoothingSerum;
    
    UInteractionStressPills_DataAsset();

};

