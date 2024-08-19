#pragma once
#include "CoreMinimal.h"
#include "UpgradeDataAssets.h"
#include "UpgradeCarryingCapacityDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UUpgradeCarryingCapacityDataAsset : public UUpgradeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarryingCapacityAddition;
    
    UUpgradeCarryingCapacityDataAsset();

};

