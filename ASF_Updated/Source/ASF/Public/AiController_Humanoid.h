#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ASFCharacterAIController.h"
#include "EnumAIActionStatus.h"
#include "EnumAiEnemyMarineState.h"
#include "EnumStateProvenance.h"
#include "EnumStateShiftingMode.h"
#include "Event_AIMarine_StateChangedDelegate.h"
#include "Event_On_Blending_ReadyDelegate.h"
#include "AiController_Humanoid.generated.h"

class AAIController_Squad;
class AActor;
class AHumanoidTactical;
class ASquad;
class UAIAction;
class UAIActionComponent;
class UAIState;
class UAIStateManager;
class UPOITargetingComponent;
class USoftLogger;

UCLASS(Blueprintable)
class ASF_API AAiController_Humanoid : public AASFCharacterAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* HumanoidTactical;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AIMarine_StateChanged OnAIMarineStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIStateManager* AIStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoftLogger* SoftLogger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumAiEnemyMarineState, UAIState*> StateEnumToClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_On_Blending_Ready OnIsReady_StateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAiEnemyMarineState SquadMarineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WeaponCanFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTarget;
    
public:
    AAiController_Humanoid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RestorePreviousState(FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResolveState();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponDetectionChanged(UPOITargetingComponent* _EnnemyTargetingComponent, AActor* _SpotedEnemy);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetChanged(UPOITargetingComponent* _EnnemyTargetingComponent, AActor* _OldTarget, AActor* _NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnStateShiftingEnded(UAIStateManager* _AIStateManager, UAIState* _CurrentState, UAIState* _OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadStateUpdate(AAIController_Squad* AIController_Squad, EnumAiEnemyMarineState SquadState);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadInit(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnScriptedActionStop(UAIActionComponent* _AIActionComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnScriptedActionStart(UAIActionComponent* _AIActionComponent, bool _ForceActionAbort, bool _ForceAnimationAbort);
    
    UFUNCTION(BlueprintCallable)
    void OnExecutedActionChanged(UAIActionComponent* _AIActionComponent, UAIAction* _OldAction, UAIAction* _NewAction);
    
    UFUNCTION(BlueprintCallable)
    void OnActionStop(UAIAction* Action, EnumAIActionStatus _AIActionStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnActionStart(UAIActionComponent* _AIActionComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitMarine(AHumanoidTactical* _Marine);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIState* GetStateClass(EnumAiEnemyMarineState _State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumAiEnemyMarineState GetSquadMarineState() const;
    
    UFUNCTION(BlueprintCallable)
    EnumAiEnemyMarineState GetMarineState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeStateInternal(EnumAiEnemyMarineState _OldState, EnumAiEnemyMarineState _NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ChangeMarineState(EnumAiEnemyMarineState NewState, EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode);
    
};

