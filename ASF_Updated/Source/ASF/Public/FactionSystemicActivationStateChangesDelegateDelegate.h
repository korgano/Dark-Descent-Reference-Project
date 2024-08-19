#pragma once
#include "CoreMinimal.h"
#include "FactionSystemicActivationStateChangesDelegateDelegate.generated.h"

class UFactionSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFactionSystemicActivationStateChangesDelegate, UFactionSystemic*, FactionSystemic, bool, IsActivated);

