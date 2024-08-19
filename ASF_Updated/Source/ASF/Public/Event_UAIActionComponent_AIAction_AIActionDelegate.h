#pragma once
#include "CoreMinimal.h"
#include "Event_UAIActionComponent_AIAction_AIActionDelegate.generated.h"

class UAIAction;
class UAIActionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_UAIActionComponent_AIAction_AIAction, UAIActionComponent*, UAIActionComponent, UAIAction*, _OldAction, UAIAction*, _NewAction);

