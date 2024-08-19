#pragma once
#include "CoreMinimal.h"
#include "Event_AMinimapHandler_floatDelegate.generated.h"

class AMinimapHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AMinimapHandler_float, AMinimapHandler*, Handler, float, RenderScale);

