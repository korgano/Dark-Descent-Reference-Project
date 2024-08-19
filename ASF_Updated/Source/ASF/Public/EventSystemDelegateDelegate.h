#pragma once
#include "CoreMinimal.h"
#include "EventSystemDelegateDelegate.generated.h"

class ATMEventSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventSystemDelegate, ATMEventSystem*, EventSystem);

