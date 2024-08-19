#pragma once
#include "CoreMinimal.h"
#include "AggressivenessChangedDelegateDelegate.generated.h"

class UFactionSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAggressivenessChangedDelegate, UFactionSystemic*, FactionSystemic, int32, OldAggressiveness, int32, NewAggressiveness);

