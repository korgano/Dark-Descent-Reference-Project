#pragma once
#include "CoreMinimal.h"
#include "Event_ASFController_floatDelegate.generated.h"

class AASFPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFController_float, AASFPlayerController*, Controller, float, Value);

