#pragma once
#include "CoreMinimal.h"
#include "HiveSizeChangesDelegateDelegate.generated.h"

class ATMEventSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHiveSizeChangesDelegate, ATMEventSystem*, EventSystem, int32, Value);

