#pragma once
#include "CoreMinimal.h"
#include "ErrorTagContairers.h"
#include "Event_Skill_ErrorMapDelegate.generated.h"

class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Skill_ErrorMap, USkill*, Skill, const FErrorTagContairers&, ErrorTagContairers);

