#pragma once
#include "CoreMinimal.h"
#include "Event_AASFPlayerControllerTactical_boolDelegate.generated.h"

class AASFPlayerControllerTactical;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AASFPlayerControllerTactical_bool, AASFPlayerControllerTactical*, _ASFPlayerController, bool, bBool);

