#pragma once
#include "CoreMinimal.h"
#include "EnumObjectiveStatus.h"
#include "Event_Objective_Status_StatusDelegate.generated.h"

class AObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Objective_Status_Status, AObjective*, Objective, EnumObjectiveStatus, OldObjectiveStatus, EnumObjectiveStatus, NewObjectiveStatus);

