#pragma once
#include "CoreMinimal.h"
#include "Event_AEggDelegate.generated.h"

class AEgg;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AEgg, AEgg*, Egg);

