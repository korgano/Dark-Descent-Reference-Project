#include "ASFGameModeBase.h"

AASFGameModeBase::AASFGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSeamlessTravel = true;
    this->bIsInit = false;
    this->bIsSaving = false;
    this->bIsLoading = false;
    this->IsSavePending = false;
    this->PendingSaveGameType = ESaveGameType::MANUAL;
    this->TutorialInputBinderClass = NULL;
    this->DynamicSaveIndex = -1;
    this->MarineCustomizationAsset = NULL;
    this->TiredAttributeDataAsset = NULL;
    this->ExhaustedAttributeDataAsset = NULL;
    this->InputBinder = NULL;
    this->LevelDataAsset = NULL;
    this->TickManager = NULL;
}

int32 AASFGameModeBase::XpPointsRequiredForLevel(int32 Level) const {
    return 0;
}

float AASFGameModeBase::TimeCodeToSeconds(const FString& Timecode, int32 _FrameRate) {
    return 0.0f;
}

void AASFGameModeBase::SetSubLevelHandler(ASubLevelHandler* _SubLevelHandler) {
}

void AASFGameModeBase::Save_Implementation(const FString& _SaveName, ESaveGameType _SaveGameType, bool _bForce) {
}

void AASFGameModeBase::RegisterTutorialInputBinder(ATutorialInputBinder* _NewBinder) {
}

void AASFGameModeBase::OnSaveLoadedForNewGamePlusInit(const FString& InSlotName, const int32 InUserIndex, bool _Succeed) {
}

void AASFGameModeBase::OnSaveLoaded(const FString& InSlotName, const int32 InUserIndex, bool _Succeed) {
}

void AASFGameModeBase::OnSaveFinished(const FString& InSlotName, const int32 InUserIndex, bool bDataSaved) {
}

void AASFGameModeBase::OnIncompatibleSaveLoadedForNewGamePlusInit(const FString& InSlotName, const int32 InUserIndex, bool _Succeed) {
}

void AASFGameModeBase::LoadSaveAsync(int32 _UserIndex, const FString& _SaveName, UMetaDataSaveGame_v1* _MetaDataSaveGame) {
}

void AASFGameModeBase::LoadSave(int32 _UserIndex, const FString& _SaveName, UMetaDataSaveGame_v1* _MetaDataSaveGame) {
}

void AASFGameModeBase::LoadPendingMap() {
}

void AASFGameModeBase::LoadMissionBrief(const FGameplayTag& _MissionTag) {
}

UMetaDataSaveGame_v1* AASFGameModeBase::LoadMetaDataSave(int32 _UserIndex, const FString& _SaveName) {
    return NULL;
}

void AASFGameModeBase::LoadAndOpenLevel(const FString& _SaveName) {
}

bool AASFGameModeBase::IsSaveSlotEligibleForNewGamePlus(int32 _Slot) const {
    return false;
}

bool AASFGameModeBase::IsSaveEligibleForNewGamePlus(const FMetaDataSaveStruct& _SaveStruct) const {
    return false;
}

bool AASFGameModeBase::IsAnySaveSlotEligibleForNewGamePlus() const {
    return false;
}

void AASFGameModeBase::InitNewGamePlusOnOldSave() {
}

void AASFGameModeBase::InitNewGamePlusFromSaveSlot(int32 _Slot) {
}

ATinda_TickManager* AASFGameModeBase::GetTinda_TickManager(const UObject* _WorldRef) {
    return NULL;
}

ASubLevelHandler* AASFGameModeBase::GetSubLevelHandler() const {
    return NULL;
}

FString AASFGameModeBase::GetSaveSlotLastOtagoSaveName(int32 _Slot) const {
    return TEXT("");
}

ATutorialInputBinder* AASFGameModeBase::GetOrCreatetutorialInputBinder() {
    return NULL;
}

float AASFGameModeBase::GetMissionProgress(FGameplayTag _MissionTag) const {
    return 0.0f;
}

void AASFGameModeBase::GetMissionObjectivesProgress(FGameplayTag _MissionTag, EnumObjectiveTier _ObjectiveType, int32& _TotalCount, int32& _SucceededCount, int32& _FailedCount, int32& _InvalidatedCount) const {
}

TArray<AObjective*> AASFGameModeBase::GetMissionObjectives(FGameplayTag _MissionTag) const {
    return TArray<AObjective*>();
}

int32 AASFGameModeBase::GetMaxLevel() const {
    return 0;
}

int32 AASFGameModeBase::GetLevelForXp(int32 _XP) const {
    return 0;
}

ULevelPrimaryDataAsset* AASFGameModeBase::GetLevelDataAsset() {
    return NULL;
}

float AASFGameModeBase::GetCampaignProgress() const {
    return 0.0f;
}

TArray<FCinematicSubtitle> AASFGameModeBase::ConvertCinematicDataTableToSubtitles(UDataTable* _DataTable, int32 _FrameRate) {
    return TArray<FCinematicSubtitle>();
}

FString AASFGameModeBase::CanSave_Implementation() {
    return TEXT("");
}

void AASFGameModeBase::BroadcastRoomClusterSet(ARoomCluster* _RoomCluster) {
}

void AASFGameModeBase::AddMarine_Implementation(AHumanoid* _Marine, bool bIsLoaded) {
}


