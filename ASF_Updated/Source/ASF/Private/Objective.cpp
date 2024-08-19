#include "Objective.h"
#include "CommonSaveLoadComponent.h"

AObjective::AObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectiveTier = EnumObjectiveTier::PRIMARY;
    this->MainObjectiveFailureConsequence = EnumMainObjectiveFailureConsequence::RETRIABLE;
    this->ObjectiveStatus = EnumObjectiveStatus::PENDING;
    this->bActivateAtStartup = true;
    this->bIsHovered = false;
    this->TacticalModeSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->bBlockRewards = false;
    this->Mission = NULL;
    this->Index = 0;
}

void AObjective::UpdateObjectiveText() {
}

bool AObjective::TryToStartSubObjective(USubObjectiveComponent* subobjective) {
    return false;
}

void AObjective::Succeed() {
}

void AObjective::SubObjectiveStarted_Implementation(USubObjectiveComponent* _SubObjective) {
}

void AObjective::StartSubObjective(USubObjectiveComponent* _SubObjective) {
}

void AObjective::StartObjective(bool _bAutoFocus) {
}

bool AObjective::ShouldAutoFocusObjective() {
    return false;
}

void AObjective::SetObjectiveStatus(EnumObjectiveStatus _NewStatus) {
}

void AObjective::SetObjectiveAshovered(bool _bIsHovered) {
}

void AObjective::SetObjectiveAsFocused(bool _bIsFocused) {
}

void AObjective::OnSubObjectiveSucceeded(USubObjectiveComponent* _SubObjective) {
}

void AObjective::OnSubObjectiveInvalidated(USubObjectiveComponent* _SubObjective) {
}

void AObjective::OnSubObjectiveFailed(USubObjectiveComponent* _SubObjective) {
}

bool AObjective::IsObjectiveCheatAreActive() {
    return false;
}

bool AObjective::IsMainObjective() const {
    return false;
}

bool AObjective::IsLocked() const {
    return false;
}

bool AObjective::IsHovered() const {
    return false;
}

bool AObjective::IsActivatedAtStartup() const {
    return false;
}

void AObjective::Invalidate() {
}

void AObjective::HandleStart_Implementation() {
}

EnumObjectiveTier AObjective::GetTier() const {
    return EnumObjectiveTier::PRIMARY;
}

TArray<USubObjectiveComponent*> AObjective::GetSubObjectiveWithStatus(EnumObjectiveStatus _Status) const {
    return TArray<USubObjectiveComponent*>();
}

USubObjectiveComponent* AObjective::GetSubObjectiveByTagName(const FString& _TagName) const {
    return NULL;
}

USubObjectiveComponent* AObjective::GetSubObjectiveByName(FName _TagName) const {
    return NULL;
}

EnumObjectiveStatus AObjective::GetStatus() const {
    return EnumObjectiveStatus::PENDING;
}

TArray<UObjectiveRewardComponent*> AObjective::GetRewardsForSubObjective(USubObjectiveComponent* _SubObjective) const {
    return TArray<UObjectiveRewardComponent*>();
}

TSoftClassPtr<UMapFeedbackDataProperties> AObjective::GetOpenDataProperties_Implementation() const {
    return NULL;
}

FString AObjective::GetObjectiveTextKey() const {
    return TEXT("");
}

FText AObjective::GetObjectiveText_Implementation() {
    return FText::GetEmpty();
}

FString AObjective::GetObjectiveContextAsString() {
    return TEXT("");
}

EnumMainObjectiveFailureConsequence AObjective::GetMainObjectiveFailureConsequence() const {
    return EnumMainObjectiveFailureConsequence::RETRIABLE;
}

bool AObjective::GetIsFocused() const {
    return false;
}

AObjective* AObjective::GetFocusedObjective() {
    return NULL;
}

void AObjective::ForceSucceed(bool _bBlockRewards) {
}

void AObjective::Fail() {
}

void AObjective::ClearFocusedObjective() {
}


