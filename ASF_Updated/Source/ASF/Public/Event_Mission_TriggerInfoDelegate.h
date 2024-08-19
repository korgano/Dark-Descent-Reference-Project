#pragma once
#include "CoreMinimal.h"
#include "Event_Mission_TriggerInfoDelegate.generated.h"

class AMission;
class UTriggerInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Mission_TriggerInfo, AMission*, Mission, UTriggerInfo*, TriggerInfo);

