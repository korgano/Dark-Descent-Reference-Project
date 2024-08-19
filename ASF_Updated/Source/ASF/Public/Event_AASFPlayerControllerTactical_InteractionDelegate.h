#pragma once
#include "CoreMinimal.h"
#include "Event_AASFPlayerControllerTactical_InteractionDelegate.generated.h"

class AASFPlayerControllerTactical;
class UInteractiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AASFPlayerControllerTactical_Interaction, AASFPlayerControllerTactical*, _ASFPlayerController, UInteractiveComponent*, _OldInteractiveComponent, UInteractiveComponent*, _NewInteractiveComponent);

