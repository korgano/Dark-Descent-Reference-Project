#pragma once
#include "CoreMinimal.h"
#include "Event_AASFPlayerController_AMinimapHandlerDelegate.generated.h"

class AASFPlayerController;
class AMinimapHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AASFPlayerController_AMinimapHandler, AASFPlayerController*, _ASFPlayerController, AMinimapHandler*, MinimapHandler);

