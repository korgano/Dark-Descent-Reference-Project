#pragma once
#include "CoreMinimal.h"
#include "Event_Action_PathBuiltDelegate.generated.h"

class UASF_AISplineMovementComponent;
class UNavigationPath;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Action_PathBuilt, UASF_AISplineMovementComponent*, ASF_AISplineMovementComponent, UNavigationPath*, NavigationPath);

