#pragma once
#include "CoreMinimal.h"
#include "EnumActionStatus.h"
#include "Event_Action_ActionStatusDelegate.generated.h"

class UAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Action_ActionStatus, UAction*, Action, EnumActionStatus, ActionStatus);

