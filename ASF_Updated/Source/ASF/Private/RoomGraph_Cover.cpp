#include "RoomGraph_Cover.h"

URoomGraph_Cover::URoomGraph_Cover() {
    this->OffsetFromCover = -30.00f;
}

bool URoomGraph_Cover::SegmentNormalIntersection(const FSegment& A, const FSegment& B, const FVector& A_N, const FVector& B_N) const {
    return false;
}

void URoomGraph_Cover::ReserveCover(FVector Location) {
}

void URoomGraph_Cover::ReleaseCover(FVector Location) {
}

FVector URoomGraph_Cover::ReconstructQuerierPosition(FVector _QuerierPosition, FSegment Segment) const {
    return FVector{};
}

bool URoomGraph_Cover::IsCoveredFromThreat(FVector _QuerierPosition, FVector _PositionToCover, float _SegmentDistanceThreshold, float _ProtectionAngle) {
    return false;
}

FVector URoomGraph_Cover::FindThreatFromSegment(FVector _QuerierPosition, float _SegmentDistanceThreshold, int32 _SegmentIdx) {
    return FVector{};
}

bool URoomGraph_Cover::FindOppositeSegment(FVector _QuerierPosition, FSegment& _OutSegment, FVector& _OutLocation) {
    return false;
}

TArray<FVector> URoomGraph_Cover::FindCoverSpots(FVector _QuerierPosition, FVector _PositionToCover, bool _FromDirection, TArray<FVector>& _Segment, float _ProtectionAngle, float _MaxDistance) {
    return TArray<FVector>();
}

TArray<FSegment> URoomGraph_Cover::FindCoverSegments(FVector _QuerierPosition, FVector _PositionToCover, float _SegmentDistanceThreshold) {
    return TArray<FSegment>();
}

TArray<int32> URoomGraph_Cover::FindCoverSegmentIdx(FVector _QuerierPosition, float _SegmentDistanceThreshold, EnumFindCoverSegmentMode FilterMode, TArray<float>& _outSegmentDist) const {
    return TArray<int32>();
}

bool URoomGraph_Cover::FindClosestSegment(FVector _QuerierPosition, float _SegmentDistanceThreshold, int32& _OutSegmentIdx, float& _outSegmentDist) const {
    return false;
}

bool URoomGraph_Cover::DoesSegmentCover(int32 segmentIdx, FVector _DirectionToCover, bool _FromDirection, float _ProtectionAngle) const {
    return false;
}


