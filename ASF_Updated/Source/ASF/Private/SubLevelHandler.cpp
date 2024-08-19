#include "SubLevelHandler.h"
#include "CommonSaveLoadComponent.h"

ASubLevelHandler::ASubLevelHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->bPlayWithoutCosmetic = false;
    this->bIsMasterMap = false;
    this->bIsLoading = true;
    this->bIsFirstLoad = true;
    this->NbShownLevel = 0;
    this->LevelsToBeUnloaded = 0;
    this->SubLevelRoomCluster = NULL;
    this->InfluenceMapManager = NULL;
}

void ASubLevelHandler::UnregisterSubLevelConnector(USubLevelConnectorComponent* _Connector) {
}

void ASubLevelHandler::UnloadCurrentSubLevel(const FString& _NextLevelToOpen) {
}

void ASubLevelHandler::UnloadCosmeticLevelCallBack() {
}

void ASubLevelHandler::ToggleCosmeticsLevel() {
}

bool ASubLevelHandler::SublevelIsInvisibleOnChartmap(const FString& SubLevelName) const {
    return false;
}

bool ASubLevelHandler::SublevelIsHidden(const FString& SubLevelName) const {
    return false;
}

void ASubLevelHandler::SetStringToFind(const FString& _StringToFind) {
}

void ASubLevelHandler::SetLevelName(const FString& LevelName) {
}

void ASubLevelHandler::RemoveSubLevel(const FString& _SubLevel) {
}

void ASubLevelHandler::RemoveStreamingLevelFromSubLevel(const FString& SubLevel, const FString& StreamingLevel) {
}

void ASubLevelHandler::RemoveRoofLevelWithNoCullingFromSubLevel(const FString& SubLevel, const FString& StreamingLevel) {
}

void ASubLevelHandler::RegisterSubLevelConnector(USubLevelConnectorComponent* _Connector) {
}

void ASubLevelHandler::OnRoomClusterFullyGenerated(ARoomCluster* RoomCluster) {
}

void ASubLevelHandler::OnLoadingScreenLevelLoadedCallback() {
}

void ASubLevelHandler::OnLevelUnloadedCallback() {
}

void ASubLevelHandler::OnLevelShown() {
}

void ASubLevelHandler::OnLevelLoadedCallback() {
}

void ASubLevelHandler::MergeSubLevelHandlers(ASubLevelHandler* SubLevelHandlerTarget, const TArray<ASubLevelHandler*>& SubLevelHandlerstoMerge) {
}

void ASubLevelHandler::MarkLevelAsPersistent(const FString& SubLevel, bool bPersistent) {
}

void ASubLevelHandler::MarkLevelAsLoadingScreencLevel(const FString& SubLevel, bool bIsLoadingScreenLevel) {
}

void ASubLevelHandler::MarkLevelAsIndoor(const FString& SubLevel, bool bIndoor) {
}

void ASubLevelHandler::MarkLevelAsGameplay(const FString& SubLevel, bool bGameplay) {
}

void ASubLevelHandler::MarkAsDefaultSubLevel(const FString& _SubLevel) {
}

void ASubLevelHandler::LoadSubLevel(const FString& _SubLevelName) {
}

void ASubLevelHandler::LoadLoadingScreenLevel() {
}

void ASubLevelHandler::LoadCosmeticLevelCallBack() {
}

int32 ASubLevelHandler::LevelNameMatchStringToFind(const FString& _LevelName) {
    return 0;
}

bool ASubLevelHandler::IsSubLevelLoading() const {
    return false;
}

bool ASubLevelHandler::IsIndoorLevel(const FString& SubLevel) const {
    return false;
}

bool ASubLevelHandler::IsCurrentLevelNoOutdoorFOWReveal() const {
    return false;
}

bool ASubLevelHandler::IsCurrentLevelIndoorLevel() const {
    return false;
}

ARoomCluster* ASubLevelHandler::GetSubLevelRoomCluster(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FString> ASubLevelHandler::GetStreamingLevelThatShouldBeUnloaded() const {
    return TArray<FString>();
}

TArray<FString> ASubLevelHandler::GetStreamingLevelThatShouldBeLoaded(const FString& ForLevel) const {
    return TArray<FString>();
}

void ASubLevelHandler::GetStreamingLevelStatut(const FString& StreamingLevel, bool& bIsPersistent, bool& bIsSubLevel) {
}

TArray<FString> ASubLevelHandler::GetPersistansLevels() {
    return TArray<FString>();
}

int32 ASubLevelHandler::GetNbOccurancyOfStreamingLevel(const FString& _StreamingLevelName) {
    return 0;
}

TArray<FString> ASubLevelHandler::GetMultimapKeys() {
    return TArray<FString>();
}

float ASubLevelHandler::GetLoadingProgress() const {
    return 0.0f;
}

USubLevelPrimaryDataAsset* ASubLevelHandler::GetCurrentSubLevelDataAsset() const {
    return NULL;
}

ULevelStreaming* ASubLevelHandler::GetCurrentStreamingLevel() {
    return NULL;
}

TArray<FString> ASubLevelHandler::GetCosmeticStreamingLevelThatShouldBeLoaded(const FString& ForLevel) const {
    return TArray<FString>();
}

TArray<USubLevelConnectorComponent*> ASubLevelHandler::GetConnectorsLeadingTo(const FString& _SubLevelDest) {
    return TArray<USubLevelConnectorComponent*>();
}

TArray<FString> ASubLevelHandler::GetAllSubLevels() {
    return TArray<FString>();
}

TArray<FString> ASubLevelHandler::GetAllStreamingLevelsOfSubLevel(const FString& SubLevel) {
    return TArray<FString>();
}

TArray<FString> ASubLevelHandler::GetAllRoofNoCullingLevelsOfSubLevel(const FString& SubLevel) {
    return TArray<FString>();
}

TArray<FString> ASubLevelHandler::GetAllLevels(bool bWithSubLevels, bool bWithPersistentLevels, bool bSorted) const {
    return TArray<FString>();
}

FString ASubLevelHandler::GetActorLevelName(AActor* _Actor) {
    return TEXT("");
}

void ASubLevelHandler::GenerateLevelsUnionCollection() {
}

AEntryPoint* ASubLevelHandler::FindTransitionNotInPlace(const FString& From, const FString& To) {
    return NULL;
}

void ASubLevelHandler::CleanStreamingLevelList() {
}

void ASubLevelHandler::AddStreamingLevelToSubLevel(const FString& SubLevel, const FString& StreamingLevel) {
}

void ASubLevelHandler::AddRoofLevelWithNoCullingToSubLevel(const FString& SubLevel, const FString& StreamingLevel) {
}


