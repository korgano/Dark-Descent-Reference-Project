#pragma once
#include "CoreMinimal.h"
#include "Event_boolDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_bool, bool, valid);

