#pragma once
#include "CoreMinimal.h"
#include "Event_Cocoon_HumanoidDelegate.generated.h"

class ACocoon;
class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Cocoon_Humanoid, ACocoon*, Cocoon, AHumanoid*, Humanoid);

