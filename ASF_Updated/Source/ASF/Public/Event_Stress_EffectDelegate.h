#pragma once
#include "CoreMinimal.h"
#include "Event_Stress_EffectDelegate.generated.h"

class UStress_Component;
class UTinda_Effect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Stress_Effect, UStress_Component*, Stress, TSoftClassPtr<UTinda_Effect>, _Effect, bool, _Added);

