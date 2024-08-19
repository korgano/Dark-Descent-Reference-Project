#pragma once
#include "CoreMinimal.h"
#include "BossData.h"
#include "BossSpawnDelegateDelegate.generated.h"

class UAlienSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBossSpawnDelegate, UAlienSystemic*, AlienSystemic, const FBossData&, BossData, bool, IsRespawn);

