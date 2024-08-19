#pragma once
#include "CoreMinimal.h"
#include "Event_AASFPlayerController_AHumanoidMarineDelegate.generated.h"

class AASFPlayerController;
class AHumanoidMarine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AASFPlayerController_AHumanoidMarine, AASFPlayerController*, _ASFPlayerController, AHumanoidMarine*, _MarineActionMenu);

