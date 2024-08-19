#pragma once
#include "CoreMinimal.h"
#include "Event_ASFController_Overlay_boolDelegate.generated.h"

class AASFPlayerController;
class UOverlay_WidgetComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_ASFController_Overlay_bool, AASFPlayerController*, Controller, UOverlay_WidgetComponent*, Overlay, bool, Open);

