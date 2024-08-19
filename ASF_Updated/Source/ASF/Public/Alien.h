#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ASFCharacter.h"
#include "DamageResultStruct.h"
#include "EnumAIActionStatus.h"
#include "EnumAiState.h"
#include "EnumAlienAnimPhase.h"
#include "Templates/SubclassOf.h"
#include "Alien.generated.h"

class AAIController_Alien;
class AAIGuardPath;
class AASFGameModeBase_TacticalMode;
class AActor;
class AGameStateBase;
class ASpawnPoint;
class AStasisPoint;
class ATMEventSystem;
class UAIAction;
class UAIActionComponent;
class UAIPerceptionListenerComponent;
class UAlienClassDataAsset;
class UAlienSystemic;
class UAlienTargetingComponent;
class UAttack;
class UAttackComponent;
class UFOWActorVisibilityComponent;
class UFactionSystemic;
class UMaterialInstanceDynamic;
class URoomClusterFilter;
class USkinnedMeshComponent;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API AAlien : public AASFCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlienCenterHeigth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* bHasBeenFiredAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawnPoint* EvadePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    AStasisPoint* StasisPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EnumAiState OnSpawnForcedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackingPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionListenerComponent* AIPerceptionListenerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAlienTargetingComponent* EnemyTargetingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAlienTargetingComponent> EnemyTargetingComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttackComponent* AttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIActionComponent* AIActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAlienClassDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* MobilityEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* StateEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* RotationEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URoomClusterFilter> AlienRoomGraphFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EnumAiState SavedAIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag XenoTechProjectBlueprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAiState newDelayedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoOnce;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOWActorVisibilityComponent* FOWVisibilityComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSkeletalOptim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaySpawnAcknow;
    
public:
    AAlien(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerEncounterPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TestWallRide(FVector WallRideEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnWithAnimation(bool SpawnWithAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetQueenNeedQueenPhase(bool _bNewQueenNeedQueenPhase);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaySpawnAcknow(bool bPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMIDsCpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBaseMatsCpp();
    
    UFUNCTION(BlueprintCallable)
    bool RotateDirection(FVector _Direction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWounded_Evade(AActor* _ActorWounded, const FDamageResultStruct& _Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnWounded(AActor* _ActorWounded, const FDamageResultStruct& _Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnTransitionEnded();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTindaWorldTimeInitialized(AGameStateBase* GameState, float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTargetDestroyed(AASFCharacter* killedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawningAnimStop();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawningAnimStart();
    
    UFUNCTION(BlueprintCallable)
    void OnSelfDeath(AASFCharacter* killedActor, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnSelfDamage(AActor* ActorWounded, const FDamageResultStruct& _Struct);
    
    UFUNCTION(BlueprintCallable)
    void OnScriptedActionStop(UAIActionComponent* _AIActionComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnScriptedActionStart(UAIActionComponent* _AIActionComponent, bool _ForceActionAbort, bool _ForceAnimationAbort);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNoiseEvent(UAlienSystemic* AlienSystemic, FVector _Origin, int32 GraphID);
    
    UFUNCTION(BlueprintCallable)
    void OnNewTarget(AAIController_Alien* AIController, AActor* OldTarget, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnNewState(AAIController_Alien* AIController, EnumAiState OldState, EnumAiState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnLocomotionEnable();
    
    UFUNCTION(BlueprintCallable)
    void OnLocomotionDisable();
    
    UFUNCTION(BlueprintCallable)
    void OnExecutedActionChanged(UAIActionComponent* _AIActionComponent, UAIAction* _OldAction, UAIAction* _NewAction);
    
    UFUNCTION(BlueprintCallable)
    void OnEventSystemSet(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackChanged(AASFCharacter* Character, UAttack* OldAttack, UAttack* NewAttack);
    
    UFUNCTION(BlueprintCallable)
    void OnAlienPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnActionStop(UAIActionComponent* _AIActionComponent, UAIAction* _Action, EnumAIActionStatus _AIActionStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnActionStart(UAIActionComponent* _AIActionComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool NeedSpawnAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetXenomorph_MIDs(TArray<UMaterialInstanceDynamic*>& Mids);
    
    UFUNCTION(BlueprintCallable)
    float GetStateThresholdRange(EnumAiState State, bool& thresholdFound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetSpawnXenoSample() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetMeshUseMIDs() const;
    
    UFUNCTION(BlueprintCallable)
    AAIGuardPath* GetGuardPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAlienClassDataAsset* GetAlienDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumAiState GetAiState() const;
    
    UFUNCTION(BlueprintCallable)
    bool ForceRotate(FVector _Destination);
    
    UFUNCTION(BlueprintCallable)
    void ForcePatrolPath(AAIGuardPath* PatrolPath);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ExecuteImpactAction(FGameplayTag _ImpactTag, float& _ImpactDuration, bool _ForceExecute);
    
    UFUNCTION(BlueprintCallable)
    void EnableSkeletalRender(bool _IsEnable, USkinnedMeshComponent* _SKComp);
    
    UFUNCTION(BlueprintCallable)
    void DeathOrDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ComputeNoiseEvent(FVector _Origin, int32 GraphID);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeAnimationStateFromAIState(EnumAiState OldState, EnumAiState NewState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAnimationState(EnumAlienAnimPhase newAnimState);
    
    UFUNCTION(BlueprintCallable)
    bool CanTriggerEncounterPhase();
    
};

