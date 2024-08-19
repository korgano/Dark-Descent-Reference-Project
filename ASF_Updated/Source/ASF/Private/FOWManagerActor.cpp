#include "FOWManagerActor.h"

AFOWManagerActor::AFOWManagerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TextureSize = 0;
}

void AFOWManagerActor::SetLayer(FName newLayer, AActor* FOWTile) {
}

int32 AFOWManagerActor::GetTileIndex(FVector ActorPosition) {
    return 0;
}


