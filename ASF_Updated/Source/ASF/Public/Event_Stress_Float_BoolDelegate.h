#pragma once
#include "CoreMinimal.h"
#include "Event_Stress_Float_BoolDelegate.generated.h"

class UStress_Component;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Stress_Float_Bool, UStress_Component*, Stress, float, Value, bool, _DisplayFeedback);

