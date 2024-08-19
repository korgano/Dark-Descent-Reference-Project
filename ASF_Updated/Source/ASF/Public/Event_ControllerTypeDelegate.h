#pragma once
#include "CoreMinimal.h"
#include "EnumControllerType.h"
#include "Event_ControllerTypeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_ControllerType, EnumControllerType, Type);

