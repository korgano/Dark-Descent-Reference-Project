#pragma once
#include "CoreMinimal.h"
#include "EnumAlienLocomotionType.h"
#include "Event_UpdateLocomotionTypeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_UpdateLocomotionType, EnumAlienLocomotionType, AlienLocomotionType);

