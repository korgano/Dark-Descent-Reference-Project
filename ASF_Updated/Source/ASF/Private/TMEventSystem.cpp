#include "TMEventSystem.h"
#include "Tinda_EffectHandlerComponent.h"
#include "CommonSaveLoadComponent.h"
#include "Templates/SubclassOf.h"

ATMEventSystem::ATMEventSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->LevelDataAsset = NULL;
    this->CreateDefaultDataAsset = false;
    this->CommonSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->HasRested = false;
    this->bIsResting = false;
    this->bIsInShelter = false;
    this->RestDataAsset = NULL;
    this->HiveSize = -1;
    this->MinimumHiveSize = 1;
    this->MaximumHiveSize = 0;
    this->SpawnPointDangerDataAsset = NULL;
    this->SpawnPointReconstructed = false;
    this->SpawnPointReconstructing = false;
    this->bIsCurrentReconstructionValide = true;
    this->NarrativeFreezeEffect = NULL;
}

void ATMEventSystem::UnregisterSpawnPoint(ASpawnPoint* _SpawnPoint) {
}

bool ATMEventSystem::TryForceRestPhase(bool ForceSucceedAmbush) {
    return false;
}

void ATMEventSystem::TriggerTMEvent(UTMEvent* _Event) {
}

void ATMEventSystem::StartTransition() {
}

void ATMEventSystem::StartRest(bool TryAmbush, bool ForceSucceedAmbush) {
}

void ATMEventSystem::SetHiveSize(int32 _NewHiveSize) {
}

void ATMEventSystem::ResolveAndBroadcastShelterType(bool bForceBroadcast) {
}

void ATMEventSystem::RegisterSpawnPoint(ASpawnPoint* _SpawnPoint) {
}

void ATMEventSystem::ProcessTMEvent(UTMEvent* _Event) {
}

void ATMEventSystem::OnSystemicPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}

