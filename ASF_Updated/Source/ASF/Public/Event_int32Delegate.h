#pragma once
#include "CoreMinimal.h"
#include "Event_int32Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_int32, int32, Value);

