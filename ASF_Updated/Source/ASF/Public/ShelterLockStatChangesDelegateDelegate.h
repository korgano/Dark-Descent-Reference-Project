#pragma once
#include "CoreMinimal.h"
#include "ShelterLockStatChangesDelegateDelegate.generated.h"

class ATMEventSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShelterLockStatChangesDelegate, ATMEventSystem*, EventSystem, bool, IsShelterLocked);

