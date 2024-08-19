#pragma once
#include "CoreMinimal.h"
#include "Event_ASFController_boolDelegate.generated.h"

class AASFPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFController_bool, AASFPlayerController*, Controller, bool, Value);

