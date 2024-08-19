#pragma once
#include "CoreMinimal.h"
#include "PowerLoaderRegistrationDelegateDelegate.generated.h"

class AASFGameState_TacticalMode;
class APowerLoaderActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPowerLoaderRegistrationDelegate, AASFGameState_TacticalMode*, GameState, APowerLoaderActor*, powerLoader);

