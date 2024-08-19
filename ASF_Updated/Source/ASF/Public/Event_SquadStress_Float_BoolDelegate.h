#pragma once
#include "CoreMinimal.h"
#include "Event_SquadStress_Float_BoolDelegate.generated.h"

class USquadStress_Component;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_SquadStress_Float_Bool, USquadStress_Component*, Stress);

