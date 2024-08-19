#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ASFCharacterAIController.h"
#include "EnumAiMobilityState.h"
#include "EnumAiState.h"
#include "EnumStateProvenance.h"
#include "EnumStateShiftingMode.h"
#include "Event_AIAlien_MovingStateChangedDelegate.h"
#include "Event_AIAlien_StateChangedDelegate.h"
#include "Event_AIAlien_TargetChangedDelegate.h"
#include "AIController_Alien.generated.h"

class AActor;
class AAlien;
class UAIState;
class UAIStateManager;
class UObject;
class UPOITargetingComponent;
class USoftLogger;

UCLASS(Blueprintable)
class ASF_API AAIController_Alien : public AASFCharacterAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AIAlien_StateChanged OnAIAlienStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AIAlien_StateChanged OnAIAlienStateStartShifting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AIAlien_MovingStateChanged OnAIAlienMovingStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AIAlien_TargetChanged OnAIAlienTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIStateManager* AIStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIStateManager* AIReachStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIStateManager* AIPatrolStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoftLogger* SoftLogger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumAiState, UAIState*> StateEnumToClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAlien* Alien;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReachAcceptanceRadius;
    
public:
    AAIController_Alien(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetStateFromPhase(bool& AlienReconisePhase, EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateFromAssociatedDefaultState(EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetReachAcceptanceRadius(float _AcceptanceRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackAcceptanceRadius(float _AcceptanceRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetAlienTarget(UObject* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    bool RestorePreviousState(FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetChange(UPOITargetingComponent* _EnnemyTargetingComponent, AActor* _OldTarget, AActor* _NewTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStateShiftingEneded(UAIStateManager* _AIStateManager, UAIState* _CurrentState, UAIState* _OldState);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitAlien(AAlien* _Alien);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIState* GetStateClass(EnumAiState _State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumAiState GetPreviousState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumAiState GetDefaultState(EnumAiState State) const;
    
    UFUNCTION(BlueprintCallable)
    UObject* GetAlienTarget();
    
    UFUNCTION(BlueprintCallable)
    EnumAiState GetAlienState();
    
    UFUNCTION(BlueprintCallable)
    bool FindAndSetDefaultState(EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode, bool CanKeepCurrentState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeStateInternal(EnumAiState _OldState, EnumAiState _NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ChangeAlienState(EnumAiState NewState, EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeAlienMobilityState(EnumAiMobilityState NewState);
    
    UFUNCTION(BlueprintCallable)
    void CancelCurrentGameplayTask();
    
};

