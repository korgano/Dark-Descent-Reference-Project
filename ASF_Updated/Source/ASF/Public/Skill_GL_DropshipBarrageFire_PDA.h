#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_GL_DropshipBarrageFire_PDA.generated.h"

class USoundCue;
class UZoneExplosionDataAsset;

UCLASS(Blueprintable)
class ASF_API USkill_GL_DropshipBarrageFire_PDA : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZoneExplosionDataAsset* ExplosionDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound_Launch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numberExplosions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayBetweenExplosions;
    
    USkill_GL_DropshipBarrageFire_PDA();

};

