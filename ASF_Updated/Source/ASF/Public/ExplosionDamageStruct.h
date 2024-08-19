#pragma once
#include "CoreMinimal.h"
#include "ExplosionZoneDamageStruct.h"
#include "ExplosionDamageStruct.generated.h"

USTRUCT(BlueprintType)
struct FExplosionDamageStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExplosionZoneDamageStruct> DamageZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreAlly;
    
    ASF_API FExplosionDamageStruct();
};

