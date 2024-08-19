#include "AlienSystemic.h"

UAlienSystemic::UAlienSystemic() {
    this->HiveTranq_DataAsset = NULL;
}

void UAlienSystemic::UnRegisterStasisPoint(AStasisPoint* _SpawnPoint) {
}

void UAlienSystemic::TryShareNoiseLocation(FVector NoiseOrigin, int32 GraphID) {
}

void UAlienSystemic::SpawnPatrolDrone(AAIGuardPath* ForcedGuardPath) {
}

void UAlienSystemic::SpawnExplorationRunner(ASpawnPoint* ForcedSpawnPoint) {
}

void UAlienSystemic::SpawnBoss(ASpawnPoint* ForcedSpawnPoint) {
}

void UAlienSystemic::RemoveAlienAbducting(UObject* _AlienAbducting) {
}

void UAlienSystemic::RegisterStasisPoint(AStasisPoint* _SpawnPoint) {
}

void UAlienSystemic::OnGuardPathRemoved(AAIGuardPath* GuardPath) {
}

void UAlienSystemic::OnGuardPathAvailabilityChanged(AAIGuardPath* GuardPath, bool IsAvailable) {
}

void UAlienSystemic::OnGuardPathAdded(AAIGuardPath* GuardPath) {
}

void UAlienSystemic::OnExplorationSpawnTimerExpired() {
}

void UAlienSystemic::OnBossSpawnedBySpawnPoint(ASpawnPoint* SpawnPoint, APawn* Pawn) {
}

void UAlienSystemic::OnBossDeferredSpawnedBySpawnPoint(ASpawnPoint* SpawnPoint, UObject* SpawnedObject) {
}

void UAlienSystemic::OnBossDeathOrDestroyed(AASFCharacter* Character) {
}

void UAlienSystemic::OnAlienSpawned(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig) {
}

void UAlienSystemic::OnAlienDestroyed(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig) {
}

bool UAlienSystemic::HasAnyBossUnlocked() const {
    return false;
}

bool UAlienSystemic::HasAliveBossForAggressiveness(int32 Aggressiveness) {
    return false;
}

TArray<AStasisPoint*> UAlienSystemic::GetStasisPoints(FGameplayTag _StasisPointType) {
    return TArray<AStasisPoint*>();
}

TSoftClassPtr<UTMEvent> UAlienSystemic::GetOnslaughtEventClassOfType(EOnslaughtType OnslaughtType) {
    return NULL;
}

int32 UAlienSystemic::GetMaxPatrolDronesForCurrentAggressiveness() const {
    return 0;
}

TArray<AStasisPoint*> UAlienSystemic::GetInactiveStasisPoints(FGameplayTag _StasisPointType) {
    return TArray<AStasisPoint*>();
}

FTimerHandle UAlienSystemic::GetExplorationSpawnTimerHandle() const {
    return FTimerHandle{};
}

int32 UAlienSystemic::GetCurrentMaxGuardPathCapacity() const {
    return 0;
}

int32 UAlienSystemic::GetCurrentMaxAliensOnPatrol() const {
    return 0;
}

int32 UAlienSystemic::GetCurrentLivingAliens(bool RemoveStasis) const {
    return 0;
}

TArray<AAIGuardPath*> UAlienSystemic::GetAvailableGuardPaths() const {
    return TArray<AAIGuardPath*>();
}

UAlienSystemicDataAsset* UAlienSystemic::GetAlienSystemicDataAsset() const {
    return NULL;
}

void UAlienSystemic::ForceOnslaughtOfType(EOnslaughtType OnslaughtType) {
}

AStasisPoint* UAlienSystemic::FindStasisPointForAlien(AAlien* AlienToStase) {
    return NULL;
}

bool UAlienSystemic::CanAlienAbduct(UObject* _RequestingAlien, UObject* _Target) {
    return false;
}

void UAlienSystemic::AddAlienAbducting(UObject* _AlienAbducting) {
}


