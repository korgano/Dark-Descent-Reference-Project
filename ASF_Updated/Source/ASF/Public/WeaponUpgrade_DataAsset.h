#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UpgradeDataAssets.h"
#include "WeaponUpgrade_DataAsset.generated.h"

class ARangeWeapon;

UCLASS(Blueprintable)
class ASF_API UWeaponUpgrade_DataAsset : public UUpgradeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARangeWeapon> WeaponClass;
    
    UWeaponUpgrade_DataAsset();

};

