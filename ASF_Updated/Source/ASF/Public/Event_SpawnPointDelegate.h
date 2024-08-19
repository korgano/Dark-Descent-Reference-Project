#pragma once
#include "CoreMinimal.h"
#include "Event_SpawnPointDelegate.generated.h"

class ASpawnPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_SpawnPoint, ASpawnPoint*, SpawnPoint);

