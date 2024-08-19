#include "HumanoidActionManager.h"
#include "Templates/SubclassOf.h"

UHumanoidActionManager::UHumanoidActionManager() {
    this->HumanoidCharacter = NULL;
    this->CurrentAction = NULL;
    this->bIsDisable = false;
    this->LastActionClassSaved = NULL;
}

void UHumanoidActionManager::UpdateLastMoveSaved(FDataMove& _DataMove, TSubclassOf<UAction> _actionSaved) {
}

void UHumanoidActionManager::UpdateCurrentAction() {
}

void UHumanoidActionManager::TryResumeSquadOrder(AHumanoidTactical* _HumanoidTactical) {
}

void UHumanoidActionManager::SetIsDisable(bool _bIsDisable) {
}

void UHumanoidActionManager::SetHumanoidCharacter(AASFCharacter* _Character) {
}

void UHumanoidActionManager::SetCurrentAction(UAction* NewAction) {
}

void UHumanoidActionManager::RemoveAction(int32 ActionIndex) {
}

void UHumanoidActionManager::OnActionEnded(UAction* Action, EnumActionStatus ActionStatus) {
}

bool UHumanoidActionManager::HasAnyActionOfTypes(const TArray<EnumActionType>& _Types) const {
    return false;
}

bool UHumanoidActionManager::HasAnyActionOfType(EnumActionType _Type) const {
    return false;
}

bool UHumanoidActionManager::HasAnyAction() const {
    return false;
}

FVector UHumanoidActionManager::GetLastActionEndingPosition(bool _bWithoutSimpleMove) const {
    return FVector{};
}

UAction* UHumanoidActionManager::GetCurrentAction() const {
    return NULL;
}

TArray<UAction*> UHumanoidActionManager::GetAllActions() {
    return TArray<UAction*>();
}

TArray<UAction*> UHumanoidActionManager::GetActionsOfType(EnumActionType _Type) {
    return TArray<UAction*>();
}

TArray<UAction*> UHumanoidActionManager::GetActionQueue() const {
    return TArray<UAction*>();
}

void UHumanoidActionManager::ClearNextActions(EnumActionStatus _Reason) {
}

void UHumanoidActionManager::ClearActionsOfTypes(const TArray<EnumActionType>& _Types, EnumActionStatus _Reason) {
}

bool UHumanoidActionManager::ClearActions(EnumActionStatus _Reason, const TArray<EnumActionType>& _ActionTypeToIgnore) {
    return false;
}

void UHumanoidActionManager::CancelActionInteraction(UInteractiveComponent* Interaction) {
}

UAction* UHumanoidActionManager::AddAction(UAction* _Action) {
    return NULL;
}


