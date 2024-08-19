#pragma once
#include "CoreMinimal.h"
#include "Event_Nest_EggDelegate.generated.h"

class AEgg;
class ANest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Nest_Egg, ANest*, Nest, AEgg*, Egg);

