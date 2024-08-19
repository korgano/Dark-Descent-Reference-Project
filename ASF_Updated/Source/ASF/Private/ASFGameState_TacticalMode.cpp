#include "ASFGameState_TacticalMode.h"
#include "EggPoolComponent.h"

AASFGameState_TacticalMode::AASFGameState_TacticalMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentMission = NULL;
    this->EggPoolComponent = CreateDefaultSubobject<UEggPoolComponent>(TEXT("Egg Pool Component"));
    this->FirstSpot = true;
    this->EvadingAlien = NULL;
    this->NextBossID = 0;
    this->MTMinimapShader = NULL;
    this->ActualExtractionTransport = NULL;
    this->ExtractionDropship = NULL;
    this->APC_ExitPoint = NULL;
    this->NextSquadID = 1;
    this->POIDebugActor = NULL;
    this->TimeInMission = 0.00f;
}

void AASFGameState_TacticalMode::UnregisterPowerLoader(APowerLoaderActor* _PowerLoader) {
}

void AASFGameState_TacticalMode::UnRegisterItemSpawned(AItemSpawned* _ItemSpawned) {
}

void AASFGameState_TacticalMode::UnregisterCharacterFromVisibilityList(AASFCharacter* _Char) {
}

void AASFGameState_TacticalMode::SetCharacterIDNameForBoss(AAlien* Boss) {
}

void AASFGameState_TacticalMode::SetActualExtractionTransport(AExtractionTransport* _ActualExtractionTransport) {
}

void AASFGameState_TacticalMode::SetActiveSubLevelForExtractionTransportType(const FString& Type, const FString& SubLevel) {
}

void AASFGameState_TacticalMode::SearchCoverInRoomComplete(int32 _Id) {
}

void AASFGameState_TacticalMode::SaveSecuredHumanoidsToGameInstanceSS() {
}

void AASFGameState_TacticalMode::SaveMarineAndGoToOtago(bool ReturnToOtago, float delayBeforeReturnToOtago, bool _bFromGA) {
}

void AASFGameState_TacticalMode::SaveHumanoidInAPC(AHumanoidTactical* _Humanoid) {
}

void AASFGameState_TacticalMode::SaveExtractionTransportEntryPoint(const FString& _PointName) {
}

bool AASFGameState_TacticalMode::ReserveSearchCoverInRoom(int32 _Id) {
    return false;
}

void AASFGameState_TacticalMode::RemoveTrackingEnemy(FGameplayTag _TrackedFaction, AASFCharacter* _TrackingEnemy, FGameplayTag _TrackingType) {
}

void AASFGameState_TacticalMode::RemoveSquad(ASquad* _Squad, int32 _SquadID) {
}

void AASFGameState_TacticalMode::RemoveRoomPOIContainer(int32 RoomId) {
}

void AASFGameState_TacticalMode::RemoveNest(ANest* _Nest) {
}

void AASFGameState_TacticalMode::RemoveHideoutInMap(AHideout* _HideoutInMap) {
}

void AASFGameState_TacticalMode::RemoveHiddingPoint_Deserter(AActor* _HiddingPoint) {
}

void AASFGameState_TacticalMode::RemoveEscapeZoneInMap(AEscapeZone* _EscapeZoneInMap) {
}

void AASFGameState_TacticalMode::RemoveCivilian(AHumanoidCivilian* Civilian) {
}

void AASFGameState_TacticalMode::RemoveAPC_Waypoint(AEntryPoint* _Waypoint) {
}

void AASFGameState_TacticalMode::RemoveActiveTutorial(FGameplayTag _TutorialTag) {
}

UEnnemyTrackingSystem* AASFGameState_TacticalMode::RegisterTrackedSystem(FGameplayTag _TrackedFaction, const TSoftClassPtr<UEnnemyTrackingSystem>& _TrackingSystemClass, UEnemyTracking_DataAsset* _TrackingComponentDataAsset) {
    return NULL;
}

void AASFGameState_TacticalMode::RegisterPowerLoader(APowerLoaderActor* _PowerLoader) {
}

void AASFGameState_TacticalMode::RegisterMission(AMission* _Mission) {
}

void AASFGameState_TacticalMode::RegisterItemSpawned(AItemSpawned* _ItemSpawned) {
}

