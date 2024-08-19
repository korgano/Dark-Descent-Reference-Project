#pragma once
#include "CoreMinimal.h"
#include "ExplosionDamageForRange.generated.h"

USTRUCT(BlueprintType)
struct FExplosionDamageForRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMax;
    
    ASF_API FExplosionDamageForRange();
};

