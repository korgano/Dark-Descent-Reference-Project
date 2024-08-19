#pragma once
#include "CoreMinimal.h"
#include "Event_ASFController_SkillDelegate.generated.h"

class AASFPlayerController;
class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFController_Skill, AASFPlayerController*, Controller, const USkill*, Skill);

