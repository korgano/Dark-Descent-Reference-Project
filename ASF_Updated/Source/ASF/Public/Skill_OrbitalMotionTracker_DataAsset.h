#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_OrbitalMotionTracker_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_OrbitalMotionTracker_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkillDuration;
    
    USkill_OrbitalMotionTracker_DataAsset();

};

