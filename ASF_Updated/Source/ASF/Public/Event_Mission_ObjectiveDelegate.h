#pragma once
#include "CoreMinimal.h"
#include "Event_Mission_ObjectiveDelegate.generated.h"

class AMission;
class AObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Mission_Objective, AMission*, Mission, AObjective*, Objective);

