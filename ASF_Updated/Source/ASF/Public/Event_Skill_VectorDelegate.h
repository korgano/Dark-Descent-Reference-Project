#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Event_Skill_VectorDelegate.generated.h"

class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Skill_Vector, USkill*, Skill, FVector, Vector);

