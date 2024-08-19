#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PrecomputedPath.h"
#include "RoomGraphPathPrecomputComponent.generated.h"

class ARoomCluster;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API URoomGraphPathPrecomputComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARoomCluster* RoomCluster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrecomputedPath PrecomputedPath;
    
public:
    URoomGraphPathPrecomputComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWorldPosition(FVector _WorldPosition);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PrecomputPath(ARoomCluster* _RoomCluster);
    
    UFUNCTION(BlueprintCallable)
    void OnRoomModified(ARoomCluster* _RoomCluster, int32 _RoomID);
    
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterSet(ARoomCluster* _RoomCluster);
    
public:
    UFUNCTION(BlueprintCallable)
    FPrecomputedPath GetPrecomputedPath();
    
};