void AASFGameState_TacticalMode::RegisterExtractionTransport(const FString& Name, AExtractionTransport* _ExtractionTransport) {
}

void AASFGameState_TacticalMode::RegisterCharacterToVisibilityList(AASFCharacter* _NewChar) {
}

void AASFGameState_TacticalMode::OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* _GameMode, ASubLevelHandler* _SubLevelHandler) {
}

void AASFGameState_TacticalMode::OnRoomAdded(ARoomCluster* _RoomCluster, int32 _RoomID) {
}

void AASFGameState_TacticalMode::OnPawnPerceptionEnable(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig) {
}

void AASFGameState_TacticalMode::OnPawnPerceptionDisable(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig) {
}

void AASFGameState_TacticalMode::OnCivilianDeath(AASFCharacter* _ActorKilled, const FDamageResultStruct& _DamageResult) {
}

void AASFGameState_TacticalMode::OnCharacterVisibilityChanged_Delegate(AActor* _Owner, bool Visibility) {
}

void AASFGameState_TacticalMode::OnBeginSubLevelUnload(ASubLevelHandler* _SubLevelHandler, const FString& _SubLevel) {
}

bool AASFGameState_TacticalMode::IsRoomContainerBuilt() const {
    return false;
}

bool AASFGameState_TacticalMode::IsPlayerInCombat() const {
    return false;
}

bool AASFGameState_TacticalMode::IsExtractionTransportTypeActiveOnSubLevel(const FString& Type, const FString& SubLevel) const {
    return false;
}

bool AASFGameState_TacticalMode::IsAtLeastAValidMarinesExtracted() {
    return false;
}

bool AASFGameState_TacticalMode::IsActiveTutorial(FGameplayTag _TutorialTag) const {
    return false;
}

void AASFGameState_TacticalMode::IncShotBullets() {
}

bool AASFGameState_TacticalMode::HasEnemyOnSight(UPointOfInterest_DataAsset* POISightDataAsset) {
    return false;
}

UEnnemyTrackingComponent* AASFGameState_TacticalMode::GetTrackingComponent(FGameplayTag _TrackedFaction) {
    return NULL;
}

UEnnemyTrackingSystem* AASFGameState_TacticalMode::GetTrackedSystem(FGameplayTag _TrackedFaction) const {
    return NULL;
}

FString AASFGameState_TacticalMode::GetSubLevelOfActiveExtractionTransportOfType(const FString& Type) const {
    return TEXT("");
}

TMap<int32, ASquad*> AASFGameState_TacticalMode::GetSquads() {
    return TMap<int32, ASquad*>();
}

ASquad* AASFGameState_TacticalMode::GetSquadByIDName(const FString& IdName) const {
    return NULL;
}

TArray<UAIPointOfInterestContainer*> AASFGameState_TacticalMode::GetRoomPOIContainerForGID(int32 _GraphID, bool EntranceContainers, bool GenerateContainers) {
    return TArray<UAIPointOfInterestContainer*>();
}

TArray<UAIPointOfInterestContainer*> AASFGameState_TacticalMode::GetRoomPOIContainerAtLocation(FVector _WorldLocation, bool EntranceContainers, bool GenerateContainers) {
    return TArray<UAIPointOfInterestContainer*>();
}

APowerLoaderActor* AASFGameState_TacticalMode::GetPowerLoaderById(int32 ID) {
    return NULL;
}

TArray<ANest*> AASFGameState_TacticalMode::GetNests() {
    return TArray<ANest*>();
}

TArray<AHideout*> AASFGameState_TacticalMode::GetHideoutsInMap() {
    return TArray<AHideout*>();
}

TArray<AActor*> AASFGameState_TacticalMode::GetHiddingPoint_Deserter() const {
    return TArray<AActor*>();
}

TMap<FGameplayTag, int32> AASFGameState_TacticalMode::GetExtractionTransportsInventorySupplies() {
    return TMap<FGameplayTag, int32>();
}

TMap<FGameplayTag, int32> AASFGameState_TacticalMode::GetExtractionTransportsInventoryRessources() {
    return TMap<FGameplayTag, int32>();
}

AExtractionTransport* AASFGameState_TacticalMode::GetExtractionTransportByName(const FString& Name) const {
    return NULL;
}

