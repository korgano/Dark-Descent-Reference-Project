#pragma once
#include "CoreMinimal.h"
#include "Event_Skill_HumanoidTacticalDelegate.generated.h"

class AHumanoidTactical;
class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Skill_HumanoidTactical, USkill*, Skill, AHumanoidTactical*, Human);

