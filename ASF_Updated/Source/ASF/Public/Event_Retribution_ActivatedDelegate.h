#pragma once
#include "CoreMinimal.h"
#include "Event_Retribution_ActivatedDelegate.generated.h"

class URetribution_Component;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Retribution_Activated, URetribution_Component*, Retribution_Component);

