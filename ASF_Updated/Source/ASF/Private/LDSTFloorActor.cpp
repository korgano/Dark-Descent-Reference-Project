#include "LDSTFloorActor.h"
#include "EnumLDActorType.h"

ALDSTFloorActor::ALDSTFloorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LDType = EnumLDActorType::FLOOR;
}


