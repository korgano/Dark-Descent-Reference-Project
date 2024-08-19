#pragma once
#include "CoreMinimal.h"
#include "Event_UTinda_EffectHandlerComponent_UTinda_EffectDelegate.generated.h"

class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UTinda_EffectHandlerComponent_UTinda_Effect, UTinda_EffectHandlerComponent*, EffectHandler, UTinda_Effect*, Effect);

