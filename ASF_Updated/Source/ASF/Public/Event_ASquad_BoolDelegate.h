#pragma once
#include "CoreMinimal.h"
#include "Event_ASquad_BoolDelegate.generated.h"

class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASquad_Bool, ASquad*, _Squad, bool, added);

