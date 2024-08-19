#pragma once
#include "CoreMinimal.h"
#include "EConcurentWidget.h"
#include "Event_AASFPlayerControllerTactical_ConcurentWidgetDelegate.generated.h"

class AASFPlayerControllerTactical;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AASFPlayerControllerTactical_ConcurentWidget, AASFPlayerControllerTactical*, _ASFPlayerController, EConcurentWidget, OldWidget, EConcurentWidget, NewWidget);

