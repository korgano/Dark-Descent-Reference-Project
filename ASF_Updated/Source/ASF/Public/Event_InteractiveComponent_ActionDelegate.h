#pragma once
#include "CoreMinimal.h"
#include "Event_InteractiveComponent_ActionDelegate.generated.h"

class UAction;
class UInteractiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_InteractiveComponent_Action, UInteractiveComponent*, InteractiveComponent, UAction*, Action);

