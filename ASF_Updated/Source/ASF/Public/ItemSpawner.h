#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemSpawner.generated.h"

UCLASS(Blueprintable)
class ASF_API AItemSpawner : public AActor {
    GENERATED_BODY()
public:
    AItemSpawner(const FObjectInitializer& ObjectInitializer);

};

