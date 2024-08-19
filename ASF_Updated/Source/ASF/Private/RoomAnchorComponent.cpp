#include "RoomAnchorComponent.h"

URoomAnchorComponent::URoomAnchorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoomCluster = NULL;
    this->DynamicElementGraphID = 0;
}

void URoomAnchorComponent::OnRoomClusterSet(ARoomCluster* _RoomCluster) {
}

void URoomAnchorComponent::AddEntranceToGraph() {
}


