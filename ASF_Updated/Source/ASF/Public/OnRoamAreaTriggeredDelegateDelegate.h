#pragma once
#include "CoreMinimal.h"
#include "OnRoamAreaTriggeredDelegateDelegate.generated.h"

class AGunshipRoamArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoamAreaTriggeredDelegate, AGunshipRoamArea*, RoamArea);

