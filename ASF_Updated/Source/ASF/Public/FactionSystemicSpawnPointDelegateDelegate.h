#pragma once
#include "CoreMinimal.h"
#include "FactionSystemicSpawnPointDelegateDelegate.generated.h"

class ASpawnPoint;
class UFactionSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFactionSystemicSpawnPointDelegate, UFactionSystemic*, FactionSystemic, ASpawnPoint*, SpawnPoint);

