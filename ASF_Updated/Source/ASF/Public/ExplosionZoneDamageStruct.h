#pragma once
#include "CoreMinimal.h"
#include "ExplosionZoneDamageStruct.generated.h"

class UDamagePrimaryDataAsset;

USTRUCT(BlueprintType)
struct FExplosionZoneDamageStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamagePrimaryDataAsset* Damage;
    
    ASF_API FExplosionZoneDamageStruct();
};

