#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_AActorDelegate.h"
#include "Event_Navigation_ReconstructedDelegate.h"
#include "NavUpdaterManagerComponent.generated.h"

class AActor;
class ANavigationData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UNavUpdaterManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> actorRebuildingNav;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Navigation_Reconstructed OnNavReconstructed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AActor OnActorNavReconstructed;
    
    UNavUpdaterManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UpdateSafeZoneStatus();
    
    UFUNCTION(BlueprintCallable)
    void NotifieNavigationRebuild(AActor* NavRebuildActor);
    
    UFUNCTION(BlueprintCallable)
    void NotifieNavigationGenerationFinished(ANavigationData* NavData);
    
};

