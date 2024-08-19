#include "LDSTCosmeticActor.h"
#include "EnumLDActorType.h"

ALDSTCosmeticActor::ALDSTCosmeticActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LDType = EnumLDActorType::COSMETIC;
}


