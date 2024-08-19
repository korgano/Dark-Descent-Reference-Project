#pragma once
#include "CoreMinimal.h"
#include "Event_Skill_BoolDelegate.generated.h"

class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Skill_Bool, USkill*, Skill, bool, IsLocked);

