#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EnumSquadStatus.h"
#include "Event_UEnnemyTrackingComponentDelegate.h"
#include "Event_UEnnemyTrackingComponent_FGameplayTagDelegate.h"
#include "EnnemyTrackingComponent.generated.h"

class AASFCharacter;
class AASFGameModeBase_TacticalMode;
class AASFGameState_TacticalMode;
class ATMEventSystem;
class UEnemyTracking_DataAsset;
class UEnnemyTrackingSystem;
class UFactionSystemic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UEnnemyTrackingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavedElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFactionSystemic* Systemic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumSquadStatus PostEncounterStatus;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UEnnemyTrackingComponent OnTrackStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UEnnemyTrackingComponent_FGameplayTag OnTrackCountDownTypeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowTrackOnMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyTracking_DataAsset* TrackingComponentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFGameState_TacticalMode* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastPositionSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnderAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetTrackRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime_Real;
    
public:
    UEnnemyTrackingComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TrackTimerCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    static void TrackLeader(bool _LeaderConstantTracking);
    
    UFUNCTION(BlueprintCallable)
    void StopTrack();
    
    UFUNCTION(BlueprintCallable)
    void StartTrack();
    
    UFUNCTION(BlueprintCallable)
    void SetFactionSystemic(UFactionSystemic* FactionSystemic);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPhaseChanged(UFactionSystemic* _Systemic, const FGameplayTag& _OldPhase, const FGameplayTag& _NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnFactionSystemicInitialized(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic);
    
    UFUNCTION(BlueprintCallable)
    void OnEventSystemSet(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTracked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpotted() const;
    
    UFUNCTION(BlueprintCallable)
    void InitTrackingComponent(UEnnemyTrackingSystem* _TrackingSystem, UEnemyTracking_DataAsset* _TrackingComponentDataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTrackingLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnemyTracking_DataAsset* GetTracking_DataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTrackElapsedTimeDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTrackElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTrackDuration() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector GetLeaderPosition();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool GetLeaderConstantTracking();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentTrackRadius();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnemyAttackStop(UEnnemyTrackingSystem* _EnnemyTrackingSystem, AASFCharacter* _EnemyTracking);
    
    UFUNCTION(BlueprintCallable)
    void EnemyAttackStart(UEnnemyTrackingSystem* _EnnemyTrackingSystem, AASFCharacter* _EnemyTracking);
    
};

