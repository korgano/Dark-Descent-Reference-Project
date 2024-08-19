#pragma once
#include "CoreMinimal.h"
#include "RevealStateChangeDelegateDelegate.generated.h"

class ASpawnPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRevealStateChangeDelegate, ASpawnPoint*, SpawnPoint, bool, IsRevealed);

