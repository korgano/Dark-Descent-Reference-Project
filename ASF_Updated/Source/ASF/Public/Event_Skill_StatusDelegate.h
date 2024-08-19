#pragma once
#include "CoreMinimal.h"
#include "EnumActionStatus.h"
#include "Event_Skill_StatusDelegate.generated.h"

class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Skill_Status, USkill*, Skill, EnumActionStatus, ActionStatus);