TArray<AEscapeZone*> AASFGameState_TacticalMode::GetEscapeZonesInMap() {
    return TArray<AEscapeZone*>();
}

UEggPoolComponent* AASFGameState_TacticalMode::GetEggPool() {
    return NULL;
}

UPOIDefaultContainer* AASFGameState_TacticalMode::GetDynamicPOIContainer(FGameplayTag _ContainerTag) {
    return NULL;
}

AMission* AASFGameState_TacticalMode::GetCurrentMission() {
    return NULL;
}

TArray<AHumanoidCivilian*> AASFGameState_TacticalMode::GetCivilians() const {
    return TArray<AHumanoidCivilian*>();
}

TArray<AASFCharacter*> AASFGameState_TacticalMode::GetCharactersVisibleInMap() const {
    return TArray<AASFCharacter*>();
}

AASFCharacter* AASFGameState_TacticalMode::GetCharacterByIDName(const FString& IdName) const {
    return NULL;
}

TArray<AHideout*> AASFGameState_TacticalMode::GetAvailableHideoutsInMap() {
    return TArray<AHideout*>();
}

TMap<FGameplayTag, UEnnemyTrackingComponent*> AASFGameState_TacticalMode::GetAllTrackingFactionComponent() const {
    return TMap<FGameplayTag, UEnnemyTrackingComponent*>();
}

AExtractionTransport* AASFGameState_TacticalMode::GetActualExtractionTransport() const {
    return NULL;
}

AExtractionTransport* AASFGameState_TacticalMode::GetActiveExtractionTransportByName(const FString& Name) const {
    return NULL;
}

void AASFGameState_TacticalMode::EndSaveMarineAndGoToOtago() {
}

void AASFGameState_TacticalMode::DismissMissionBrief() {
}

void AASFGameState_TacticalMode::ClearUnlockedResearchProjects() {
}

void AASFGameState_TacticalMode::ClearOtagoFeaturesToUnlock() {
}

void AASFGameState_TacticalMode::ClearMissionProgress() {
}

void AASFGameState_TacticalMode::BuildRoomPOIContainer(ARoomCluster* _RoomCluster) {
}

void AASFGameState_TacticalMode::AddUnlockedResearchProject(FGameplayTag _ProjectTag) {
}

bool AASFGameState_TacticalMode::AddTrackingEnemy(FGameplayTag _TrackedFaction, AASFCharacter* _TrackingEnemy, AASFCharacter* _Target, FGameplayTag _TrackingType, bool _Force) {
    return false;
}

int32 AASFGameState_TacticalMode::AddSquad(ASquad* _Squad, int32 _SquadID) {
    return 0;
}

void AASFGameState_TacticalMode::AddSelectedXenoTechs(TArray<UXenoTech_DataAsset*> _XenoTechs) {
}

void AASFGameState_TacticalMode::AddRecoveredMaterials(FGameplayTag _MissionTag, int32 _Materials) {
}

void AASFGameState_TacticalMode::AddPlayedDialogue(FAcknowsSequence _Dialogue) {
}

void AASFGameState_TacticalMode::AddOtagoFeaturesToUnlock(const FGameplayTagContainer _Features) {
}

void AASFGameState_TacticalMode::AddNest(ANest* _Nest) {
}

void AASFGameState_TacticalMode::AddKilledEnemy(FGameplayTag _EnemyTag) {
}

void AASFGameState_TacticalMode::AddHideoutInMap(AHideout* _HideoutInMap) {
}

void AASFGameState_TacticalMode::AddHiddingPoint_Deserter(AActor* _HiddingPoint) {
}

void AASFGameState_TacticalMode::AddExtractionTransportsInventorySupplies(FGameplayTag supplie, int32 quantity) {
}

void AASFGameState_TacticalMode::AddEscapeZoneInMap(AEscapeZone* _EscapeZoneInMap) {
}

void AASFGameState_TacticalMode::AddDeadCivilian(FDataCarrierCivilian _CivilianData) {
}

void AASFGameState_TacticalMode::AddCivilian(AHumanoidCivilian* Civilian) {
}

void AASFGameState_TacticalMode::AddAPC_Waypoint(AEntryPoint* _Waypoint) {
}

void AASFGameState_TacticalMode::AddActiveTutorial(FGameplayTag _TutorialTag) {
}


