#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Event_SquadStress_Float_BoolDelegate.h"
#include "SquadStress_Component.generated.h"

class AASFCharacter;
class AASFGameState_TacticalMode;
class ASquad;
class UEnnemyTrackingSystem;
class UFactionSystemic;
class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USquadStress_Component : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> SquadStressDamage_Tracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> SquadStressDamage_Bleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> SquadStressDamage_Disrupive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftClassPtr<UTinda_Effect>> SquadStressDamage_Detected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UTinda_Effect*> DetectedStressDamageEffects;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SquadStress_Float_Bool OnSquadStressEffectChange;
    
    USquadStress_Component(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateOnPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackingSystemRegistered(AASFGameState_TacticalMode* _GameState, UEnnemyTrackingSystem* _TrackingSystem);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyTrackingListChanged(UEnnemyTrackingSystem* _EnnemyTrackingSystem, AASFCharacter* _EnemyTracking);
    
    UFUNCTION(BlueprintCallable)
    void DoChecks();
    
    UFUNCTION(BlueprintCallable)
    void CheckBleepInMotionTracker();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDisruptive(bool ApplyRemove);
    
};

