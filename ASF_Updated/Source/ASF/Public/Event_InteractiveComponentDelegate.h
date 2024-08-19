#pragma once
#include "CoreMinimal.h"
#include "Event_InteractiveComponentDelegate.generated.h"

class UInteractiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_InteractiveComponent, UInteractiveComponent*, InteractiveComponent);

