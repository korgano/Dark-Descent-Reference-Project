#pragma once
#include "CoreMinimal.h"
#include "Event_ASFCharacterAiController_boolDelegate.generated.h"

class AASFCharacterAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFCharacterAiController_bool, AASFCharacterAIController*, AiControllerHumanoid, bool, B);

