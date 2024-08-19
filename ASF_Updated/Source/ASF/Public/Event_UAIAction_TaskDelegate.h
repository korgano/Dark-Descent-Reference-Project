#pragma once
#include "CoreMinimal.h"
#include "Event_UAIAction_TaskDelegate.generated.h"

class UAIAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UAIAction_Task, UAIAction*, Action, bool, Success);

