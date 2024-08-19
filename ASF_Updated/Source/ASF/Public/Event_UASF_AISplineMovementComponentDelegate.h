#pragma once
#include "CoreMinimal.h"
#include "Event_UASF_AISplineMovementComponentDelegate.generated.h"

class UASF_AISplineMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_UASF_AISplineMovementComponent, UASF_AISplineMovementComponent*, ASF_AISplineMovementComponent);

