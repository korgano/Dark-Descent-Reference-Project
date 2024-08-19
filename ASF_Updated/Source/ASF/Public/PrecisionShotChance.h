#pragma once
#include "CoreMinimal.h"
#include "PrecisionShotChance.generated.h"

class UPrecisionShotEffect;

USTRUCT(BlueprintType)
struct FPrecisionShotChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPrecisionShotEffect> PrecisionShot_EffectClass;
    
    ASF_API FPrecisionShotChance();
};

