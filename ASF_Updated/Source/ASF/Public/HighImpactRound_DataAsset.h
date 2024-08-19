#pragma once
#include "CoreMinimal.h"
#include "UpgradeDataAssets.h"
#include "HighImpactRound_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UHighImpactRound_DataAsset : public UUpgradeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedReductionMultiplier;
    
    UHighImpactRound_DataAsset();

};

