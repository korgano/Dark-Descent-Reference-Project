#pragma once
#include "CoreMinimal.h"
#include "FactionSystemicActivationDelegateDelegate.generated.h"

class ATMEventSystem;
class UFactionSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFactionSystemicActivationDelegate, ATMEventSystem*, EventSystem, UFactionSystemic*, FactionSystemic);

