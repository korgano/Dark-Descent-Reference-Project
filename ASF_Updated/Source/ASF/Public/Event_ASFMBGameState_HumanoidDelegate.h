#pragma once
#include "CoreMinimal.h"
#include "Event_ASFMBGameState_HumanoidDelegate.generated.h"

class AASFGameState_BaseManagement;
class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFMBGameState_Humanoid, AASFGameState_BaseManagement*, GameState, AHumanoid*, Marine);

