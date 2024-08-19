#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_AActorReconstructedDelegate.h"
#include "Templates/SubclassOf.h"
#include "NavigationUpdaterComponent.generated.h"

class AASFGameModeBase_TacticalMode;
class AActor;
class ARoomCluster;
class UBoxComponent;
class UNavArea;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UNavigationUpdaterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedNavAreaUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> NavAreaState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NavigationBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFGameModeBase_TacticalMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorRebuildingNavigation;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AActorReconstructed OnActorNavigationReconstructed;
    
    UNavigationUpdaterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateNavigationState_Reconstruct(TSubclassOf<UNavArea> NewState, TSubclassOf<UNavArea> PreviousState);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNavigationState(TSubclassOf<UNavArea> NewState, TSubclassOf<UNavArea> PreviousState, bool _RebuildRoomGraph);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterSet(ARoomCluster* _RoomCluster);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationReconstructed(AActor* NavReconstructionActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitNavArea(ARoomCluster* _RoomCluster);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetActorRebuildingNavigation(TSubclassOf<UNavArea> NewState, TSubclassOf<UNavArea> PreviousState);
    
};

