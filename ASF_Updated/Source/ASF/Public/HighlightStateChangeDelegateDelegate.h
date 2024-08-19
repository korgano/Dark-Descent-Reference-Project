#pragma once
#include "CoreMinimal.h"
#include "HighlightStateChangeDelegateDelegate.generated.h"

class ASpawnPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHighlightStateChangeDelegate, ASpawnPoint*, SpawnPoint, bool, IsHighlighted);

