#pragma once
#include "CoreMinimal.h"
#include "InteractionPrimaryDataAsset.h"
#include "InteractionSearch_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UInteractionSearch_DataAsset : public UInteractionPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDurationAlreadyOpened;
    
    UInteractionSearch_DataAsset();

};

