#pragma once
#include "CoreMinimal.h"
#include "Event_NoMulti_TriggerObjective_ActorDelegate.generated.h"

class AActor;
class ATriggerObjectiveActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FEvent_NoMulti_TriggerObjective_Actor, ATriggerObjectiveActor*, Trigger, AActor*, Actor);

