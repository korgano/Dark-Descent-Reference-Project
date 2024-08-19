#pragma once
#include "CoreMinimal.h"
#include "UpgradeDataAssets.h"
#include "CombatDrugs_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UCombatDrugs_DataAsset : public UUpgradeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthIncrease;
    
    UCombatDrugs_DataAsset();

};

