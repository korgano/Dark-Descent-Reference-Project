#pragma once
#include "CoreMinimal.h"
#include "Event_OnGamePerceptionUpdatedDelegate.generated.h"

class UAIPointOfInterestConfig;
class UAIPointOfInterestContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_OnGamePerceptionUpdated, UAIPointOfInterestContainer*, _AIPointOfInterestContainer, UAIPointOfInterestConfig*, _PointOfInterestConfig);

