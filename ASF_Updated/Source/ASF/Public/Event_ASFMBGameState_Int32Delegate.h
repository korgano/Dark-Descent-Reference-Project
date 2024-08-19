#pragma once
#include "CoreMinimal.h"
#include "Event_ASFMBGameState_Int32Delegate.generated.h"

class AASFGameState_BaseManagement;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFMBGameState_Int32, AASFGameState_BaseManagement*, GameState, int32, Value);

