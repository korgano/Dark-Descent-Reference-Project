#pragma once
#include "CoreMinimal.h"
#include "Event_Overlay_WidgetDelegate.generated.h"

class UOverlay_WidgetComponent;
class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Overlay_Widget, UOverlay_WidgetComponent*, Overlay, UWidget*, OldWidget, UWidget*, NewWidget);

