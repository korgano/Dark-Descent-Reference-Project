#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "Event_UASFCharacterMovementComponent_ResultDelegate.generated.h"

class UASFCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UASFCharacterMovementComponent_Result, UASFCharacterMovementComponent*, _ASFCharacterMovementComponent, TEnumAsByte<EPathFollowingResult::Type>, Result);

