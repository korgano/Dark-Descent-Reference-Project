#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnumFindCoverSegmentMode.h"
#include "RoomGraph_RoomDynamicElement.h"
#include "Segment.h"
#include "RoomGraph_Cover.generated.h"

UCLASS(Blueprintable)
class ASF_API URoomGraph_Cover : public URoomGraph_RoomDynamicElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CoverReserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetFromCover;
    
public:
    URoomGraph_Cover();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SegmentNormalIntersection(const FSegment& A, const FSegment& B, const FVector& A_N, const FVector& B_N) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ReserveCover(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCover(FVector Location);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ReconstructQuerierPosition(FVector _QuerierPosition, FSegment Segment) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsCoveredFromThreat(FVector _QuerierPosition, FVector _PositionToCover, float _SegmentDistanceThreshold, float _ProtectionAngle);
    
    UFUNCTION(BlueprintCallable)
    FVector FindThreatFromSegment(FVector _QuerierPosition, float _SegmentDistanceThreshold, int32 _SegmentIdx);
    
    UFUNCTION(BlueprintCallable)
    bool FindOppositeSegment(FVector _QuerierPosition, FSegment& _OutSegment, FVector& _OutLocation);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> FindCoverSpots(FVector _QuerierPosition, FVector _PositionToCover, bool _FromDirection, TArray<FVector>& _Segment, float _ProtectionAngle, float _MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSegment> FindCoverSegments(FVector _QuerierPosition, FVector _PositionToCover, float _SegmentDistanceThreshold);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> FindCoverSegmentIdx(FVector _QuerierPosition, float _SegmentDistanceThreshold, EnumFindCoverSegmentMode FilterMode, TArray<float>& _outSegmentDist) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindClosestSegment(FVector _QuerierPosition, float _SegmentDistanceThreshold, int32& _OutSegmentIdx, float& _outSegmentDist) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSegmentCover(int32 segmentIdx, FVector _DirectionToCover, bool _FromDirection, float _ProtectionAngle) const;
    
};

