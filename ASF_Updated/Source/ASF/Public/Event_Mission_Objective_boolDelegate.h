#pragma once
#include "CoreMinimal.h"
#include "Event_Mission_Objective_boolDelegate.generated.h"

class AMission;
class AObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Mission_Objective_bool, AMission*, Mission, AObjective*, Objective, bool, bIsFinalStep);

