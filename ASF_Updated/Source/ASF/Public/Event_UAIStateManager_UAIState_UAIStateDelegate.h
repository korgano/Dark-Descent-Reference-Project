#pragma once
#include "CoreMinimal.h"
#include "Event_UAIStateManager_UAIState_UAIStateDelegate.generated.h"

class UAIState;
class UAIStateManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_UAIStateManager_UAIState_UAIState, UAIStateManager*, AIStateManager, UAIState*, CurrentState, UAIState*, OldState);

