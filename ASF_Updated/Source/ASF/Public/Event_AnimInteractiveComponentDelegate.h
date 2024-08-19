#pragma once
#include "CoreMinimal.h"
#include "Event_AnimInteractiveComponentDelegate.generated.h"

class UInteractiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimInteractiveComponent, UInteractiveComponent*, InteractiveComponent);

