#pragma once
#include "CoreMinimal.h"
#include "EnumMissionStatus.h"
#include "Event_Mission_EnumMissionStatus_EnumMissionStatusDelegate.generated.h"

class AMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Mission_EnumMissionStatus_EnumMissionStatus, AMission*, Mission, EnumMissionStatus, OldStatus, EnumMissionStatus, NewStatus);

