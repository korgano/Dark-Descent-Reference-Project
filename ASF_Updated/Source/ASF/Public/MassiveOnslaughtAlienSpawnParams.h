#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MassiveOnslaughtAlienSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FMassiveOnslaughtAlienSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AlienType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumRequiredAggressiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlienCost;
    
    ASF_API FMassiveOnslaughtAlienSpawnParams();
};

