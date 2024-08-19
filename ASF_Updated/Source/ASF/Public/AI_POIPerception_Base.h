#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AI_POIPerceptionComponent.h"
#include "AI_POIPerception_Base.generated.h"

class AInfluenceMapManager;
class UAIPointOfInterestContainer;
class UNavAreaClassDetection;
class UPOIDefaultContainer;
class UPOITargetingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAI_POIPerception_Base : public UAI_POIPerceptionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMultithreading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateSpotPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateNoticeEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepathOnNavblockerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOITargetingComponent* TargetingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavAreaClassDetection* NavAreaClassDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIPointOfInterestContainer*> RoomContainerInSight;
    
public:
    UAI_POIPerception_Base(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnInfluenceMapUpdated(AInfluenceMapManager* _InfluenceMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetNavBlockerFactionTag() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ComputeRoomContainerInSight();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ComputeNavBlockerSeen(UPOIDefaultContainer* _PerceptionResult, FGameplayTag NavBlockerTag);
    
    UFUNCTION(BlueprintCallable)
    void ComputeNavBlockerRemoved();
    
    UFUNCTION(BlueprintCallable)
    void ComputeNavBlockerAdded();
    
    UFUNCTION(BlueprintCallable)
    void AdditionnalSightPerceptionUpdate();
    
    UFUNCTION(BlueprintCallable)
    void AdditionnalRoomPerceptionUpdate();
    
};

