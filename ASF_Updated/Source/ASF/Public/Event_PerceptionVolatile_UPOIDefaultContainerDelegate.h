#pragma once
#include "CoreMinimal.h"
#include "Event_PerceptionVolatile_UPOIDefaultContainerDelegate.generated.h"

class UAIPointOfInterestVolatile;
class UPOIDefaultContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_PerceptionVolatile_UPOIDefaultContainer, UAIPointOfInterestVolatile*, _PerceptionSense, UPOIDefaultContainer*, _PerceptionResult);

