#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "AmbushSaveData.h"
#include "AmbushStateChangeDelegateDelegate.h"
#include "EAmbushState.h"
#include "SavedActorInterface.h"
#include "SpawnPoint.h"
#include "AmbushSpawnPoint.generated.h"

class AAmbushTrackerIndicator;
class ASquad;
class UAmbushDataAsset;
class UArrowComponent;
class UObject;
class USphereComponent;

UCLASS(Blueprintable)
class ASF_API AAmbushSpawnPoint : public ASpawnPoint, public ISavedActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FAmbushSaveData SavedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAmbushDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmbushState CurrentState;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: StartStateDelegates
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty StartStateDelegates./Script/ASF.AmbushSpawnPoint:StartStateDelegates'

    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: StopStateDelegates
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty StopStateDelegates./Script/ASF.AmbushSpawnPoint:StopStateDelegates'

    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionPercentage;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbushStateChangeDelegate OnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FillTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle EmptyTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextEmptyDelayAfterDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAmbushTrackerIndicator> TrackerIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAmbushTrackerIndicator* TrackerIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AmbushedAlienType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AlienAgitationTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* VisibilityCheckArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USphereComponent*> DEBUG_PerimeterComponents;
    
public:
    AAmbushSpawnPoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopNone(EAmbushState NewState);
    
    UFUNCTION(BlueprintCallable)
    void StopForceFilled(EAmbushState NewState);
    
    UFUNCTION(BlueprintCallable)
    void StopFilled(EAmbushState NewState);
    
    UFUNCTION(BlueprintCallable)
    void StopEmpty(EAmbushState NewState);
    
    UFUNCTION(BlueprintCallable)
    void StopAboutToSpawn(EAmbushState NewState);
    
    UFUNCTION(BlueprintCallable)
    void StartNone(EAmbushState OldState);
    
    UFUNCTION(BlueprintCallable)
    void StartForceFilled(EAmbushState OldState);
    
    UFUNCTION(BlueprintCallable)
    void StartFilled(EAmbushState OldState);
    
    UFUNCTION(BlueprintCallable)
    void StartEmpty(EAmbushState OldState);
    
    UFUNCTION(BlueprintCallable)
    void StartAboutToSpawn(EAmbushState OldState);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAmbushedAlien();
    
    UFUNCTION(BlueprintCallable)
    void SetState(EAmbushState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnFillTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnEmptyTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnAmbushedAlienDeferredSpawned(ASpawnPoint* SpawnPoint, UObject* SpawnedObject);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFilling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptying() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAmbushedAlienNoMoreAboutToSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAmbushedAlienAboutToSpawn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAmbushTrackerIndicator* GetTrackerIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFillRemainingDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFillElapsedDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEmptyRemainingDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEmptyElapsedDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAmbushDataAsset* GetDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAmbushState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetAmbushedAlienType() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSpawnIfFull();
    
    UFUNCTION(BlueprintCallable)
    void ForceScriptedFill(FGameplayTag AlienType);
    
    UFUNCTION(BlueprintCallable)
    void ForceFill();
    
    UFUNCTION(BlueprintCallable)
    void ForceEmpty();
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_SetDrawDebugCalculations(bool DrawDebugCalculations);
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_SetDebugZDelta(float ZDelta);
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_SetDebugMiniatureFactor(float MiniatureFactor);
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_ErasePerimeters();
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_DrawPerimeters();
    
    UFUNCTION(BlueprintCallable)
    void ComputeRangeTest(ASquad* PlayerSquad);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearAmbushedAlienType();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    bool SavedActorInterface_IsInitialized() override PURE_VIRTUAL(SavedActorInterface_IsInitialized, return false;);
    
    UFUNCTION()
    void SavedActorInterface_BindOnInitialized() override PURE_VIRTUAL(SavedActorInterface_BindOnInitialized,);
    
};

