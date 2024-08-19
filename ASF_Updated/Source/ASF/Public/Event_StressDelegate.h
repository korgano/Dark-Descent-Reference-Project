#pragma once
#include "CoreMinimal.h"
#include "Event_StressDelegate.generated.h"

class UStress_Component;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Stress, UStress_Component*, Stress);

