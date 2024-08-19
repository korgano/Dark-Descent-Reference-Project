#include "RoomGraph_RoomDynamicElement.h"

URoomGraph_RoomDynamicElement::URoomGraph_RoomDynamicElement() {
    this->RoomElementGID = 0;
    this->RoomElementRadius = 0.00f;
    this->PointOfInterestConfig = NULL;
    this->PointOfInterestConfig_DataAsset = NULL;
}

void URoomGraph_RoomDynamicElement::UpdateRoomElement(const TArray<FVector>& _NewCoverEdges) {
}

FSegment URoomGraph_RoomDynamicElement::GetSegmentFromIdx(int32 _SegmentIdx) const {
    return FSegment{};
}

TArray<FSegment> URoomGraph_RoomDynamicElement::GetRoomElementSegments() {
    return TArray<FSegment>();
}

float URoomGraph_RoomDynamicElement::GetRoomElementRadius() const {
    return 0.0f;
}

TArray<int32> URoomGraph_RoomDynamicElement::GetRoomElementConnectedElement() {
    return TArray<int32>();
}

FVector URoomGraph_RoomDynamicElement::GetRoomElementCenter() const {
    return FVector{};
}

TArray<FVector> URoomGraph_RoomDynamicElement::GetRandomPositionInRoom(int32 _NbPositionToFind) {
    return TArray<FVector>();
}

UAIPointOfInterestConfig* URoomGraph_RoomDynamicElement::GetPointOfInterestConfig() const {
    return NULL;
}

void URoomGraph_RoomDynamicElement::EnableRoomElement(int32 _CoverGID) {
}

void URoomGraph_RoomDynamicElement::DisableRoomElement() {
}

TArray<FSegment> URoomGraph_RoomDynamicElement::CircleSortingSegment(const TArray<FSegment>& _CoverEdges) {
    return TArray<FSegment>();
}


