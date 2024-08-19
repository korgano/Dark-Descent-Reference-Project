#pragma once
#include "CoreMinimal.h"
#include "EventTriggerDelegateDelegate.generated.h"

class ATMEventSystem;
class UTMEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEventTriggerDelegate, ATMEventSystem*, EventSystem, UTMEvent*, Event);

