#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ASFAIController.h"
#include "EnumAiEnemyMarineState.h"
#include "EnumSquadType.h"
#include "Event_Spawner_SquadStateDelegate.h"
#include "AIController_Squad.generated.h"

class AASFGameModeBase_TacticalMode;
class AActor;
class AHumanoidMarine;
class ASquad;
class ATMEventSystem;
class UFactionSystemic;
class UPOITargetingComponent;
class UTrackingSystemComponent;

UCLASS(Blueprintable)
class ASF_API AAIController_Squad : public AASFAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Spawner_SquadState OnSquadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAiEnemyMarineState SquadState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle NoiseTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PerceptiedThreatLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumSquadType SquadType;
    
public:
    AAIController_Squad(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SoundThreatDissipated();
    
public:
    UFUNCTION(BlueprintCallable)
    void SoundHeard(FVector _SoundLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBehaviorState(EnumAiEnemyMarineState EnumAiEnemyMarineState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTrackingSystemUpdated(UTrackingSystemComponent* TrackingSystemComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetChanged(UPOITargetingComponent* POITargetingComponent, AActor* _OldTarget, AActor* _NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberRemoved(ASquad* NewSquad, AHumanoidMarine* Member);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberAdded(ASquad* NewSquad, AHumanoidMarine* Member);
    
    UFUNCTION(BlueprintCallable)
    void OnPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptiedEnemiesUpdated(ASquad* _Squad, bool _EnemyPerceptied);
    
    UFUNCTION(BlueprintCallable)
    void OnEventSystemSet(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumSquadType GetSquadType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPerceptiedThreatLocation();
    
};

