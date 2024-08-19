#include "ASFGameState_BaseManagement.h"
#include "InventoryResourceComponent.h"

AASFGameState_BaseManagement::AASFGameState_BaseManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeploymentsPerTurn = 1;
    this->DeploymentsLeft = 1;
    this->RoomService = NULL;
    this->bFirstCommandDeckEntrance = true;
    this->UpgradesDataTable = NULL;
    this->TraitsDataTable = NULL;
    this->MarineCustomizationPresetsDataTable = NULL;
    this->InventoryResourceComponent = CreateDefaultSubobject<UInventoryResourceComponent>(TEXT("InventoryResourceComponent"));
    this->BattlePreparationHoveredMarine = NULL;
    this->bShowPassUnfinishedTurnWarning = true;
    this->CurrentDeathClockTimeAllotment = 0;
    this->CurrentInfestationStep = 0;
    this->CurrentHiveSize = 1;
    this->bShowInfestationEvent = false;
    this->OtagoEventSystem = NULL;
    this->OtagoEventsDataTable = NULL;
    this->CampaignStateDataAsset = NULL;
}

void AASFGameState_BaseManagement::UpdateResourceMissions() {
}

void AASFGameState_BaseManagement::TransferMissionSuppliesToShuttle(const TMap<FGameplayTag, int32>& _Supplies) {
}

void AASFGameState_BaseManagement::SpawnResourceMission(UResourceMission_DataAsset* _MissionAsset) {
}

void AASFGameState_BaseManagement::SortNewTurnNotifications() {
}

void AASFGameState_BaseManagement::SetXenoTechSelected(UXenoTech_DataAsset* _Asset, bool _Selected) {
}

void AASFGameState_BaseManagement::SetShowInfestationEvent(bool _ShowEvent) {
}

void AASFGameState_BaseManagement::SetLastLaunchedMissionTag(FGameplayTag _MissionTag) {
}

void AASFGameState_BaseManagement::SetInitialRoomStates() {
}

void AASFGameState_BaseManagement::SetBattlePreparationHoveredMarine(AHumanoid* HoveredMarine) {
}

void AASFGameState_BaseManagement::RemoveNewUnlockedXenoTech(UXenoTech_DataAsset* _Asset) {
}

void AASFGameState_BaseManagement::RemoveMissionSuppliesAmount(FGameplayTag _SuppliesTag, int32 _NbResource) {
}

void AASFGameState_BaseManagement::RemoveMissionSupplies(const TMap<FGameplayTag, int32>& _Supplies) {
}

void AASFGameState_BaseManagement::RemoveMarineSelectedForMission(AHumanoid* _Humanoid) {
}

void AASFGameState_BaseManagement::RemoveMarine(AHumanoid* _Marine) {
}

void AASFGameState_BaseManagement::RemoveFirstActiveTutorial() {
}

void AASFGameState_BaseManagement::RemoveActiveTutorial(FGameplayTag _TutorialTag) {
}

void AASFGameState_BaseManagement::RefreshMarinesRandomizedClassPicks() {
}

void AASFGameState_BaseManagement::RecoverSuppliesAndResourcesFromShuttle() {
}

void AASFGameState_BaseManagement::RecoverResearchProjectsFromShuttle() {
}

void AASFGameState_BaseManagement::RecoverCiviliansFromShuttle() {
}


FMarineName AASFGameState_BaseManagement::PickMarineNameByGender(EGender _Gender) {
    return FMarineName{};
}

FMarineName AASFGameState_BaseManagement::PickMarineName() {
    return FMarineName{};
}

FMarineCustomizationPreset AASFGameState_BaseManagement::PickMarineCustomizationPresetByGender(EGender _Gender) {
    return FMarineCustomizationPreset{};
}

FMarineCustomizationPreset AASFGameState_BaseManagement::PickMarineCustomizationPreset() {
    return FMarineCustomizationPreset{};
}

TMap<FGameplayTag, int32> AASFGameState_BaseManagement::PerformResourceMission(FResourceMission _Mission) {
    return TMap<FGameplayTag, int32>();
}

void AASFGameState_BaseManagement::OnXenoTechResearchProjectComplete(UBM_ResearchProject_DataAsset* _ProjectAsset) {
}

void AASFGameState_BaseManagement::OnTutorialUnlocked(FGameplayTag _TutorialTag) {
}

