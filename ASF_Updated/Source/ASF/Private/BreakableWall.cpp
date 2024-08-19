#include "BreakableWall.h"
#include "Tinda_EffectHandlerComponent.h"

ABreakableWall::ABreakableWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
}

void ABreakableWall::DoC4Explosion_Implementation(FTransform _Transform) {
}

void ABreakableWall::AskDemolition_Implementation(FVector _ImpactLocation) {
}


