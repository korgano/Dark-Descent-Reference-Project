#pragma once
#include "CoreMinimal.h"
#include "Skill_LookAt_DataAsset.h"
#include "Skill_BarrageFire_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_BarrageFire_DataAsset : public USkill_LookAt_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemySpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstTargetAdditionalEnemySpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float instigatorPrecisionMalus;
    
    USkill_BarrageFire_DataAsset();

};

