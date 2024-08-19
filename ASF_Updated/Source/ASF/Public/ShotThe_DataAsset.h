#pragma once
#include "CoreMinimal.h"
#include "InteractionPrimaryDataAsset.h"
#include "ShotThe_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UShotThe_DataAsset : public UInteractionPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleToleranceToShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAfterShot;
    
    UShotThe_DataAsset();

};

