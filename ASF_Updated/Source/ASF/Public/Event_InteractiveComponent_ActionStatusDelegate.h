#pragma once
#include "CoreMinimal.h"
#include "EnumActionStatus.h"
#include "Event_InteractiveComponent_ActionStatusDelegate.generated.h"

class UInteractiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_InteractiveComponent_ActionStatus, UInteractiveComponent*, InteractiveComponent, EnumActionStatus, InteractionStatus);

