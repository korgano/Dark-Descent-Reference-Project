#pragma once
#include "CoreMinimal.h"
#include "Event_Mission_Objective_SubObjectiveComponent_ObjectiveRewardComponentDelegate.generated.h"

class AMission;
class AObjective;
class UObjectiveRewardComponent;
class USubObjectiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEvent_Mission_Objective_SubObjectiveComponent_ObjectiveRewardComponent, AMission*, Mission, AObjective*, Objective, USubObjectiveComponent*, subobjective, UObjectiveRewardComponent*, reward);

