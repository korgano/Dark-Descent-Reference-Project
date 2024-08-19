#pragma once
#include "CoreMinimal.h"
#include "Event_Retribution_ChangedDelegate.generated.h"

class URetribution_Component;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Retribution_Changed, URetribution_Component*, Retribution_Component, float, _OldValue, float, _NewValue);

