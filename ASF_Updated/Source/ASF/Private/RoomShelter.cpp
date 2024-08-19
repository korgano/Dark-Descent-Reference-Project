#include "RoomShelter.h"
#include "Tinda_EffectHandlerComponent.h"

ARoomShelter::ARoomShelter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
}

void ARoomShelter::OnMissionLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

TArray<int64> ARoomShelter::GetShelterRooms() const {
    return TArray<int64>();
}

void ARoomShelter::AddShelterableRoomAt(const FVector& _RoomPosition) {
}


