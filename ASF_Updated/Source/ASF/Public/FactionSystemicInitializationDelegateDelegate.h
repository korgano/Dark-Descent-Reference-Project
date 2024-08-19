#pragma once
#include "CoreMinimal.h"
#include "FactionSystemicInitializationDelegateDelegate.generated.h"

class ATMEventSystem;
class UFactionSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFactionSystemicInitializationDelegate, ATMEventSystem*, EventSystem, UFactionSystemic*, FactionSystemic);

