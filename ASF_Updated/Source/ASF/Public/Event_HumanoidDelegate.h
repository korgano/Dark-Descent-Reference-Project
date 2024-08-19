#pragma once
#include "CoreMinimal.h"
#include "Event_HumanoidDelegate.generated.h"

class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Humanoid, AHumanoid*, Humanoid);

