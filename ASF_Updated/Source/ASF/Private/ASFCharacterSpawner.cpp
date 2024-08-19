#include "ASFCharacterSpawner.h"
#include "Tinda_EffectHandlerComponent.h"

AASFCharacterSpawner::AASFCharacterSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
}

void AASFCharacterSpawner::TrySpawnActor_Implementation() {
}


