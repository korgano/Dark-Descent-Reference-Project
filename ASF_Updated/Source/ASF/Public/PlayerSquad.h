#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "TagChangedDynamicDelegateDelegate.h"
#include "Event_SquadDelegate.h"
#include "Event_Squad_IntDelegate.h"
#include "PlayerNoiseEmissionDelegateDelegate.h"
#include "Squad.h"
#include "XpGain.h"
#include "PlayerSquad.generated.h"

class AASFGameState_TacticalMode;
class AActor;
class AHumanoid;
class AMission;
class APlayerSquad;
class AWeapon;
class UAction;
class UActivity;
class UHumanoidActionManager;
class UMotionTrackerState;
class UObject;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API APlayerSquad : public ASquad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMotionTrackerState* MotionTrackerState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerNoiseEmissionDelegate OnPlayerEmittedNoise;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad OnInactivityTimerTriggered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactivityTimerDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTagChangedDynamicDelegate UndercoverDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTagChangedDynamicDelegate UndercoverCrouchDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnderCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnemyCloseState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PerceptionEnemyCloseTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTinda_Effect*> CantCrouchEffects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> CantCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerceptionEnemyCloseUpdateRate;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_Int OnXPGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FXpGain> XpGained;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ObjectiveCompletedCount;
    
public:
    APlayerSquad(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartInactivityTimer();
    
    UFUNCTION(BlueprintCallable)
    void ResetInactivityTimer();
    
    UFUNCTION(BlueprintCallable)
    void PerceptionEnemyCloseSwitch(bool bActivate);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePerceptionEnemyClose();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberWeaponFired(AHumanoid* _Character, AWeapon* _Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberActivityEnded(UActivity* _Activity);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberActivityAdded(UActivity* _Activity);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberActionsCleared(UHumanoidActionManager* _ActionManager);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberActionRemoved(UHumanoidActionManager* _ActionManager, UAction* _Action);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberActionAdded(UHumanoidActionManager* _ActionManager, UAction* _Action);
    
    UFUNCTION(BlueprintCallable)
    void OnSkillFeatureUnlocked(FGameplayTag _SkillTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerMemberUndercoverCrouch(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMemberUndercoverChanged(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInactivityTimerEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetXPGained();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectiveCompletedCount() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetDynamicSkillFromMission(AASFGameState_TacticalMode* GameState, AMission* Mission);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastNoiseEmission(UObject* WorldContextObject, APlayerSquad* PlayerSquad, AActor* NoiseInstigator);
    
    UFUNCTION(BlueprintCallable)
    void AddToXpGained(int32 _XpGained, FGameplayTag _XpType, const FString& _Name);
    
    UFUNCTION(BlueprintCallable)
    void AddToObjectiveCompletedCount();
    
    UFUNCTION(BlueprintCallable)
    void AddCommandPoint(float _Amount);
    
};

