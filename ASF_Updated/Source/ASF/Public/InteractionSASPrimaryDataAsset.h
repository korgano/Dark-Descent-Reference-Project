#pragma once
#include "CoreMinimal.h"
#include "AcknowsSequence.h"
#include "InteractionPrimaryDataAsset.h"
#include "InteractionSASPrimaryDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UInteractionSASPrimaryDataAsset : public UInteractionPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsSequence AcknowSequenceSAS;
    
    UInteractionSASPrimaryDataAsset();

};

