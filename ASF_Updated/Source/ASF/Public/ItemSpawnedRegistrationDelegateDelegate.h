#pragma once
#include "CoreMinimal.h"
#include "ItemSpawnedRegistrationDelegateDelegate.generated.h"

class AASFGameState_TacticalMode;
class AItemSpawned;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemSpawnedRegistrationDelegate, AASFGameState_TacticalMode*, GameState, AItemSpawned*, AItemSpawned);

