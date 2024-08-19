#pragma once
#include "CoreMinimal.h"
#include "EnumActionStatus.h"
#include "Event_UASFHumanoidMovementComponent_MoveTaskCompletedDelegate.generated.h"

class UASFHumanoidMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UASFHumanoidMovementComponent_MoveTaskCompleted, UASFHumanoidMovementComponent*, ASFCharacterMovementComponent, EnumActionStatus, Result);

