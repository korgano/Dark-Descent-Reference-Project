#pragma once
#include "CoreMinimal.h"
#include "Event_int32_int32Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_int32_int32, int32, value1, int32, value2);

