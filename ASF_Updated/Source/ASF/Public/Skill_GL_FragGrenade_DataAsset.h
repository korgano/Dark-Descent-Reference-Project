#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_GL_FragGrenade_DataAsset.generated.h"

class USoundCue;
class UZoneExplosionDataAsset;

UCLASS(Blueprintable)
class ASF_API USkill_GL_FragGrenade_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZoneExplosionDataAsset* ExlposionDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingDurationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingDurationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound_Launch;
    
    USkill_GL_FragGrenade_DataAsset();

};

