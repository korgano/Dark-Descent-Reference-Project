#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Segment.h"
#include "RoomGraph_RoomDynamicElement.generated.h"

class UAIPointOfInterestConfig;
class UPointOfInterestConfig_DataAsset;

UCLASS(Blueprintable)
class ASF_API URoomGraph_RoomDynamicElement : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoomElementGID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSegment> RoomElementSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RoomElementCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoomElementRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestConfig* PointOfInterestConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterestConfig_DataAsset* PointOfInterestConfig_DataAsset;
    
public:
    URoomGraph_RoomDynamicElement();

    UFUNCTION(BlueprintCallable)
    void UpdateRoomElement(const TArray<FVector>& _NewCoverEdges);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSegment GetSegmentFromIdx(int32 _SegmentIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSegment> GetRoomElementSegments();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRoomElementRadius() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetRoomElementConnectedElement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRoomElementCenter() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> GetRandomPositionInRoom(int32 _NbPositionToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPointOfInterestConfig* GetPointOfInterestConfig() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableRoomElement(int32 _CoverGID);
    
    UFUNCTION(BlueprintCallable)
    void DisableRoomElement();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FSegment> CircleSortingSegment(const TArray<FSegment>& _CoverEdges);
    
};

