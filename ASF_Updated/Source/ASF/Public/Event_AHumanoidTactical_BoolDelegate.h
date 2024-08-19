#pragma once
#include "CoreMinimal.h"
#include "Event_AHumanoidTactical_BoolDelegate.generated.h"

class AHumanoidTactical;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AHumanoidTactical_Bool, AHumanoidTactical*, Humanoid, bool, added);

