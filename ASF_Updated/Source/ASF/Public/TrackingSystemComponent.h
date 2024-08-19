#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDiplomacy.h"
#include "Event_TrackingSystemComponentDelegate.h"
#include "TrackingSystemComponent.generated.h"

class UMotionTrackerComponent;
class UMotionTracking_DataAsset;
class UTrackedComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UTrackingSystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMotionTrackerComponent*> RegisteredMotionTrackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTrackedComponent*> MovingTrackedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMotionTracking_DataAsset* MotionTracker_DataAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TrackingSystemComponent OnTrackingSystemUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TrackingSystemComponent OnTrackingSystemCleared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TrackingSystemComponent OnTrackingSystemLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TrackingSystemComponent OnTrackingSystemUnlocked;
    
    UTrackingSystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterMotionTracker(UMotionTrackerComponent* _MotionTrackerToUnregister);
    
    UFUNCTION(BlueprintCallable)
    void UnlockScan();
    
    UFUNCTION(BlueprintCallable)
    void RegisterMotionTracker(UMotionTrackerComponent* _MotionTrackerToRegister);
    
    UFUNCTION(BlueprintCallable)
    void LockScan();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountMovingTrackedComponentByDiplomacyWithLeader(EDiplomacy Diplomacy) const;
    
    UFUNCTION(BlueprintCallable)
    void ComputeScan();
    
    UFUNCTION(BlueprintCallable)
    void ClearScan();
    
};

