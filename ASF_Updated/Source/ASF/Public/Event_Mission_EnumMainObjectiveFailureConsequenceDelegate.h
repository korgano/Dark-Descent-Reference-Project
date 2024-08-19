#pragma once
#include "CoreMinimal.h"
#include "EnumMainObjectiveFailureConsequence.h"
#include "Event_Mission_EnumMainObjectiveFailureConsequenceDelegate.generated.h"

class AMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Mission_EnumMainObjectiveFailureConsequence, AMission*, Mission, EnumMainObjectiveFailureConsequence, FailureConsequence);

