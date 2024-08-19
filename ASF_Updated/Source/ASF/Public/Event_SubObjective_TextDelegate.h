#pragma once
#include "CoreMinimal.h"
#include "Event_SubObjective_TextDelegate.generated.h"

class USubObjectiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_SubObjective_Text, USubObjectiveComponent*, subobjective, FText, ObjectiveText);

