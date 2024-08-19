#pragma once
#include "CoreMinimal.h"
#include "Event_Retribution_OverDelegate.generated.h"

class URetribution_Component;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Retribution_Over, URetribution_Component*, Retribution_Component);

