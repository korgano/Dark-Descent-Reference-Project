#pragma once
#include "CoreMinimal.h"
#include "Event_UTinda_EffectDelegate.generated.h"

class UTinda_Effect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_UTinda_Effect, UTinda_Effect*, Effect);

