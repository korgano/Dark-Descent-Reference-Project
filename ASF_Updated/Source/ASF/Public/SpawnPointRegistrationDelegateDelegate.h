#pragma once
#include "CoreMinimal.h"
#include "SpawnPointRegistrationDelegateDelegate.generated.h"

class ASpawnPoint;
class ATMEventSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnPointRegistrationDelegate, ATMEventSystem*, EventSystem, ASpawnPoint*, SpawnPoint);

