#pragma once
#include "CoreMinimal.h"
#include "AvailableGuardPathCountChangedDelegateDelegate.generated.h"

class UAlienSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAvailableGuardPathCountChangedDelegate, UAlienSystemic*, AlienSystemic, int32, AvailableGuardPathCount);

