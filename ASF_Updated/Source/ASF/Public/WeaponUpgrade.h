#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WeaponUpgrade.generated.h"

USTRUCT(BlueprintType)
struct FWeaponUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialsCost;
    
    ASF_API FWeaponUpgrade();
};

