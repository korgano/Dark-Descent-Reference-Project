#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "Event_UTindaAITask_TaskCompletedDelegate.generated.h"

class UTindaAITask_MoveTo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UTindaAITask_TaskCompleted, UTindaAITask_MoveTo*, TindaAITask_MoveTo, TEnumAsByte<EPathFollowingResult::Type>, Result);

