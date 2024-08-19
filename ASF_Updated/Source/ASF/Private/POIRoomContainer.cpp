#include "POIRoomContainer.h"

UPOIRoomContainer::UPOIRoomContainer() {
    this->RoomId = 0;
}

void UPOIRoomContainer::OnRoomModified(ARoomCluster* _RoomCluster, int32 _RoomID) {
}

void UPOIRoomContainer::InitPOIContainer(int32 _RoomID) {
}

int32 UPOIRoomContainer::FindInsertionPosition(float activationTime) {
    return 0;
}

int32 UPOIRoomContainer::FindDeletionPosition(UAIPointOfInterestVolatile* _PointOfInterest) {
    return 0;
}


