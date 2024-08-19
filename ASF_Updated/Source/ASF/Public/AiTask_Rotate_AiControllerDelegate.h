#pragma once
#include "CoreMinimal.h"
#include "AiTask_Rotate_AiControllerDelegate.generated.h"

class AASFCharacterAIController;
class UAiTask_Rotate;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAiTask_Rotate_AiController, UAiTask_Rotate*, Task, AASFCharacterAIController*, AIController);

