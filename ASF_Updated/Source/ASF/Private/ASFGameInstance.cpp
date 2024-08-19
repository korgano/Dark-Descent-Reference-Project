#include "ASFGameInstance.h"

UASFGameInstance::UASFGameInstance() {
    this->WelcomeScreenMap = TEXT("/Game/Maps/MainMenu/LVL_StartUp");
    this->MainMenuMap = TEXT("/Game/Maps/MainMenu/LVL_MainMenu");
    this->OtagoMap = TEXT("/Game/Maps/Otago/LVL_Otago_MASTER");
    this->PrologueMap = TEXT("/Game/Maps/Mission/LVL_SS_Prologue/LVL_SS_Prologue_Persistent");
    this->WaterkMarkWidget = NULL;
    this->ConfigValueNoWaterMark = TEXT("Toto");
    this->SkillsDataTable = NULL;
    this->DifficultyParametersDataAsset = NULL;
    this->CampaignProgressDataAsset = NULL;
    this->LoadingTipsDataTable = NULL;
    this->LocalizedEnumsDataTable = NULL;
    this->bShowRunTime = false;
    this->SavedRunTime = 0.00f;
    this->ActivityQuickLaunch = EActivityQuickLaunch::NoQuickLaunch;
}

void UASFGameInstance::SwitchUser() {
}

void UASFGameInstance::StartActivity(const FString& ActivityId) const {
}

void UASFGameInstance::ShowWaitingPopUp(const FString& MapName, EWaitingPopUpButton Button) {
}

void UASFGameInstance::ShowLoadingScreen(const FString& MapName) {
}

void UASFGameInstance::SetCursorKeyboardrWidget_Implementation(UCursorKeyboardrWidget* Cursor) {
}

void UASFGameInstance::SetActivityAvailability(const FString& ActivityId, bool bAvailable) const {
}

void UASFGameInstance::ReturnToWelcomeScreen() {
}

void UASFGameInstance::ReturnToOtago() {
}

void UASFGameInstance::ReturnToMainMenu() {
}

void UASFGameInstance::ResetUserSettings(FGameplayTag _SettingsDataTableTag) {
}

void UASFGameInstance::ResetAllActivities() const {
}

void UASFGameInstance::OnUserSettingsInitialized(bool Success) {
}

void UASFGameInstance::OnUserSettingIntValueChanged_Implementation(FGameplayTag _SettingTag, int32 _Value) {
}

void UASFGameInstance::OnUserSettingFloatValueChanged_Implementation(FGameplayTag _SettingTag, float _Value) {
}

void UASFGameInstance::OnUserSettingByteValueChanged_Implementation(FGameplayTag _SettingTag, uint8 _Value) {
}

void UASFGameInstance::OnUserSettingBoolValueChanged_Implementation(FGameplayTag _SettingTag, bool _Value) {
}

void UASFGameInstance::LoadOtago(const FString& _Option) {
}

void UASFGameInstance::LoadMission(const FString& MapName, const FString& Options, bool bShowLoadingScreen) {
}

void UASFGameInstance::LoadFirstMission(ECampaignLaunchMode _LaunchMode) {
}

void UASFGameInstance::InitUserSettings_Implementation() {
}

void UASFGameInstance::InitAudioSettings_Implementation() {
}

void UASFGameInstance::HideLoadingScreen() {
}

bool UASFGameInstance::HasMapInstalled(const FString& _MapName) {
    return false;
}

FGameplayTag UASFGameInstance::GetXenoTechProjectMissionTag(FGameplayTag _ProjectTag) const {
    return FGameplayTag{};
}

int32 UASFGameInstance::GetUserIndex() const {
    return 0;
}

USubLevelPrimaryDataAsset* UASFGameInstance::GetSubLevelDataAsset(FName LevelName, FName SubLevelName) const {
    return NULL;
}

USkill_DataAsset* UASFGameInstance::GetSkillDataAsset(FGameplayTag _SkillTag) const {
    return NULL;
}

float UASFGameInstance::GetMissionAverageDuration(FGameplayTag _MissionTag) const {
    return 0.0f;
}

FText UASFGameInstance::GetLocalizedEnumValue(UEnum* _Enum, uint8 _Value) const {
    return FText::GetEmpty();
}

UDataTable* UASFGameInstance::GetLoadingTipsDataTable() const {
    return NULL;
}

TArray<FLoadingTip> UASFGameInstance::GetLoadingTips(ELoadingTipCategory _Category) const {
    return TArray<FLoadingTip>();
}

ULevelPrimaryDataAsset* UASFGameInstance::GetLevelDataAssetWithMapName(const FString& _MapName) const {
    return NULL;
}

ULevelPrimaryDataAsset* UASFGameInstance::GetLevelDataAssetByTag(FGameplayTag _Tag) const {
    return NULL;
}

ULevelPrimaryDataAsset* UASFGameInstance::GetLevelDataAsset(FName LevelName) const {
    return NULL;
}

FGameplayTag UASFGameInstance::GetLastMissionTag(FName LevelName) const {
    return FGameplayTag{};
}

float UASFGameInstance::GetDetectionTimeMultiplier() const {
    return 0.0f;
}

int32 UASFGameInstance::GetDeathClockCampaignTurns() const {
    return 0;
}

FGameplayTag UASFGameInstance::GetDatapadTagFromAsset(UDataPad_DataAsset* _Asset) const {
    return FGameplayTag{};
}

UCursorKeyboardrWidget* UASFGameInstance::GetCursorKeyboardrWidget_Implementation() const {
    return NULL;
}

FGameplayTag UASFGameInstance::GetCurrentMissionTag() const {
    return FGameplayTag{};
}

ULevelPrimaryDataAsset* UASFGameInstance::GetCurrentLevelDataAsset() const {
    return NULL;
}

FCodexEntry UASFGameInstance::GetCodexEntry(FGameplayTag _EntryTag) const {
    return FCodexEntry{};
}

FCodexEntries UASFGameInstance::GetCodexEntriesWithMissionTag(FGameplayTag _CategoryTag, FGameplayTag _MissionTag) const {
    return FCodexEntries{};
}

void UASFGameInstance::GetAllLockedFeaturesAtStart(FGameplayTagContainer& LockedFeaturesAtStart) const {
}

float UASFGameInstance::GetAgressivenessIncrementationDelayModifierPerDifficulties() const {
    return 0.0f;
}

void UASFGameInstance::FinishLoadMap() {
}

void UASFGameInstance::EndActivity(const FString& ActivityId, EEndActivityStatus ActivityStatus) const {
}

void UASFGameInstance::DisplayLoadingScreen(bool bShow) {
}


void UASFGameInstance::CompleteAccessibilityScreen() {
}


