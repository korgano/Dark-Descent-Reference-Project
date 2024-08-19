#pragma once
#include "CoreMinimal.h"
#include "Event_AASFPlayerControllerTacticalDelegate.generated.h"

class AASFPlayerControllerTactical;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AASFPlayerControllerTactical, AASFPlayerControllerTactical*, _ASFPlayerController);

