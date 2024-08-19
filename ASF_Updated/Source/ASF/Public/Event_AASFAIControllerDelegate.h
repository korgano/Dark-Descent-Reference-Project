#pragma once
#include "CoreMinimal.h"
#include "Event_AASFAIControllerDelegate.generated.h"

class AASFAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AASFAIController, AASFAIController*, ASFAIController);

