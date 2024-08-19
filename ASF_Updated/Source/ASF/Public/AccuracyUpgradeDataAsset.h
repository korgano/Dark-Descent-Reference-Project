#pragma once
#include "CoreMinimal.h"
#include "UpgradeDataAssets.h"
#include "AccuracyUpgradeDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UAccuracyUpgradeDataAsset : public UUpgradeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyToAdd;
    
    UAccuracyUpgradeDataAsset();

};

