#include "LDSTWallActor.h"

ALDSTWallActor::ALDSTWallActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TSoftClassPtr<UMapFeedbackDataProperties> ALDSTWallActor::GetOpenDataProperties_Implementation() const {
    return NULL;
}


