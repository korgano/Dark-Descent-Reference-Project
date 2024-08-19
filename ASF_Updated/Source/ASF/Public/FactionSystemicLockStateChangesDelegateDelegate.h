#pragma once
#include "CoreMinimal.h"
#include "FactionSystemicLockStateChangesDelegateDelegate.generated.h"

class UFactionSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFactionSystemicLockStateChangesDelegate, UFactionSystemic*, FactionSystemic, bool, IsLocked);

