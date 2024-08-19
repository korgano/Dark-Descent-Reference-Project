#pragma once
#include "CoreMinimal.h"
#include "Event_UASFCharacterMovementComponent_Float_FloatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UASFCharacterMovementComponent_Float_Float, float, TurnAngle, float, TurnDelay);

