#pragma once
#include "CoreMinimal.h"
#include "EnumAIActionStatus.h"
#include "Event_UAIActionComponent_AIAction_StatusDelegate.generated.h"

class UAIAction;
class UAIActionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_UAIActionComponent_AIAction_Status, UAIActionComponent*, UAIActionComponent, UAIAction*, _AIAction, EnumAIActionStatus, _AIActionStatus);

