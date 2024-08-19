#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Explosive_DataAsset.generated.h"

class UZoneExplosionDataAsset;

UCLASS(Blueprintable)
class ASF_API UExplosive_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZoneExplosionDataAsset* PDA_ExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToExploseOnProjectileHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeExplosionOnInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDelayBeforeExplosionMinOnRadiusExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDelayBeforeExplosionMinOnRadiusExplosion;
    
    UExplosive_DataAsset();

};

