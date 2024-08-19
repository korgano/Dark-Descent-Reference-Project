#pragma once
#include "CoreMinimal.h"
#include "EnumDismemberedState.h"
#include "Event_DismemberStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_DismemberStateChange, EnumDismemberedState, DismemberedState);

