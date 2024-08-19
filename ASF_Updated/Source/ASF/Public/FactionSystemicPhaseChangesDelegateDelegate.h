#pragma once
#include "CoreMinimal.h"
#include "FactionSystemicPhaseChangesDelegateDelegate.generated.h"

class ATMEventSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFactionSystemicPhaseChangesDelegate, ATMEventSystem*, EventSystem);

