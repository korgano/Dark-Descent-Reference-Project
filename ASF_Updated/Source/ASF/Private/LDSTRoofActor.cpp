#include "LDSTRoofActor.h"
#include "EnumLDActorType.h"

ALDSTRoofActor::ALDSTRoofActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LDType = EnumLDActorType::ROOF;
    this->bNoCulling = false;
}

void ALDSTRoofActor::OnSubLevelUnveilStateChanged(const FString& _SubLevel, bool _bUnveil) {
}

void ALDSTRoofActor::ActivateCulling(bool _bWithCulling) {
}