void ATMEventSystem::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void ATMEventSystem::OnSubLevelHandlerSetOnGameMode(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

void ATMEventSystem::OnShelterLockChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void ATMEventSystem::OnShelterEnabled() {
}

void ATMEventSystem::OnShelterDisabled() {
}

void ATMEventSystem::OnRoomClusterRebuilt(ARoomCluster* RoomCluster) {
}

void ATMEventSystem::OnNavigationReconstructed() {
}

void ATMEventSystem::OnBlockTimeDilatation(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded) {
}

void ATMEventSystem::NarrativeFreezeStatusChanged_Implementation(bool IsActive, UNarrativeFreezeGameplayAction* NarrativeFreezeGA) {
}

bool ATMEventSystem::IsShelterLocked() const {
    return false;
}

bool ATMEventSystem::IsResting() const {
    return false;
}

bool ATMEventSystem::IsInShelter() const {
    return false;
}

bool ATMEventSystem::IsInitialized() const {
    return false;
}

bool ATMEventSystem::IsAnyMarineOnCreep() {
    return false;
}

void ATMEventSystem::InitializeTacticalMode_Implementation() {
}

bool ATMEventSystem::HasAnySystemicOnPhase(const FGameplayTagContainer& PhaseFilter) const {
    return false;
}

bool ATMEventSystem::HasAllSystemicsOnPhase(const FGameplayTagContainer& PhaseFilter) const {
    return false;
}

void ATMEventSystem::HandleShelterEnabled() {
}

void ATMEventSystem::HandleShelterDisabled() {
}

UWeylandSystemic* ATMEventSystem::GetWeylandSystemicWithoutContext(UObject* WorldContextObject) {
    return NULL;
}

UWeylandSystemic* ATMEventSystem::GetWeylandSystemic() const {
    return NULL;
}

UFactionSystemic* ATMEventSystem::GetSystemicForFactionWithoutContext(UObject* WorldContextObject, const FGameplayTag& Faction) {
    return NULL;
}

UFactionSystemic* ATMEventSystem::GetSystemicForFaction(const FGameplayTag& Faction) const {
    return NULL;
}

TArray<ASpawnPoint*> ATMEventSystem::GetSpawnPoints() {
    return TArray<ASpawnPoint*>();
}

USpawnPointDanger_DataAsset* ATMEventSystem::GetSpawnPointDangerDataAsset() const {
    return NULL;
}

TArray<ASpawnPoint*> ATMEventSystem::GetNonSystemicSpawnPoints() {
    return TArray<ASpawnPoint*>();
}

TArray<AAmbushSpawnPoint*> ATMEventSystem::GetNonSystemicAmbushPoints() {
    return TArray<AAmbushSpawnPoint*>();
}

ULevelPrimaryDataAsset* ATMEventSystem::GetLevelDataAsset() const {
    return NULL;
}

int32 ATMEventSystem::GetHiveSize() const {
    return 0;
}

TArray<UFactionSystemic*> ATMEventSystem::GetFactionSystemics() const {
    return TArray<UFactionSystemic*>();
}

ATMEventSystem* ATMEventSystem::GetEventSystemWithoutContext(UObject* WorldContextObject) {
    return NULL;
}

UTinda_EffectHandlerComponent* ATMEventSystem::GetEffectHandlerComponent() const {
    return NULL;
}

FDifficultyParams ATMEventSystem::GetDifficultyParams() const {
    return FDifficultyParams{};
}

UDarwinSystemic* ATMEventSystem::GetDarwinSystemicWithoutContext(UObject* WorldContextObject) {
    return NULL;
}

UDarwinSystemic* ATMEventSystem::GetDarwinSystemic() const {
    return NULL;
}

USubLevelPrimaryDataAsset* ATMEventSystem::GetCurrentSubLevelDataAsset() const {
    return NULL;
}

FHiveSizeParams ATMEventSystem::GetCurrentHiveSizeParams() const {
    return FHiveSizeParams{};
}

AASFGameState_TacticalMode* ATMEventSystem::GetASFGameState() const {
    return NULL;
}

AASFGameModeBase_TacticalMode* ATMEventSystem::GetASFGameMode() const {
    return NULL;
}

TArray<AAmbushSpawnPoint*> ATMEventSystem::GetAmbushSpawnPoints() {
    return TArray<AAmbushSpawnPoint*>();
}

TArray<ASpawnPoint*> ATMEventSystem::GetAllSpawnPoints(bool IncludeNonSystemicOnes) {
    return TArray<ASpawnPoint*>();
}

TArray<ASpawnPoint*> ATMEventSystem::GetAllAvailableSpawnPoints() {
    return TArray<ASpawnPoint*>();
}

UAlienSystemic* ATMEventSystem::GetAlienSystemicWithoutContext(UObject* WorldContextObject) {
    return NULL;
}

UAlienSystemic* ATMEventSystem::GetAlienSystemic() const {
    return NULL;
}

void ATMEventSystem::GetActivatedFactionSystemics(TArray<UFactionSystemic*>& OutActivatedSystemics) const {
}

bool ATMEventSystem::ForceProcessTMEventWithTag(FGameplayTag _EventTag) {
    return false;
}

bool ATMEventSystem::ForceProcessTMEventWithClass(const TSoftClassPtr<UTMEvent>& _EventClass) {
    return false;
}

ASpawnPoint* ATMEventSystem::FindSpawnPointToSpawnFrom(const TArray<ASpawnPoint*>& _SpawnPoints, EnumSpawnPickRule _PickRule, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, bool RemoveSpawningSpawnPoints, const FString& ClassToSpawn) {
    return NULL;
}

void ATMEventSystem::EndTransition() {
}

void ATMEventSystem::EndRest() {
}

void ATMEventSystem::DeactivateSystemicForFaction(const FGameplayTag& Faction) {
}

void ATMEventSystem::CheckShelterPhaseBug() {
}

bool ATMEventSystem::CanRest() const {
    return false;
}

void ATMEventSystem::BroadcastCustomEventTextToGUI(const FEventBroadcastParams& Params, bool bIsReward) {
}

void ATMEventSystem::ActivateSystemicForFaction(const FGameplayTag& Faction) {
}


