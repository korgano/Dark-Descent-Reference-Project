#pragma once
#include "CoreMinimal.h"
#include "ETutorialState.h"
#include "Event_AASFPlayerController_TutorialStateDelegate.generated.h"

class AASFPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AASFPlayerController_TutorialState, AASFPlayerController*, _ASFPlayerController, ETutorialState, TutorialState);

