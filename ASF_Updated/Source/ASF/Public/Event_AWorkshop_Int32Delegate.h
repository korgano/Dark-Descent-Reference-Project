#pragma once
#include "CoreMinimal.h"
#include "Event_AWorkshop_Int32Delegate.generated.h"

class AWorkshop;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AWorkshop_Int32, AWorkshop*, Workshop, int32, OldValue);

