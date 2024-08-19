#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_URoomAnchorComponent_int32Delegate.h"
#include "RoomAnchorComponent.generated.h"

class ARoomCluster;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API URoomAnchorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_URoomAnchorComponent_int32 OnRoomAnchorComponentRegister;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARoomCluster* RoomCluster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DynamicElementGraphID;
    
public:
    URoomAnchorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterSet(ARoomCluster* _RoomCluster);
    
    UFUNCTION(BlueprintCallable)
    void AddEntranceToGraph();
    
};

