#pragma once
#include "CoreMinimal.h"
#include "Event_Objective_SubObjectiveComponentDelegate.generated.h"

class AObjective;
class USubObjectiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Objective_SubObjectiveComponent, AObjective*, Objective, USubObjectiveComponent*, subobjective);

