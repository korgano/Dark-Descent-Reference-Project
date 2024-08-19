#pragma once
#include "CoreMinimal.h"
#include "Event_RotateInMoveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_RotateInMove, float, TurnAngle, float, TurnDelay);

