#pragma once
#include "CoreMinimal.h"
#include "Event_ASkillRestrictedLaunchZone_SkillDelegate.generated.h"

class ASkillRestrictedLaunchZone;
class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASkillRestrictedLaunchZone_Skill, ASkillRestrictedLaunchZone*, Zone, const USkill*, Skill);

