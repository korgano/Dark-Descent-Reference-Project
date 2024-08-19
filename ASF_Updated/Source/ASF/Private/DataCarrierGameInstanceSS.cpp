#include "DataCarrierGameInstanceSS.h"

UDataCarrierGameInstanceSS::UDataCarrierGameInstanceSS() {
}

void UDataCarrierGameInstanceSS::UpdateXpGainedDuringLastRun(int32 _XpGained) {
}

bool UDataCarrierGameInstanceSS::ShouldPlayMissionBrief() const {
    return false;
}

void UDataCarrierGameInstanceSS::SetUnreadCodexEntries(FGameplayTagContainer _Entries) {
}

void UDataCarrierGameInstanceSS::SetShouldPlayMissionBrief(bool _ShouldPlay) {
}

void UDataCarrierGameInstanceSS::SetObjectiveCompletedCount(int32 _ObjectiveCompletedCount) {
}

void UDataCarrierGameInstanceSS::SetMissionCompletionPercent(float _Percent) {
}

void UDataCarrierGameInstanceSS::SetMedbayCareDurationMultiplier(float _Multiplier) {
}

void UDataCarrierGameInstanceSS::SetMarines(TArray<FDataCarrierMarine> _Marines) {
}

void UDataCarrierGameInstanceSS::SetLastLaunchedMissionTag(FGameplayTag _MissionTag) {
}

void UDataCarrierGameInstanceSS::SetHiveSize(int32 _NewHiveSize) {
}

void UDataCarrierGameInstanceSS::SetCurrentCampaignTurn(int32 _NewCampaignTurn) {
}

void UDataCarrierGameInstanceSS::RemoveMarineFromDataCarrier(const FDataCarrierMarine& _Marine) {
}

void UDataCarrierGameInstanceSS::RemoveCivilianFromDataCarrier(FGameplayTag Civilian) {
}

FString UDataCarrierGameInstanceSS::RecoverStartingSubLevel() {
    return TEXT("");
}

void UDataCarrierGameInstanceSS::RecoverShuttleSuppliesAndResources(TMap<FGameplayTag, int32>& _Supplies, TMap<FGameplayTag, int32>& _Materials) {
}

TMap<FGameplayTag, int32> UDataCarrierGameInstanceSS::RecoverShuttleSupplies() {
    return TMap<FGameplayTag, int32>();
}

TMap<FGameplayTag, int32> UDataCarrierGameInstanceSS::RecoverShuttleResources() {
    return TMap<FGameplayTag, int32>();
}

FString UDataCarrierGameInstanceSS::RecoverEntryPointSelected() {
    return TEXT("");
}

void UDataCarrierGameInstanceSS::RecoverCivilians(FGameplayTag _Type, TArray<FDataCarrierCivilian>& OutCivilians) {
}

bool UDataCarrierGameInstanceSS::IsUsingSplitScreen() const {
    return false;
}

int32 UDataCarrierGameInstanceSS::GetXpGainedDuringLastRun() {
    return 0;
}

TArray<UXenoTech_DataAsset*> UDataCarrierGameInstanceSS::GetXenoTechs() const {
    return TArray<UXenoTech_DataAsset*>();
}

FGameplayTagContainer UDataCarrierGameInstanceSS::GetUnreadCodexEntries() const {
    return FGameplayTagContainer{};
}

TMap<FGameplayTag, int32> UDataCarrierGameInstanceSS::GetSupplies() const {
    return TMap<FGameplayTag, int32>();
}

TArray<FLevelDynamicObjectSaveStruct> UDataCarrierGameInstanceSS::GetSavedDynamicObjects() const {
    return TArray<FLevelDynamicObjectSaveStruct>();
}

TMap<FGameplayTag, int32> UDataCarrierGameInstanceSS::GetResources() const {
    return TMap<FGameplayTag, int32>();
}

int32 UDataCarrierGameInstanceSS::GetObjectiveCompletedCount() const {
    return 0;
}

TArray<FMissionStats> UDataCarrierGameInstanceSS::GetMissionStats() const {
    return TArray<FMissionStats>();
}

FMissionProgress UDataCarrierGameInstanceSS::GetMissionProgress() const {
    return FMissionProgress{};
}

FMissionEndedInfosStruct UDataCarrierGameInstanceSS::GetMissionInfos() const {
    return FMissionEndedInfosStruct{};
}

float UDataCarrierGameInstanceSS::GetMissionCompletionPercent() const {
    return 0.0f;
}

float UDataCarrierGameInstanceSS::GetMedbayCareDurationMultiplier() const {
    return 0.0f;
}

TArray<FDataCarrierMarine> UDataCarrierGameInstanceSS::GetMarines() const {
    return TArray<FDataCarrierMarine>();
}

bool UDataCarrierGameInstanceSS::GetMarine(int32 _Id, FDataCarrierMarine& _Marine) const {
    return false;
}

FGameplayTag UDataCarrierGameInstanceSS::GetLastLaunchedMissionTag() const {
    return FGameplayTag{};
}

int32 UDataCarrierGameInstanceSS::GetHiveSize() const {
    return 0;
}

TArray<FDataCarrierMarine> UDataCarrierGameInstanceSS::GetDeadMarines() const {
    return TArray<FDataCarrierMarine>();
}

int32 UDataCarrierGameInstanceSS::GetCurrentCampaignTurn() const {
    return 0;
}

TArray<FDataCarrierCivilian> UDataCarrierGameInstanceSS::GetCivilians() const {
    return TArray<FDataCarrierCivilian>();
}

void UDataCarrierGameInstanceSS::Flush() {
}

void UDataCarrierGameInstanceSS::FillStartingSubLevel(const FString& _StartingSubLevel) {
}

void UDataCarrierGameInstanceSS::FillShuttleSuppliesAndResources(TMap<FGameplayTag, int32> _Supplies, TMap<FGameplayTag, int32> _Materials) {
}

void UDataCarrierGameInstanceSS::FillEntryPointSelected(const FString& _SelectedEntryPoint) {
}

void UDataCarrierGameInstanceSS::ClearXenoTechs() {
}

void UDataCarrierGameInstanceSS::ClearSavedDynamicObjects() {
}

void UDataCarrierGameInstanceSS::ClearMarines() {
}

void UDataCarrierGameInstanceSS::ClearEntryPoint() {
}

void UDataCarrierGameInstanceSS::ClearCivilians() {
}

void UDataCarrierGameInstanceSS::AppendFillShuttleSuppliesAndResources(const TMap<FGameplayTag, int32>& _Supplies, const TMap<FGameplayTag, int32>& _Materials) {
}

void UDataCarrierGameInstanceSS::AddXenoTechs(const TArray<UXenoTech_DataAsset*>& _Assets) {
}

void UDataCarrierGameInstanceSS::AddSavedDynamicObjects(TArray<FLevelDynamicObjectSaveStruct> _Objects) {
}

void UDataCarrierGameInstanceSS::AddObjectiveCompletedCount() {
}

void UDataCarrierGameInstanceSS::AddMarineToDataCarrier(FDataCarrierMarine& _Marine) {
}

void UDataCarrierGameInstanceSS::AddDeadMarineToDataCarrier(FDataCarrierMarine& _Marine) {
}

void UDataCarrierGameInstanceSS::AddCivilianToDataCarrier(FDataCarrierCivilian& Civilian) {
}


