#pragma once
#include "CoreMinimal.h"
#include "Event_ObjectiveDelegate.generated.h"

class AObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Objective, AObjective*, Objective);