void AASFGameState_BaseManagement::OnNewTurn_Event(AASFGameModeBase_BaseManagement* _GameMode, int32 _Turn) {
}

void AASFGameState_BaseManagement::InitializeRooms() {
}

void AASFGameState_BaseManagement::InitializeInventory(UBMStart_DataAsset* BMStartDataAsset) {
}

bool AASFGameState_BaseManagement::HasMissionSupplies() const {
    return false;
}

bool AASFGameState_BaseManagement::HasMissionBriefPlayed(FGameplayTag _MissionTag) const {
    return false;
}

bool AASFGameState_BaseManagement::HasDeadMarines() const {
    return false;
}

bool AASFGameState_BaseManagement::HasAvailableUpgrade(AHumanoid* _Marine) const {
    return false;
}

bool AASFGameState_BaseManagement::HasAvailableEmployees(FGameplayTag _EmployeeType, int32 _Count) const {
    return false;
}

bool AASFGameState_BaseManagement::HasAnyActiveTutorial() const {
    return false;
}

bool AASFGameState_BaseManagement::HasActiveTutorial(FGameplayTag _TutorialTag) const {
    return false;
}

TArray<UUpgradeDataAssets*> AASFGameState_BaseManagement::GetUpgradesForMarineRank(EMarineRank _Rank) const {
    return TArray<UUpgradeDataAssets*>();
}

UDataTable* AASFGameState_BaseManagement::GetUpgradesDataTable() const {
    return NULL;
}

UUpgradeDataAssets* AASFGameState_BaseManagement::GetUpgradeAsset(FGameplayTag _Tag) const {
    return NULL;
}

TArray<UTrait_DataAsset*> AASFGameState_BaseManagement::GetUnusedTraits() const {
    return TArray<UTrait_DataAsset*>();
}

int32 AASFGameState_BaseManagement::GetUntreatedTraumatizedMarineCount(bool _WithWounded) const {
    return 0;
}

int32 AASFGameState_BaseManagement::GetUntraumatizedMarineCount() const {
    return 0;
}

int32 AASFGameState_BaseManagement::GetTraumatizedMarineCount() const {
    return 0;
}

UDataTable* AASFGameState_BaseManagement::GetTraitsDataTable() const {
    return NULL;
}

TArray<UTrait_DataAsset*> AASFGameState_BaseManagement::GetTraits() const {
    return TArray<UTrait_DataAsset*>();
}

float AASFGameState_BaseManagement::GetTotalMissionDuration(FGameplayTag _MissionTag, float _WithDuration) const {
    return 0.0f;
}

int32 AASFGameState_BaseManagement::GetTiredMarineCount() const {
    return 0;
}

void AASFGameState_BaseManagement::GetSupplies(TMap<FGameplayTag, int32>& _Supplies) {
}

void AASFGameState_BaseManagement::GetSelectedAndHoveredMarinesForNextMission(TArray<AHumanoid*>& _Marines) const {
}

URoomService* AASFGameState_BaseManagement::GetRoomService() const {
    return NULL;
}

int32 AASFGameState_BaseManagement::GetPromotableMarineCount() const {
    return 0;
}

TArray<FOtagoEvent> AASFGameState_BaseManagement::GetOtagoEvents() const {
    return TArray<FOtagoEvent>();
}

FOtagoEvent AASFGameState_BaseManagement::GetOtagoEvent(FGameplayTag _EventTag) const {
    return FOtagoEvent{};
}

void AASFGameState_BaseManagement::GetMarinesSelectedForNextMission(TArray<AHumanoid*>& _MarinesSelectedForNextMission) const {
}

void AASFGameState_BaseManagement::GetMarinesReturnedFromMission(TArray<AHumanoid*>& _MarinesReturnedFromMission) const {
}

int32 AASFGameState_BaseManagement::GetMarineCountSelectedForNextMissionByClass(UMarineClassDataAssets* _ClassDataAsset) const {
    return 0;
}

int32 AASFGameState_BaseManagement::GetMarineCountByClass(const TArray<AHumanoid*>& _Marines, UMarineClassDataAssets* _ClassDataAsset) const {
    return 0;
}

int32 AASFGameState_BaseManagement::GetMarineCount() const {
    return 0;
}

