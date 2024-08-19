#include "AIActionComponent.h"

UAIActionComponent::UAIActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectedActionTarget = NULL;
    this->SelectedAction = NULL;
    this->ExecutedAction = NULL;
    this->NextAction = NULL;
    this->NextActionTarget = NULL;
    this->ScriptedAction = false;
}

void UAIActionComponent::StopScriptedAction() {
}

bool UAIActionComponent::StopAction(EnumAIActionStatus _AIActionStatus, UAIAction* _Action) {
    return false;
}

void UAIActionComponent::StartScriptedAction(bool _ForceActionAbort, bool _ForceAnimationAbort) {
}

void UAIActionComponent::StartChainedActions(TArray<UAIAction*> _ChainedActions, TArray<UObject*> _ChainedActionsTarget, bool _ScriptedAction) {
}

bool UAIActionComponent::StartAction() {
    return false;
}

UAIAction* UAIActionComponent::SelectAction(UAIAction* _SelectedAction, UObject* _ActionTarget, bool _AutoExecute) {
    return NULL;
}

void UAIActionComponent::OnAnimationAbortReady(UObject* _AbortingPawn) {
}

void UAIActionComponent::OnActionAbortReady(UObject* AIActionComponent) {
}

UAIAction* UAIActionComponent::LoadActionClass(const TSoftClassPtr<UAIAction>& ActionClass) {
    return NULL;
}

UObject* UAIActionComponent::GetSelectedActionTarget() const {
    return NULL;
}

UAIAction* UAIActionComponent::GetSelectedAction() const {
    return NULL;
}

bool UAIActionComponent::GetScriptedAction() const {
    return false;
}

UAIAction* UAIActionComponent::GetInCommingAction() const {
    return NULL;
}

UAIAction* UAIActionComponent::GetExecutedAction() const {
    return NULL;
}

TArray<UAIAction*> UAIActionComponent::GetExecutableActionsWithTag(const TArray<UAIAction*>& _Actions, UObject* _Target, bool& _Executable, bool _FromPosition, bool _AllowAcceptanceRadius) {
    return TArray<UAIAction*>();
}

TArray<UAIAction*> UAIActionComponent::GetActionsWithTag(FGameplayTag _ActionTag, bool _OnlyTagExact) const {
    return TArray<UAIAction*>();
}

UAIAction* UAIActionComponent::ExecuteAction(UAIAction* _ExecutedAction) {
    return NULL;
}

void UAIActionComponent::ClearNotOnGoingAction() {
}

void UAIActionComponent::ClearExecutedAction() {
}

void UAIActionComponent::CallOnActionReady() {
}

void UAIActionComponent::AddChainedAction(UAIAction* _ChainedAction, UObject* _ChainedActionTarget) {
}

bool UAIActionComponent::AbortAIAction(UAIAction* _NextAction, UObject* _NextActionTarget, bool _ForceActionAbort, bool _ForceAnimationAbort, bool _ScriptedAction) {
    return false;
}


