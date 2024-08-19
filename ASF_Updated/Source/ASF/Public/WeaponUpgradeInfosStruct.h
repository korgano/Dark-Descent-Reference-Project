#pragma once
#include "CoreMinimal.h"
#include "WeaponUpgradeInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FWeaponUpgradeInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString upgrade_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString weapon_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 materials_cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 materials_remaining;
    
    FWeaponUpgradeInfosStruct();
};

