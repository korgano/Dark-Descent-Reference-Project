#pragma once
#include "CoreMinimal.h"
#include "Event_SubObjective_ActorDelegate.generated.h"

class AActor;
class UInteractionSubObjectiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_SubObjective_Actor, UInteractionSubObjectiveComponent*, subobjective, AActor*, InteractedActor);

