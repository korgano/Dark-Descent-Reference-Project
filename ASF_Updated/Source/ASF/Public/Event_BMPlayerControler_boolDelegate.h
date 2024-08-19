#pragma once
#include "CoreMinimal.h"
#include "Event_BMPlayerControler_boolDelegate.generated.h"

class AASFPlayerController_BM;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_BMPlayerControler_bool, AASFPlayerController_BM*, PlayerController, bool, Value);

