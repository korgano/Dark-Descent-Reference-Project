#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "ExplosiveBarrel.generated.h"

UCLASS(Blueprintable)
class ASF_API AExplosiveBarrel : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    AExplosiveBarrel(const FObjectInitializer& ObjectInitializer);

};

