#pragma once
#include "CoreMinimal.h"
#include "Event_Objective_boolDelegate.generated.h"

class AObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Objective_bool, AObjective*, Objective, bool, B);

