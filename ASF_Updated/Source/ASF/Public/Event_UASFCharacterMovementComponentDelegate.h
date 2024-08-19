#pragma once
#include "CoreMinimal.h"
#include "Event_UASFCharacterMovementComponentDelegate.generated.h"

class UASFCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_UASFCharacterMovementComponent, UASFCharacterMovementComponent*, MovementComponent);

