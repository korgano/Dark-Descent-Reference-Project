#pragma once
#include "CoreMinimal.h"
#include "Event_MissionDelegate.generated.h"

class AMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Mission, AMission*, Mission);

