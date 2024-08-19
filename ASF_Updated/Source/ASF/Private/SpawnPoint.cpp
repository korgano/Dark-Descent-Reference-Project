#include "SpawnPoint.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Tinda_EffectHandlerComponent.h"
#include "CommonSaveLoadComponent.h"
#include "RoomGraphPathPrecomputComponent.h"
#include "Templates/SubclassOf.h"

ASpawnPoint::ASpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnRootComponent"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpawnPointMeshComponent"));
    this->EffectHandler = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->ShelterClusterFilter = NULL;
    this->CondemnClusterFilter = NULL;
    this->bRegisterToEventSystem = true;
    this->bAlwaysDelayFirstSpawn = false;
    this->bIsRevealed = false;
    this->Highlighted = false;
    this->InfiniteHighlight = false;
    this->RoomGraphPathPrecomputComponent = CreateDefaultSubobject<URoomGraphPathPrecomputComponent>(TEXT("RoomGraphPathPrecomputComponent"));
    this->TacticalModeSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->bAlienShouldPlaySpawnAnim = true;
    this->bAlienShouldOffsetSpawnPosition = true;
    this->NavFilterDataTable = NULL;
    this->SpawnRootComponent = (USceneComponent*)RootComponent;
    this->SpawnArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnArrowComponent"));
    this->AnimArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("AnimArrowComponent"));
    this->EvadeAnimationArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("EvadeAnimArrowComponent"));
    this->PointOfInterestComponent = NULL;
    this->OverrideArrowAnim = false;
    this->OverrideArrowSpawn = false;
    this->SpawnArrowComponent->SetupAttachment(RootComponent);
    this->AnimArrowComponent->SetupAttachment(RootComponent);
    this->EvadeAnimationArrowComponent->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
}

void ASpawnPoint::UpdateEsthetic_Implementation(USpawnPoint_Esthetic_DataAsset* _DataAsset) {
}

void ASpawnPoint::UpdateCondemnState() {
}

void ASpawnPoint::UpdateClusterStates() {
}

void ASpawnPoint::Unlight() {
}

void ASpawnPoint::UnCondemn() {
}

bool ASpawnPoint::StartQueueSpawn(bool _bSkipFirstDelay, FVector2D _SpawnDelay) {
    return false;
}

APawn* ASpawnPoint::StartPawnSpawnProcess(const TSoftClassPtr<APawn>& _PawnClass) {
    return NULL;
}

APawn* ASpawnPoint::SpawnPawnFromClass_Implementation(TSubclassOf<APawn> PawnClass) {
    return NULL;
}

void ASpawnPoint::SetDelayBetweenSpawns(FVector2D _NewDelay) {
}

void ASpawnPoint::Reveal() {
}

void ASpawnPoint::ReconstructCondemnState() {
}

void ASpawnPoint::ReconstructClusterStates() {
}

void ASpawnPoint::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void ASpawnPoint::OnSquadStarted(ASquad* _Squad) {
}

void ASpawnPoint::OnSquadMemberRemoved(ASquad* _Squad, AHumanoidMarine* _RemovedMember) {
}

void ASpawnPoint::OnSquadMemberEnabled(ASquad* _Squad, AHumanoidMarine* _EnabledMember) {
}

void ASpawnPoint::OnSquadMemberDisabled(ASquad* _Squad, AHumanoidMarine* _DisabledMember) {
}

void ASpawnPoint::OnSquadCreated(AASFPlayerState* _PlayerState, ASquad* _Squad) {
}

void ASpawnPoint::OnSpawnTimerExpired() {
}

void ASpawnPoint::OnRoomClusterRebuilt(ARoomCluster* RoomCluster) {
}

void ASpawnPoint::OnEventSystemSetOnGameMode_Implementation(AASFGameModeBase_TacticalMode* _GameMode, ATMEventSystem* _EventSystem) {
}

bool ASpawnPoint::IsInactive() {
    return false;
}

bool ASpawnPoint::IsHighlighted() {
    return false;
}

bool ASpawnPoint::IsCondemned() const {
    return false;
}

bool ASpawnPoint::IsAvailable() const {
    return false;
}

void ASpawnPoint::Highlight(float HighlightDuration) {
}

void ASpawnPoint::Hide() {
}

bool ASpawnPoint::HasBeenRevealed() {
    return false;
}

void ASpawnPoint::HandleUnlight_Implementation() {
}

void ASpawnPoint::HandleReveal_Implementation() {
}

void ASpawnPoint::HandlePawnSpawn_Implementation(APawn* SpawnedPawn) {
}

void ASpawnPoint::HandleHighlight_Implementation() {
}

void ASpawnPoint::HandleHide_Implementation() {
}

FGameplayTag ASpawnPoint::GetSpawnType() const {
    return FGameplayTag{};
}

USpawnPoint_Esthetic_DataAsset* ASpawnPoint::GetSpawnPoint_Esthetic_DataAsset_Implementation() {
    return NULL;
}

FTransform ASpawnPoint::GetSpawnDepartureTransformForPawn_Implementation(APawn* Pawn) {
    return FTransform{};
}

FTransform ASpawnPoint::GetSpawnDepartureTransform() {
    return FTransform{};
}

FTransform ASpawnPoint::GetSpawnArrivalTransformForPawn_Implementation(APawn* Pawn) {
    return FTransform{};
}

FTransform ASpawnPoint::GetSpawnArrivalTransform() {
    return FTransform{};
}

TArray<FGameplayTag> ASpawnPoint::GetSpawnableFactions() const {
    return TArray<FGameplayTag>();
}

int64 ASpawnPoint::GetRoomGraphID() const {
    return 0;
}

FVector ASpawnPoint::GetPathfindLocation_Implementation() const {
    return FVector{};
}

FVector ASpawnPoint::GetPathFindingPosition() {
    return FVector{};
}

FVector ASpawnPoint::GetInteractionLocation_Implementation() {
    return FVector{};
}

FString ASpawnPoint::GetInactiveCondemnedDebugString() {
    return TEXT("");
}

FGameplayTag ASpawnPoint::GetFactionOwner() const {
    return FGameplayTag{};
}

FVector ASpawnPoint::GetEvadeAnimPosition() const {
    return FVector{};
}

FVector2D ASpawnPoint::GetDelayBetweenSpawns() {
    return FVector2D{};
}

void ASpawnPoint::Condemn() {
}

void ASpawnPoint::ClearSpawnQueue() {
}

bool ASpawnPoint::CanSpawnPawnOfType(const FGameplayTag& PawnType) const {
    return false;
}

bool ASpawnPoint::CanSpawnNewPawn_Implementation(const TSoftClassPtr<APawn>& PawnToSpawn) {
    return false;
}

bool ASpawnPoint::CanSpawnForFactions(const TArray<FGameplayTag>& Factions) const {
    return false;
}

bool ASpawnPoint::CanSpawnForFaction(const FGameplayTag& Faction) const {
    return false;
}

void ASpawnPoint::CancelQueueSpawn(bool _bClearSpawnQueue) {
}

void ASpawnPoint::AddPawnsToSpawnQueue(const TArray<TSoftClassPtr<APawn>>& _FoeClass, bool _bOverrideCurrentQueue, bool _bStartQueueSpawn, FVector2D _SpawnDelay) {
}

void ASpawnPoint::AddPawnsToDeferredSpawnQueue(const TArray<TSoftClassPtr<APawn>>& _FoeClass, FSpawnDeferredDynamicDelegate DeferredSpawnEvent, bool _bOverrideCurrentQueue, bool _bStartQueueSpawn, FVector2D _SpawnDelay) {
}


