#pragma once
#include "CoreMinimal.h"
#include "ESaveType.h"
#include "Event_SaveSystemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_SaveSystem, ESaveType, SaveType);

