#pragma once
#include "CoreMinimal.h"
#include "AmbushPointRegistrationDelegateDelegate.generated.h"

class AAmbushSpawnPoint;
class ATMEventSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAmbushPointRegistrationDelegate, ATMEventSystem*, EventSystem, AAmbushSpawnPoint*, AmbushSpawnPoint);

