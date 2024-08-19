#pragma once
#include "CoreMinimal.h"
#include "ESkillSelectionStatus.h"
#include "Event_Skill_SkillSelectionStatusDelegate.generated.h"

class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Skill_SkillSelectionStatus, USkill*, Skill, ESkillSelectionStatus, OldSkillSelectionStatus, ESkillSelectionStatus, NewSkillSelectionStatus);

