#pragma once
#include "CoreMinimal.h"
#include "CustomMissionPhase.h"
#include "Event_Mission_FCustomMissionPhaseDelegate.generated.h"

class AMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Mission_FCustomMissionPhase, AMission*, Mission, FCustomMissionPhase, CustomMissionPhase);

