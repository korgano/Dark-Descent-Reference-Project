#pragma once
#include "CoreMinimal.h"
#include "ESquadMode.h"
#include "Event_ASFController_SquadModeDelegate.generated.h"

class AASFPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_ASFController_SquadMode, AASFPlayerController*, Controller, ESquadMode, _OldSquadMode, ESquadMode, _NewSquadMode);

