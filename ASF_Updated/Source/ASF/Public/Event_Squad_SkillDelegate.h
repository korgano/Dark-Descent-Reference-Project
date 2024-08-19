#pragma once
#include "CoreMinimal.h"
#include "Event_Squad_SkillDelegate.generated.h"

class ASquad;
class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Squad_Skill, ASquad*, Squad, USkill*, Skill);

