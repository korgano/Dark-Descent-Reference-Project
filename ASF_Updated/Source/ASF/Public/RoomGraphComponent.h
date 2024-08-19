#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Event_URoomGraphComponent_int32Delegate.h"
#include "PrecomputedPath_Points.h"
#include "RoomGraphComponent.generated.h"

class ARoomCluster;
class UBoxComponent;
class URoomClusterFilter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API URoomGraphComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrecomputedPath_Points PrecomputedPath_Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntrancePosMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFacingRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_URoomGraphComponent_int32 OnGraphComponentRegister;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARoomCluster* RoomCluster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NavigationBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DynamicElementGraphID;
    
public:
    URoomGraphComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNavigationBox(UBoxComponent* _NavigationBoxComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterSet(ARoomCluster* _RoomCluster);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetRoomLocation() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanGetThrought(URoomClusterFilter* _ClusterFilter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddEntranceToGraph();
    
};

