#include "LDSTPropsActor.h"
#include "EnumLDActorType.h"

ALDSTPropsActor::ALDSTPropsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LDType = EnumLDActorType::PROPS;
}


