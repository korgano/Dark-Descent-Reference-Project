#include "LDSKPropsActor.h"
#include "EnumLDActorType.h"

ALDSKPropsActor::ALDSKPropsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LDType = EnumLDActorType::PROPS;
}


