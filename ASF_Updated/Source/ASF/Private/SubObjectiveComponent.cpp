#include "SubObjectiveComponent.h"

USubObjectiveComponent::USubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bActiveAtStartup = true;
    this->bVisibleInGUI = true;
    this->bCanSave = false;
    this->bNeedSave = false;
    this->SubObjectiveStatus = EnumObjectiveStatus::PENDING;
    this->FeedbackType = EnumObjectiveFeedbackType::POINT;
    this->FeedbackCircleRadius = 500.00f;
    this->FeedbackCircleZOffset = 1.00f;
    this->MapFeedBackDataAsset = NULL;
    this->MinimapFeedback = NULL;
    this->_SubObjectiveEffect = NULL;
    this->bStartNarrativeDialoguePlayed = false;
}

void USubObjectiveComponent::UpdateSubObjectiveText() {
}

void USubObjectiveComponent::UpdateFeedbacks() {
}

void USubObjectiveComponent::StartSubObjective_Implementation() {
}

bool USubObjectiveComponent::ShouldPlayStartNarrativeDialogue_Implementation() const {
    return false;
}

void USubObjectiveComponent::SetSubObjectiveHovered_Implementation(bool _bIsFocus) {
}

void USubObjectiveComponent::SetSubObjectiveFocus_Implementation(bool _bIsFocus) {
}

void USubObjectiveComponent::SetStatus(EnumObjectiveStatus _NewStatus) {
}

void USubObjectiveComponent::SetMinimapFeedback(UMapFeedbackData_StaticObject* _MinimapFeedback) {
}

void USubObjectiveComponent::SetIsVisibleInGui(bool NewVisible) {
}

void USubObjectiveComponent::SetFeedbackType(EnumObjectiveFeedbackType NewType) {
}

void USubObjectiveComponent::RemoveFeedbacks_Implementation() {
}

void USubObjectiveComponent::OnSubLevelUnloaded(ASubLevelHandler* _SubLevelHandler, const FString& _StreamingLevel) {
}

void USubObjectiveComponent::OnSubLevelLoaded(ASubLevelHandler* _SubLevelHandler, const FString& _StreamingLevel) {
}

void USubObjectiveComponent::OnStartNarrativeDialogueEnded_Implementation(UAcknowsManagerComponent* _AcknowsManager, UAcknow_DataAsset* _LastLine, int32 _SpeakerID) {
}

void USubObjectiveComponent::OnConnectorLockStateChanged(ASubLevelHandler* Handler_, USubLevelConnectorComponent* _SubLevelConnector) {
}

void USubObjectiveComponent::OnConnectorArrived_Event(USubLevelConnectorComponent* SubLevelConnector, const FString& ConnectorName) {
}

bool USubObjectiveComponent::IsVisibleInGui() {
    return false;
}

AActor* USubObjectiveComponent::GetTargetedActor() {
    return NULL;
}

FString USubObjectiveComponent::GetSubObjectiveTextKey() {
    return TEXT("");
}

FText USubObjectiveComponent::GetSubObjectiveText_Implementation() {
    return FText::GetEmpty();
}

FString USubObjectiveComponent::GetSubObjectiveTagName() const {
    return TEXT("");
}

FString USubObjectiveComponent::GetSubObjectiveSubLevelLocation_Implementation() const {
    return TEXT("");
}

FTransform USubObjectiveComponent::GetSubObjectiveLocation_Implementation() const {
    return FTransform{};
}

EnumObjectiveStatus USubObjectiveComponent::GetStatus() const {
    return EnumObjectiveStatus::PENDING;
}

EnumObjectiveTier USubObjectiveComponent::GetParentObjectiveTier() const {
    return EnumObjectiveTier::PRIMARY;
}

FObjectiveTierColorData USubObjectiveComponent::GetObjectiveFeedbackColor() const {
    return FObjectiveTierColorData{};
}

UMapFeedbackData_StaticObject* USubObjectiveComponent::GetMinimapFeedback() const {
    return NULL;
}

FObjectiveTierMapFeedbackData USubObjectiveComponent::GetMapFeedbackData() const {
    return FObjectiveTierMapFeedbackData{};
}

EnumObjectiveFeedbackType USubObjectiveComponent::GetFeedbackType() const {
    return EnumObjectiveFeedbackType::PERIMETER;
}

float USubObjectiveComponent::GetFeedbackCircleRadius() const {
    return 0.0f;
}

FVector USubObjectiveComponent::GetFeedbackCircleOffset() const {
    return FVector{};
}

TArray<AActor*> USubObjectiveComponent::GetActorsConnectorsLeadingTo(const FString& _SubLevelDest) const {
    return TArray<AActor*>();
}

void USubObjectiveComponent::FinishSubObjective_Implementation(EnumSubObjFinishReason FinishReason) {
}

void USubObjectiveComponent::CreateFeedbacks() {
}

void USubObjectiveComponent::CreateFeedbackComponentForActor(AActor* _Target, FVector OverrideWorldLocation) {
}

void USubObjectiveComponent::CleanFeedbacks_Implementation() {
}

bool USubObjectiveComponent::CanMoveInMap_Implementation() const {
    return false;
}


void USubObjectiveComponent::AddRewardToGive(UObjectiveRewardComponent* NewReward) {
}

void USubObjectiveComponent::ActivateFeedbacks_Implementation() {
}


