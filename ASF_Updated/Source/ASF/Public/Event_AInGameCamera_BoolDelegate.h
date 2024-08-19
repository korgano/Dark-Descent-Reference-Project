#pragma once
#include "CoreMinimal.h"
#include "Event_AInGameCamera_BoolDelegate.generated.h"

class AInGameCamera;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AInGameCamera_Bool, AInGameCamera*, Camera, bool, B);

