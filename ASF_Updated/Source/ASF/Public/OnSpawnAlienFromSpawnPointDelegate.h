#pragma once
#include "CoreMinimal.h"
#include "OnSpawnAlienFromSpawnPointDelegate.generated.h"

class AAlien;
class ASpawnPoint;
class UAlienSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSpawnAlienFromSpawnPoint, UAlienSystemic*, AlienSystemic, ASpawnPoint*, SpawnPoint, AAlien*, Alien);

