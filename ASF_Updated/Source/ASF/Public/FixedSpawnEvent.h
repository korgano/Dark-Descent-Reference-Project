#pragma once
#include "CoreMinimal.h"
#include "SpawnEvent.h"
#include "FixedSpawnEvent.generated.h"

UCLASS(Blueprintable)
class ASF_API UFixedSpawnEvent : public USpawnEvent {
    GENERATED_BODY()
public:
    UFixedSpawnEvent();

};

