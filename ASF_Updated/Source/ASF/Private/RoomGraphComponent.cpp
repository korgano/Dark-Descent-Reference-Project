#include "RoomGraphComponent.h"

URoomGraphComponent::URoomGraphComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->isEnable = true;
    this->EntrancePosMultiplier = 200;
    this->bIsFacingRight = false;
    this->RoomCluster = NULL;
    this->NavigationBoxComponent = NULL;
    this->DynamicElementGraphID = 0;
}

void URoomGraphComponent::SetNavigationBox(UBoxComponent* _NavigationBoxComponent) {
}

void URoomGraphComponent::OnRoomClusterSet(ARoomCluster* _RoomCluster) {
}

TArray<FVector> URoomGraphComponent::GetRoomLocation() const {
    return TArray<FVector>();
}

bool URoomGraphComponent::CanGetThrought(URoomClusterFilter* _ClusterFilter) {
    return false;
}

void URoomGraphComponent::AddEntranceToGraph() {
}


