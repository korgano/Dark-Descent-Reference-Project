#include "FactionSystemic.h"

UFactionSystemic::UFactionSystemic() {
    this->EventSystem = NULL;
    this->LevelDataAsset = NULL;
    this->bIsInitialized = false;
    this->bIsActivated = false;
    this->SystemicDataAsset = NULL;
    this->CurrentAggressiveness = -1;
    this->MaximumAggressiveness = 10;
    this->AggressivenessTimerStartTime = 0.00f;
    this->InternalPlayerSquad = NULL;
    this->InternalGameState = NULL;
}

void UFactionSystemic::UnpauseAggressivenessIncrementation() {
}

void UFactionSystemic::StopAggressivenessIncrementation() {
}

void UFactionSystemic::StartTransition_(const FGameplayTag& PreviousPhase) {
}

void UFactionSystemic::StartShelter_Trapped(const FGameplayTag& PreviousPhase) {
}

void UFactionSystemic::StartShelter_Tracked(const FGameplayTag& PreviousPhase) {
}

void UFactionSystemic::StartShelter_Spotted(const FGameplayTag& PreviousPhase) {
}

void UFactionSystemic::StartShelter_Defense(const FGameplayTag& PreviousPhase) {
}

void UFactionSystemic::StartShelter_Covert(const FGameplayTag& PreviousPhase) {
}

void UFactionSystemic::StartRest_(const FGameplayTag& PreviousPhase) {
}

void UFactionSystemic::StartEncounter_Tracked(const FGameplayTag& PreviousPhase) {
}

void UFactionSystemic::StartEncounter_Spotted(const FGameplayTag& PreviousPhase) {
}

void UFactionSystemic::StartEncounter_Defense(const FGameplayTag& PreviousPhase) {
}

void UFactionSystemic::StartEncounter_Covert(const FGameplayTag& PreviousPhase) {
}

void UFactionSystemic::StartAggressivenessIncrementation(bool _bRestartIfRunning, bool _bStartSpawnTimers) {
}

void UFactionSystemic::SpawnOnPointWithBudget_Implementation(ASpawnPoint* SpawnPoint, int32 Budget) {
}

void UFactionSystemic::SetSquadStatus(EnumSquadStatus NewStatus) {
}

void UFactionSystemic::SetPredeterminedSpawnPoint(ASpawnPoint* SpawnPoint) {
}

void UFactionSystemic::SetPhase(const FGameplayTag& _NewPhase) {
}

void UFactionSystemic::SetAggressiveness(int32 _NewAggressiveness, const FString& _MovementReason) {
}

void UFactionSystemic::SafelyDisableDefense() {
}

void UFactionSystemic::PauseAggressivenessIncrementation() {
}

void UFactionSystemic::OnSpawnTimerExpired(const FSpawnWaveKeyFrame& SpawnWave) {
}

void UFactionSystemic::OnSpawnPointUnregisteredFromEventSystem(ATMEventSystem* InEventSystem, ASpawnPoint* SpawnPoint) {
}

void UFactionSystemic::OnSpawnPointRegisteredOnEventSystem(ATMEventSystem* InEventSystem, ASpawnPoint* SpawnPoint) {
}

void UFactionSystemic::OnSpawnLockChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UFactionSystemic::OnPhaseChanged_Internal_Implementation(const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}

void UFactionSystemic::OnFoeDeferredSpawned_Implementation(ASpawnPoint* SpawnPoint, UObject* FoeObject) {
}

void UFactionSystemic::OnEmptyAmbushLockChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UFactionSystemic::OnAmbushSpawnPointUnregisteredFromEventSystem(ATMEventSystem* InEventSystem, AAmbushSpawnPoint* AmbushSpawnPoint) {
}

void UFactionSystemic::OnAmbushSpawnPointRegisteredOnEventSystem(ATMEventSystem* InEventSystem, AAmbushSpawnPoint* AmbushSpawnPoint) {
}

void UFactionSystemic::OnAmbushLockChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UFactionSystemic::OnAggressivenessTimerExpired() {
}

void UFactionSystemic::OnAggressivenessLockChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

bool UFactionSystemic::IsSpawnLocked() const {
    return false;
}

bool UFactionSystemic::IsInitialized() const {
    return false;
}

bool UFactionSystemic::IsAmbushLocked() const {
    return false;
}

bool UFactionSystemic::IsAggressivenessLocked() const {
    return false;
}

bool UFactionSystemic::IsActivated() const {
    return false;
}

bool UFactionSystemic::Initialize_Implementation() {
    return false;
}

void UFactionSystemic::IncreaseAggressiveness(int32 _IncreaseAmount, const FString& _MovementReason) {
}

void UFactionSystemic::HandleSpawnLockStateChanged_Implementation(bool IsLocked) {
}

void UFactionSystemic::HandleDeactivation_Implementation() {
}

void UFactionSystemic::HandleAggressivenessChanged_Implementation(int32 OldAggressiveness) {
}

