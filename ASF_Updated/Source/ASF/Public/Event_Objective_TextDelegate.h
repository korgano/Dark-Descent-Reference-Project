#pragma once
#include "CoreMinimal.h"
#include "Event_Objective_TextDelegate.generated.h"

class AObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Objective_Text, AObjective*, Objective, FText, ObjectiveText);

