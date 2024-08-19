#pragma once
#include "CoreMinimal.h"
#include "Event_AASFPlayerControllerTactical_UTMMainWidgetDelegate.generated.h"

class AASFPlayerControllerTactical;
class UTMMainWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AASFPlayerControllerTactical_UTMMainWidget, AASFPlayerControllerTactical*, _ASFPlayerController, UTMMainWidget*, MainWidget);

