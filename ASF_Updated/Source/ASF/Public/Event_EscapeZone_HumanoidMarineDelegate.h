#pragma once
#include "CoreMinimal.h"
#include "Event_EscapeZone_HumanoidMarineDelegate.generated.h"

class AEscapeZone;
class AHumanoidMarine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_EscapeZone_HumanoidMarine, AEscapeZone*, EscapeZone, AHumanoidMarine*, Humanoid);

