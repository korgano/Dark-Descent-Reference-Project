#pragma once
#include "CoreMinimal.h"
#include "Event_AnimComp_HumanoidDelegate.generated.h"

class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimComp_Humanoid, AHumanoid*, Humanoid);

