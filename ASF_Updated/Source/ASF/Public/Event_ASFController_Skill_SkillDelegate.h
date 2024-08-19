#pragma once
#include "CoreMinimal.h"
#include "Event_ASFController_Skill_SkillDelegate.generated.h"

class AASFPlayerController;
class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_ASFController_Skill_Skill, AASFPlayerController*, Controller, USkill*, OldSkill, USkill*, NewSkill);

