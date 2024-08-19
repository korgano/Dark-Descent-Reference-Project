#pragma once
#include "CoreMinimal.h"
#include "Event_TriggerObjective_ActorDelegate.generated.h"

class AActor;
class ATriggerObjectiveActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_TriggerObjective_Actor, ATriggerObjectiveActor*, Trigger, AActor*, Actor);

