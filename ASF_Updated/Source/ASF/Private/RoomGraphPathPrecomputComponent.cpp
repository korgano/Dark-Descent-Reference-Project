#include "RoomGraphPathPrecomputComponent.h"

URoomGraphPathPrecomputComponent::URoomGraphPathPrecomputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoomCluster = NULL;
}

void URoomGraphPathPrecomputComponent::SetWorldPosition(FVector _WorldPosition) {
}

void URoomGraphPathPrecomputComponent::PrecomputPath(ARoomCluster* _RoomCluster) {
}

void URoomGraphPathPrecomputComponent::OnRoomModified(ARoomCluster* _RoomCluster, int32 _RoomID) {
}

void URoomGraphPathPrecomputComponent::OnRoomClusterSet(ARoomCluster* _RoomCluster) {
}

FPrecomputedPath URoomGraphPathPrecomputComponent::GetPrecomputedPath() {
    return FPrecomputedPath{};
}