AHumanoid* AASFGameState_BaseManagement::GetMarineByID(int32 _MarineID) {
    return NULL;
}

int32 AASFGameState_BaseManagement::GetHealthyMarineCount() const {
    return 0;
}

int32 AASFGameState_BaseManagement::GetExhaustedMarineCount() const {
    return 0;
}

int32 AASFGameState_BaseManagement::GetDeploymentsLeft() const {
    return 0;
}

void AASFGameState_BaseManagement::GetDeadMarines(TArray<AHumanoid*>& _DeadMarines) {
}

AHumanoid* AASFGameState_BaseManagement::GetBattlePreparationHoveredMarine() const {
    return NULL;
}

float AASFGameState_BaseManagement::GetAverageRunDuration(float _WithDuration) const {
    return 0.0f;
}

float AASFGameState_BaseManagement::GetAverageMissionsDuration(FGameplayTag _MissionTag, float _WithDuration) const {
    return 0.0f;
}

int32 AASFGameState_BaseManagement::GetAverageBulletCount(int32 _WithCount) const {
    return 0;
}

TArray<UUpgradeDataAssets*> AASFGameState_BaseManagement::GetAvailableUpgrades(const AHumanoid* _Marine, bool bCheckRequirements) const {
    return TArray<UUpgradeDataAssets*>();
}

TArray<FResourceMission> AASFGameState_BaseManagement::GetAvailableResourceMissions() const {
    return TArray<FResourceMission>();
}

void AASFGameState_BaseManagement::GetAvailableMarines(TArray<AHumanoid*>& _AvailableMarines) const {
}

int32 AASFGameState_BaseManagement::GetAvailableMarineCount() const {
    return 0;
}

int32 AASFGameState_BaseManagement::GetAvailableEmployees(FGameplayTag _EmployeeType) const {
    return 0;
}

TArray<UUpgradeDataAssets*> AASFGameState_BaseManagement::GetAuthorizedUpgrades(const AHumanoid* _Marine) const {
    return TArray<UUpgradeDataAssets*>();
}

TArray<AHumanoid*> AASFGameState_BaseManagement::GetAllMarinesWithClassFilterToExclude(UMarineClassDataAssets* DataAsset) const {
    return TArray<AHumanoid*>();
}

void AASFGameState_BaseManagement::GetAllMarines(TArray<AHumanoid*>& _Marines) const {
}

TArray<AHumanoid*> AASFGameState_BaseManagement::GenerateDefaultSquadSelection() {
    return TArray<AHumanoid*>();
}

void AASFGameState_BaseManagement::FlushNewTurnNotifications() {
}

void AASFGameState_BaseManagement::DecreaseDeploymentsLeft() {
}

void AASFGameState_BaseManagement::CreateRoomService() {
}

AHumanoid* AASFGameState_BaseManagement::CreateNewMarine() {
    return NULL;
}

void AASFGameState_BaseManagement::ClearSelectedXenoTechs(bool bRefund) {
}

void AASFGameState_BaseManagement::ClearMarinesSelectedForMission() {
}

bool AASFGameState_BaseManagement::CanDeploy() const {
    return false;
}

void AASFGameState_BaseManagement::ApplyCampaignState(FGameplayTag _CurrentMissionTag) {
}

void AASFGameState_BaseManagement::AddTurn() {
}

void AASFGameState_BaseManagement::AddPickedMarineName(const FString& _Name) {
}

void AASFGameState_BaseManagement::AddNewTurnNotification(ENewTurnNotificationType _Type, FText _Title, FText _Description) {
}

void AASFGameState_BaseManagement::AddMissionSuppliesAmount(FGameplayTag _SuppliesTag, int32 _NbSupplies) {
}

void AASFGameState_BaseManagement::AddMissionSupplies(const TMap<FGameplayTag, int32>& _Supplies) {
}

void AASFGameState_BaseManagement::AddMarineSelectedForMission(AHumanoid* _Humanoid, int32 _Index) {
}

void AASFGameState_BaseManagement::AddMarineReturnedFromMission(AHumanoid* _Humanoid) {
}

void AASFGameState_BaseManagement::AddMarine(AHumanoid* _Marine) {
}

void AASFGameState_BaseManagement::AddDeadMarine(FDataCarrierMarine& _DeadMarine) {
}


