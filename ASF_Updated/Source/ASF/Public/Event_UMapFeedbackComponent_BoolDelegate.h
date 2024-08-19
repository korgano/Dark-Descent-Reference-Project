#pragma once
#include "CoreMinimal.h"
#include "Event_UMapFeedbackComponent_BoolDelegate.generated.h"

class UMapFeedbackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UMapFeedbackComponent_Bool, UMapFeedbackComponent*, MapFeedbackComponent, bool, bActivated);

