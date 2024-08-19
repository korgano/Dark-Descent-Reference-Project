#pragma once
#include "CoreMinimal.h"
#include "StructDataPad.h"
#include "Event_Mission_DataPadDelegate.generated.h"

class AMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Mission_DataPad, AMission*, Mission, FStructDataPad, DataPad);

