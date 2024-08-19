#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ASFCharacter.h"
#include "DamageResultStruct.h"
#include "Event_DeployableMotionTrackerDelegate.h"
#include "DeployableMotionTracker.generated.h"

class UCharacterDataAsset;
class UCombatComponent;
class UDeployMotionTracker_DataAsset;

UCLASS(Blueprintable)
class ASF_API ADeployableMotionTracker : public AASFCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasActivatedDecoy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsDecoyActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SavedDecoyRemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeployMotionTracker_DataAsset* TrackerDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DecoyTimerHandle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponent* CombatComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_DeployableMotionTracker OnDecoyAvailabilityChanged;
    
    ADeployableMotionTracker(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnDMTDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecoyActivated() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDecoyDeactivation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDecoyActivation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDecoyRemainingTime() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Explode();
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyDMTActor();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateDecoy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateDecoy() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateDecoy();
    
};

