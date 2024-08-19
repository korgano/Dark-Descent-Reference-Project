#include "SquadSpawner.h"

ASquadSpawner::ASquadSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsASquadRespawner = false;
    this->SpawnAtMissionStart = true;
    this->SquadDataAsset = NULL;
    this->GuardedRoom = NULL;
    this->DefaultBehavior = EnumSquadType::GUARD;
    this->PatrolPath = NULL;
    this->bSpawnOnIdlePoints = true;
    this->AssociatedSquad = NULL;
    this->AssociatedSquadID = -1;
}

ASquad* ASquadSpawner::SpawnSquadConfigured(AActor* Context, FTransform _Transform, const TSoftClassPtr<ASquad>& _SquadToSpawn, const TArray<UMarineClassDataAssets*>& _SquadMembers, USquadClassDataAsset* _SquadDataAsset) {
    return NULL;
}

ASquad* ASquadSpawner::SpawnSquad(FTransform _Transform) {
    return NULL;
}

void ASquadSpawner::SetAssociatedSquadID(int32 ID) {
}

void ASquadSpawner::OnTargetSquadKilled(ASquad* Squad) {
}

void ASquadSpawner::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void ASquadSpawner::OnSubLevelHandlerLoad(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

void ASquadSpawner::OnSquadListChanged(ASquad* _Squad, bool _Added) {
}


void ASquadSpawner::OnMissionRegistered(AASFGameState_TacticalMode* GameState, AMission* Mission) {
}

int32 ASquadSpawner::GetAssociatedSquadID() {
    return 0;
}

ASquad* ASquadSpawner::GetAssociatedSquad() {
    return NULL;
}

void ASquadSpawner::FinalizeSpawn() {
}

bool ASquadSpawner::CanSpawnOnIdlePoints() {
    return false;
}


