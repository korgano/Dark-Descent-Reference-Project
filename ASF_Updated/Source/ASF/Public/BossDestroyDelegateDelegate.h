#pragma once
#include "CoreMinimal.h"
#include "BossData.h"
#include "BossDestroyDelegateDelegate.generated.h"

class UAlienSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBossDestroyDelegate, UAlienSystemic*, AlienSystemic, const FBossData&, BossData);

