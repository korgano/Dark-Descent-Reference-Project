#pragma once
#include "CoreMinimal.h"
#include "Event_AASFPlayerControllerTactical_SubObjective_boolDelegate.generated.h"

class AASFPlayerControllerTactical;
class USubObjectiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AASFPlayerControllerTactical_SubObjective_bool, AASFPlayerControllerTactical*, _ASFPlayerController, USubObjectiveComponent*, _SubObjectiveComponent, bool, _bool);

