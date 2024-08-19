#pragma once
#include "CoreMinimal.h"
#include "AIPointOfInterestContainer.h"
#include "StructPOIExpiration.h"
#include "POIRoomContainer.generated.h"

class ARoomCluster;
class UAIPointOfInterestVolatile;

UCLASS(Blueprintable)
class ASF_API UPOIRoomContainer : public UAIPointOfInterestContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructPOIExpiration> ActivePOI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoomId;
    
public:
    UPOIRoomContainer();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRoomModified(ARoomCluster* _RoomCluster, int32 _RoomID);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitPOIContainer(int32 _RoomID);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 FindInsertionPosition(float activationTime);
    
    UFUNCTION(BlueprintCallable)
    int32 FindDeletionPosition(UAIPointOfInterestVolatile* _PointOfInterest);
    
};

