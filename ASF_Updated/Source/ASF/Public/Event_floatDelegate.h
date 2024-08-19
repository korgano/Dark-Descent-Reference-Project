#pragma once
#include "CoreMinimal.h"
#include "Event_floatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_float, float, Value);

