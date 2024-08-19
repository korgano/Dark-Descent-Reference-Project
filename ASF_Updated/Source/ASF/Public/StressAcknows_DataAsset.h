#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AcknowVariants.h"
#include "StressAcknows_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UStressAcknows_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants StressThresholdAcknows;
    
    UStressAcknows_DataAsset();

};

