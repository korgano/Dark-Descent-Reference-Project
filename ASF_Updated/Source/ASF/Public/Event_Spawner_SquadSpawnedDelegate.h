#pragma once
#include "CoreMinimal.h"
#include "Event_Spawner_SquadSpawnedDelegate.generated.h"

class ASquad;
class ASquadSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Spawner_SquadSpawned, ASquadSpawner*, SquadSpawner, ASquad*, Squad);

