#pragma once
#include "CoreMinimal.h"
#include "EnumAIActionStatus.h"
#include "Event_UAIActionDelegate.generated.h"

class UAIAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UAIAction, UAIAction*, Action, EnumAIActionStatus, _AIActionStatus);

