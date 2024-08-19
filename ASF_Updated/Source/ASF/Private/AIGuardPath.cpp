#include "AIGuardPath.h"
#include "Templates/SubclassOf.h"

AAIGuardPath::AAIGuardPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForcedGuardSpawnPoint = NULL;
    this->GuardPathRefilled = false;
    this->MaxAlien = 1;
}

void AAIGuardPath::TryRespawnAfterTransition() {
}

void AAIGuardPath::SpawnPatrol(const TSoftClassPtr<AASFCharacter>& _patrolClass, const FGameplayTag& Faction) {
}

TArray<AAIGuardPath*> AAIGuardPath::SortGuardPathByDistanceToLocation(TArray<AAIGuardPath*> _GuardPaths, FVector _Location) {
    return TArray<AAIGuardPath*>();
}

void AAIGuardPath::SetForcedGuardSpawnPoint(ASpawnPoint* InForcedGuardSpawnPoint) {
}

void AAIGuardPath::RemoveEnemyToPath(AASFCharacter* _Enemy) {
}

void AAIGuardPath::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void AAIGuardPath::OnSpawnPointAvailabilityChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void AAIGuardPath::OnAlienSpawned(ASpawnPoint* SpawnPoint, APawn* Character) {
}

void AAIGuardPath::OnAlienDeferredSpawned(ASpawnPoint* SpawnPoint, UObject* SpawnedObject) {
}

bool AAIGuardPath::IsGuardPathFull(AAIGuardPath* _GuardPath) {
    return false;
}

bool AAIGuardPath::HasAnyAvailableSpawnPointForFaction(const FGameplayTag& Faction) const {
    return false;
}

bool AAIGuardPath::HasAnyAvailableSpawnPoint() const {
    return false;
}

TArray<AAIGuardPath*> AAIGuardPath::GuardPath_FilterByIsFull(const TArray<AAIGuardPath*>& _GuardPaths, bool _bIsFull) {
    return TArray<AAIGuardPath*>();
}

ASpawnPoint* AAIGuardPath::GetSpawnPointToSpawnFromForFaction(const FGameplayTag& Faction) {
    return NULL;
}

TArray<ASpawnPoint*> AAIGuardPath::GetSpawnPoints(const TArray<AAIGuardPath*>& _GuardPaths) {
    return TArray<ASpawnPoint*>();
}

FVector AAIGuardPath::GetRandomSafePositionInPath_Implementation(APawn* _Pawn, TSubclassOf<UNavigationQueryFilter> _navFilter) {
    return FVector{};
}

FVector AAIGuardPath::GetRandomPositionInPath_Implementation() {
    return FVector{};
}

AAIGuardPath* AAIGuardPath::GetRandomGuardPathAccessible(TSubclassOf<UNavigationQueryFilter> _navFilter, AASFCharacter* _Enemy, bool _DiscardIfFull) {
    return NULL;
}

AAIGuardPath* AAIGuardPath::GetRandomGuardPath(bool _DiscardIfFull) {
    return NULL;
}

int32 AAIGuardPath::GetNumRemainingPlaces() const {
    return 0;
}

int32 AAIGuardPath::GetNumOtherGuardingEnemies(AASFCharacter* _Enemy, bool IncludePatrolsAboutToSpawn) const {
    return 0;
}

int32 AAIGuardPath::GetNumGuardingEnemies(bool IncludePatrolsAboutToSpawn) const {
    return 0;
}

TArray<ASpawnPoint*> AAIGuardPath::GetGuardSpawnPoints() const {
    return TArray<ASpawnPoint*>();
}

TArray<AAIGuardPath*> AAIGuardPath::GetGuardPath() {
    return TArray<AAIGuardPath*>();
}

float AAIGuardPath::GetDistanceFromGuardPathToLocation(const AAIGuardPath* _GuardPath, FVector _Location) {
    return 0.0f;
}

FVector AAIGuardPath::GetClosestPointFromGuardPathToLocation(const AAIGuardPath* _GuardPath, FVector _Location) {
    return FVector{};
}

TArray<FPairInt> AAIGuardPath::GetACM() {
    return TArray<FPairInt>();
}

TArray<FString> AAIGuardPath::CheckGuardPathPositions(AASFRecastNavMesh* _ASFRecastNavMesh) {
    return TArray<FString>();
}

bool AAIGuardPath::CanSpawnForFaction(const FGameplayTag& Faction) const {
    return false;
}

void AAIGuardPath::AddEnemyToPath(AASFCharacter* _Enemy) {
}


