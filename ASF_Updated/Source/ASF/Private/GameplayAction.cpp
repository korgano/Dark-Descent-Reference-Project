#include "GameplayAction.h"

UGameplayAction::UGameplayAction() {
    this->OwnerEvent = NULL;
    this->OwnerActor = NULL;
    this->bShouldCloseMinimap = false;
    this->bCanBeRelaunchOnLoadIfNotFinished = true;
    this->bIsUsableClass = false;
    this->GameplayActionStatut = 0;
}

void UGameplayAction::StartAction() {
}

void UGameplayAction::SetGAStatus(int32 NewStatus) {
}

void UGameplayAction::SetActionLabel(const FString& NewLabel) {
}

void UGameplayAction::LaunchAction_Implementation() {
}

FString UGameplayAction::GetActionLabel() const {
    return TEXT("");
}

void UGameplayAction::FinishGameplayAction(bool bWithError) {
}

bool UGameplayAction::CheckValidityGA_Implementation() const {
    return false;
}

bool UGameplayAction::CheckValidityAcknow(UAcknow_DataAsset* Dialogue) const {
    return false;
}

bool UGameplayAction::CheckTwinValidity(const FGameplayTwinReference& TwinRef) const {
    return false;
}


