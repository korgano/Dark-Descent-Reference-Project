#include "AmbushSpawnPoint.h"

AAmbushSpawnPoint::AAmbushSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlienShouldOffsetSpawnPosition = false;
    this->DataAsset = NULL;
    this->CurrentState = EAmbushState::NONE;
    this->DetectionPercentage = 0.00f;
    this->NextEmptyDelayAfterDetection = 0.00f;
    this->TrackerIndicator = NULL;
    this->VisibilityCheckArrowComponent = NULL;
}

void AAmbushSpawnPoint::StopNone(EAmbushState NewState) {
}

void AAmbushSpawnPoint::StopForceFilled(EAmbushState NewState) {
}

void AAmbushSpawnPoint::StopFilled(EAmbushState NewState) {
}

void AAmbushSpawnPoint::StopEmpty(EAmbushState NewState) {
}

void AAmbushSpawnPoint::StopAboutToSpawn(EAmbushState NewState) {
}

void AAmbushSpawnPoint::StartNone(EAmbushState OldState) {
}

void AAmbushSpawnPoint::StartForceFilled(EAmbushState OldState) {
}

void AAmbushSpawnPoint::StartFilled(EAmbushState OldState) {
}

void AAmbushSpawnPoint::StartEmpty(EAmbushState OldState) {
}

void AAmbushSpawnPoint::StartAboutToSpawn(EAmbushState OldState) {
}

void AAmbushSpawnPoint::SpawnAmbushedAlien() {
}

void AAmbushSpawnPoint::SetState(EAmbushState NewState) {
}

void AAmbushSpawnPoint::OnFillTimerExpired() {
}

void AAmbushSpawnPoint::OnEmptyTimerExpired() {
}

void AAmbushSpawnPoint::OnAmbushedAlienDeferredSpawned(ASpawnPoint* SpawnPoint, UObject* SpawnedObject) {
}

bool AAmbushSpawnPoint::IsFull() const {
    return false;
}

bool AAmbushSpawnPoint::IsFilling() const {
    return false;
}

bool AAmbushSpawnPoint::IsEmptying() const {
    return false;
}

void AAmbushSpawnPoint::HandleAmbushedAlienNoMoreAboutToSpawn_Implementation() {
}

void AAmbushSpawnPoint::HandleAmbushedAlienAboutToSpawn_Implementation() {
}

AAmbushTrackerIndicator* AAmbushSpawnPoint::GetTrackerIndicator() const {
    return NULL;
}

float AAmbushSpawnPoint::GetFillRemainingDelay() const {
    return 0.0f;
}

float AAmbushSpawnPoint::GetFillElapsedDelay() const {
    return 0.0f;
}

float AAmbushSpawnPoint::GetEmptyRemainingDelay() const {
    return 0.0f;
}

float AAmbushSpawnPoint::GetEmptyElapsedDelay() const {
    return 0.0f;
}

UAmbushDataAsset* AAmbushSpawnPoint::GetDataAsset() const {
    return NULL;
}

EAmbushState AAmbushSpawnPoint::GetCurrentState() const {
    return EAmbushState::NONE;
}

FGameplayTag AAmbushSpawnPoint::GetAmbushedAlienType() const {
    return FGameplayTag{};
}

void AAmbushSpawnPoint::ForceSpawnIfFull() {
}

void AAmbushSpawnPoint::ForceScriptedFill(FGameplayTag AlienType) {
}

void AAmbushSpawnPoint::ForceFill() {
}

void AAmbushSpawnPoint::ForceEmpty() {
}

void AAmbushSpawnPoint::DEBUG_SetDrawDebugCalculations(bool DrawDebugCalculations) {
}

void AAmbushSpawnPoint::DEBUG_SetDebugZDelta(float ZDelta) {
}

void AAmbushSpawnPoint::DEBUG_SetDebugMiniatureFactor(float MiniatureFactor) {
}

void AAmbushSpawnPoint::DEBUG_ErasePerimeters() {
}

void AAmbushSpawnPoint::DEBUG_DrawPerimeters() {
}

void AAmbushSpawnPoint::ComputeRangeTest(ASquad* PlayerSquad) {
}

void AAmbushSpawnPoint::ClearAmbushedAlienType() {
}


