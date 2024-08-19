#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "QueenSpawner.generated.h"

UCLASS(Blueprintable)
class ASF_API AQueenSpawner : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    AQueenSpawner(const FObjectInitializer& ObjectInitializer);

};

