#pragma once
#include "CoreMinimal.h"
#include "Event_UAIState_BoolDelegate.generated.h"

class UAIState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UAIState_Bool, UAIState*, State, bool, Success);

