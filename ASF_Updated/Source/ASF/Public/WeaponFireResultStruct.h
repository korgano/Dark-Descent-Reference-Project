#pragma once
#include "CoreMinimal.h"
#include "DamageResultStruct.h"
#include "WeaponTargetStruct.h"
#include "WeaponFireResultStruct.generated.h"

class ARangeWeapon;

USTRUCT(BlueprintType)
struct FWeaponFireResultStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARangeWeapon* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponTargetStruct Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageResultStruct DamageResult;
    
    ASF_API FWeaponFireResultStruct();
};

