#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EnumStateProvenance.h"
#include "EnumStateShifting.h"
#include "EnumStateShiftingMode.h"
#include "Event_UAIStateManager_UAIState_UAIStateDelegate.h"
#include "IsBlendingReadyDelegate.h"
#include "AIStateManager.generated.h"

class UAIActionComponent;
class UAIState;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAIStateManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIStateManager_UAIState_UAIState OnStateShiftingEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsBlendingReady IsBlendingReady_CB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnimationReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActionReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShifting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIState* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIState* NextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIState*> RollbackStateStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIActionComponent* AIActionComponent;
    
public:
    UAIStateManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    UAIState* UnstackRollbackState(UAIState* _StackState);
    
    UFUNCTION(BlueprintCallable)
    EnumStateShifting UnauthorizedShifting();
    
    UFUNCTION(BlueprintCallable)
    EnumStateShifting Shifting(UAIState* _NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(UAIState* _NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    EnumStateShifting Rollback(UAIState*& _NewState, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnShiftingEndUObject(UObject* bindedObject);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShifting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIState* GetPerceptionStateObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetPerceptionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIState* GetNextState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIState* GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceNextState();
    
    UFUNCTION(BlueprintCallable)
    void ForceEndShifting(UObject* _BindedObject);
    
    UFUNCTION(BlueprintCallable)
    void DisableForcedNextState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckAnimationAuthorization();
    
    UFUNCTION(BlueprintCallable)
    void CheckActionAuthorization();
    
public:
    UFUNCTION(BlueprintCallable)
    EnumStateShifting ChangeState(UAIState* _NewState, EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    EnumStateShifting AuthorizedShifting(UAIState* _NewState);
    
};

