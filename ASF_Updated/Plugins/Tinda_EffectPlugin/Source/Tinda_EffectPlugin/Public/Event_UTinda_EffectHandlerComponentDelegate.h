#pragma once
#include "CoreMinimal.h"
#include "Event_UTinda_EffectHandlerComponentDelegate.generated.h"

class UTinda_EffectHandlerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_UTinda_EffectHandlerComponent, UTinda_EffectHandlerComponent*, EffectHandler);

