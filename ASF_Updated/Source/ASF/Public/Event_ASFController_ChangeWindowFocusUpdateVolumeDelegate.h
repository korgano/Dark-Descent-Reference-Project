#pragma once
#include "CoreMinimal.h"
#include "Event_ASFController_ChangeWindowFocusUpdateVolumeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_ASFController_ChangeWindowFocusUpdateVolume, float, Value);

