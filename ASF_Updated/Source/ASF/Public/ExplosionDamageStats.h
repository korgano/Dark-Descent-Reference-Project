#pragma once
#include "CoreMinimal.h"
#include "ExplosionDamageForRange.h"
#include "ExplosionDamageStats.generated.h"

USTRUCT(BlueprintType)
struct FExplosionDamageStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExplosionDamageForRange> DamageForRanges;
    
    ASF_API FExplosionDamageStats();
};

