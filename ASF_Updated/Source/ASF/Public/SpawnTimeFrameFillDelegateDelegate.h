#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnTimeFrameFillDelegateDelegate.generated.h"

class UFactionSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSpawnTimeFrameFillDelegate, UFactionSystemic*, FactionSystemic, int32, SpawnPool, FVector2D, WavesNumberBounds);

