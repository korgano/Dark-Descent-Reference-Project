#pragma once
#include "CoreMinimal.h"
#include "Event_UASFCharacterMovementComponent_Bool_FloatDelegate.generated.h"

class UASFCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_UASFCharacterMovementComponent_Bool_Float, UASFCharacterMovementComponent*, MovementComponent, bool, _bRootMotion, float, _Angle);

