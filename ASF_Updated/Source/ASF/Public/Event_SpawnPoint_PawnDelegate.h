#pragma once
#include "CoreMinimal.h"
#include "Event_SpawnPoint_PawnDelegate.generated.h"

class APawn;
class ASpawnPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_SpawnPoint_Pawn, ASpawnPoint*, SpawnPoint, APawn*, Pawn);

