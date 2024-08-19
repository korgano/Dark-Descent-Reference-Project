#pragma once
#include "CoreMinimal.h"
#include "Event_ASFController_intDelegate.generated.h"

class AASFPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFController_int, AASFPlayerController*, Controller, int32, IndexRightClick);

