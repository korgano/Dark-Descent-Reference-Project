#pragma once
#include "CoreMinimal.h"
#include "Event_HumanoidMovementCompletedDelegate.generated.h"

class AHumanoidTactical;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_HumanoidMovementCompleted, AHumanoidTactical*, Humanoid, bool, ForwardMovement);

