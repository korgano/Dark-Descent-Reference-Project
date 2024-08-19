#pragma once
#include "CoreMinimal.h"
#include "Event_AMinimapHandler_UMapFeedbackDataComponentDelegate.generated.h"

class AMinimapHandler;
class UMapFeedbackDataComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AMinimapHandler_UMapFeedbackDataComponent, AMinimapHandler*, Handler, UMapFeedbackDataComponent*, MovingObject);

