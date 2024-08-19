#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameStateBase_BoolDelegate.generated.h"

class AASFGameStateBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameStateBase_Bool, AASFGameStateBase*, GameState, bool, B);

