#pragma once
#include "CoreMinimal.h"
#include "Event_DeployableSkill_DeployableDelegate.generated.h"

class AActor;
class USkill_Deployable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_DeployableSkill_Deployable, USkill_Deployable*, _Skill, AActor*, _Actor);

