#pragma once
#include "CoreMinimal.h"
#include "Event_SkillDelegate.generated.h"

class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Skill, USkill*, Skill);