void UFactionSystemic::HandleActivation_Implementation() {
}

FVector2D UFactionSystemic::GetWavesNumberBounds_Implementation(int32 SpawnPool) const {
    return FVector2D{};
}

int32 UFactionSystemic::GetTimeFrameSpawnPool_Implementation() const {
    return 0;
}

USystemicDataAsset* UFactionSystemic::GetSystemicDataAsset() const {
    return NULL;
}

FSystemicData UFactionSystemic::GetSystemicData_Internal() {
    return FSystemicData{};
}

FSystemicData UFactionSystemic::GetSystemicData() const {
    return FSystemicData{};
}

EnumSquadStatus UFactionSystemic::GetSquadStatusForPhase(const FGameplayTag& PhaseTag) {
    return EnumSquadStatus::SPOTTED;
}

TArray<FSpawnWaveKeyFrame> UFactionSystemic::GetSpawnWaves() const {
    return TArray<FSpawnWaveKeyFrame>();
}

TArray<ASpawnPoint*> UFactionSystemic::GetSpawnPointsOfType(const FGameplayTagContainer& SpawnType) const {
    return TArray<ASpawnPoint*>();
}

TArray<ASpawnPoint*> UFactionSystemic::GetSpawnPoints() const {
    return TArray<ASpawnPoint*>();
}

float UFactionSystemic::GetSavedElapsedTrackTime() const {
    return 0.0f;
}

ASpawnPoint* UFactionSystemic::GetPredeterminedSpawnPoint() const {
    return NULL;
}

int32 UFactionSystemic::GetMaximumAggressiveness() const {
    return 0;
}

UEnnemyTrackingComponent* UFactionSystemic::GetLinkedTrackingComponent() const {
    return NULL;
}

ULevelPrimaryDataAsset* UFactionSystemic::GetLevelDataAsset() const {
    return NULL;
}

void UFactionSystemic::GetFoeGroupClassesWithBudget_Implementation(int32 _Budget, TArray<TSoftClassPtr<APawn>>& OutFoeGroupClasses) {
}

FGameplayTag UFactionSystemic::GetFaction() const {
    return FGameplayTag{};
}

ATMEventSystem* UFactionSystemic::GetEventSystem() const {
    return NULL;
}

USubLevelPrimaryDataAsset* UFactionSystemic::GetCurrentSubLevelDataAsset() const {
    return NULL;
}

EnumSquadStatus UFactionSystemic::GetCurrentSquadStatus() const {
    return EnumSquadStatus::SPOTTED;
}

FGameplayTag UFactionSystemic::GetCurrentPhase() const {
    return FGameplayTag{};
}

FAggressivenessParams UFactionSystemic::GetCurrentAggressivenessParams() const {
    return FAggressivenessParams{};
}

int32 UFactionSystemic::GetCurrentAggressiveness() const {
    return 0;
}

TArray<AAmbushSpawnPoint*> UFactionSystemic::GetAmbushSpawnPoints() const {
    return TArray<AAmbushSpawnPoint*>();
}

float UFactionSystemic::GetAggressivenessTimerPercent(bool ZeroIfPaused) {
    return 0.0f;
}

FTimerHandle UFactionSystemic::GetAggressivenessTimerHandle() const {
    return FTimerHandle{};
}

float UFactionSystemic::GetAggressivenessIncrementationTotalDelay() const {
    return 0.0f;
}

void UFactionSystemic::EndTransition_(const FGameplayTag& IncomingPhase) {
}

void UFactionSystemic::EndShelter_Trapped(const FGameplayTag& IncomingPhase) {
}

void UFactionSystemic::EndShelter_Tracked(const FGameplayTag& IncomingPhase) {
}

void UFactionSystemic::EndShelter_Spotted(const FGameplayTag& IncomingPhase) {
}

void UFactionSystemic::EndShelter_Defense(const FGameplayTag& IncomingPhase) {
}

void UFactionSystemic::EndShelter_Covert(const FGameplayTag& IncomingPhase) {
}

void UFactionSystemic::EndRest_(const FGameplayTag& IncomingPhase) {
}

void UFactionSystemic::EndEncounter_Tracked(const FGameplayTag& IncomingPhase) {
}

void UFactionSystemic::EndEncounter_Spotted(const FGameplayTag& IncomingPhase) {
}

void UFactionSystemic::EndEncounter_Defense(const FGameplayTag& IncomingPhase) {
}

void UFactionSystemic::EndEncounter_Covert(const FGameplayTag& IncomingPhase) {
}

void UFactionSystemic::DecreaseAggressiveness(int32 _DecreaseAmount, const FString& _MovementReason) {
}

void UFactionSystemic::ComputeAmbushProximityCheck() {
}

void UFactionSystemic::ChangeSquadStatusForPhase(FGameplayTag& Phase, EnumSquadStatus NewStatus) {
}

void UFactionSystemic::AddDeltaToAggressivenessTimer(float DeltaTime) {
}


