#pragma once
#include "CoreMinimal.h"
#include "Event_AHiveDefenseTriggerAreaDelegate.generated.h"

class AHiveDefenseTriggerArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AHiveDefenseTriggerArea, AHiveDefenseTriggerArea*, TriggerArea);

