#pragma once
#include "CoreMinimal.h"
#include "UpgradeDataAssets.h"
#include "SquadTatoo_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USquadTatoo_DataAsset : public UUpgradeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressHealMultiplier;
    
    USquadTatoo_DataAsset();

};

