#pragma once
#include "CoreMinimal.h"
#include "Event_Squad_BoolDelegate.generated.h"

class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Squad_Bool, ASquad*, Squad, bool, Bool);

