#pragma once
#include "CoreMinimal.h"
#include "ExplorationSpawnTimerDelegateDelegate.generated.h"

class UAlienSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExplorationSpawnTimerDelegate, UAlienSystemic*, AlienSystemic);

