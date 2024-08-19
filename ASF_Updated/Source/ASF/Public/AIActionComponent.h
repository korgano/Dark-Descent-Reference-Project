#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EnumAIActionStatus.h"
#include "Event_OnActionReadyDelegate.h"
#include "Event_UAIActionComponentDelegate.h"
#include "Event_UAIActionComponent_AIAction_AIActionDelegate.h"
#include "Event_UAIActionComponent_AIAction_StatusDelegate.h"
#include "Event_UAIActionComponent_bool_boolDelegate.h"
#include "AIActionComponent.generated.h"

class UAIAction;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAIActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIActionComponent OnActionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIActionComponent_AIAction_Status OnActionStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIActionComponent OnAbortCalled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIActionComponent_bool_bool OnScriptedActionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIActionComponent OnScriptedActionStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_OnActionReady OnActionReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIActionComponent_AIAction_AIAction OnExecutedActionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SelectedActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIAction* SelectedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIAction* ExecutedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIAction* NextAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* NextActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScriptedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIAction*> ChainedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ChainedActionsTarget;
    
public:
    UAIActionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopScriptedAction();
    
public:
    UFUNCTION(BlueprintCallable)
    bool StopAction(EnumAIActionStatus _AIActionStatus, UAIAction* _Action);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartScriptedAction(bool _ForceActionAbort, bool _ForceAnimationAbort);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartChainedActions(TArray<UAIAction*> _ChainedActions, TArray<UObject*> _ChainedActionsTarget, bool _ScriptedAction);
    
    UFUNCTION(BlueprintCallable)
    bool StartAction();
    
    UFUNCTION(BlueprintCallable)
    UAIAction* SelectAction(UAIAction* _SelectedAction, UObject* _ActionTarget, bool _AutoExecute);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAnimationAbortReady(UObject* _AbortingPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnActionAbortReady(UObject* AIActionComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    UAIAction* LoadActionClass(const TSoftClassPtr<UAIAction>& ActionClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetSelectedActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIAction* GetSelectedAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetScriptedAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIAction* GetInCommingAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIAction* GetExecutedAction() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAIAction*> GetExecutableActionsWithTag(const TArray<UAIAction*>& _Actions, UObject* _Target, bool& _Executable, bool _FromPosition, bool _AllowAcceptanceRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAIAction*> GetActionsWithTag(FGameplayTag _ActionTag, bool _OnlyTagExact) const;
    
    UFUNCTION(BlueprintCallable)
    UAIAction* ExecuteAction(UAIAction* _ExecutedAction);
    
    UFUNCTION(BlueprintCallable)
    void ClearNotOnGoingAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearExecutedAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void CallOnActionReady();
    
    UFUNCTION(BlueprintCallable)
    void AddChainedAction(UAIAction* _ChainedAction, UObject* _ChainedActionTarget);
    
    UFUNCTION(BlueprintCallable)
    bool AbortAIAction(UAIAction* _NextAction, UObject* _NextActionTarget, bool _ForceActionAbort, bool _ForceAnimationAbort, bool _ScriptedAction);
    
};

