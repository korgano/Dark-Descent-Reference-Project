#pragma once
#include "CoreMinimal.h"
#include "Event_AnimComp_BoolDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimComp_Bool, bool, Value);

