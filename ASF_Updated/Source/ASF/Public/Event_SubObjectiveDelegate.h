#pragma once
#include "CoreMinimal.h"
#include "Event_SubObjectiveDelegate.generated.h"

class USubObjectiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_SubObjective, USubObjectiveComponent*, subobjective);

