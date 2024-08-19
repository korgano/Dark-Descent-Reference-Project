#pragma once
#include "CoreMinimal.h"
#include "Event_ASFController_Widget_WidgetDelegate.generated.h"

class AASFPlayerController;
class UTinda_UserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_ASFController_Widget_Widget, AASFPlayerController*, Controller, UTinda_UserWidget*, _OldWidget, UTinda_UserWidget*, _NewWidget);

