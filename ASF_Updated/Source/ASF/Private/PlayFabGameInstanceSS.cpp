#include "PlayFabGameInstanceSS.h"

UPlayFabGameInstanceSS::UPlayFabGameInstanceSS() {
    this->campaign_index = 0;
    this->timeAfterLoad = 0.00f;
    this->CreatedShelter = false;
}

void UPlayFabGameInstanceSS::WoundEvent(AHumanoid* Humanoid, const FDamageResultStruct& DamageResult) {
}

void UPlayFabGameInstanceSS::UpgradeWeaponEvent(const FWeaponUpgrade& Upgrade, const int32& remaining) {
}

void UPlayFabGameInstanceSS::UpdateTimePhaseForMissionEnd(UFactionSystemic* _Systemic, const FGameplayTag& _OldPhase, const FGameplayTag& _NewPhase) {
}

void UPlayFabGameInstanceSS::UpdateMissionEndStructWeldDoor() {
}

void UPlayFabGameInstanceSS::UpdateMissionEndStructEnemyKilled() {
}

void UPlayFabGameInstanceSS::TryToConnect(const FString& CustomId) {
}

void UPlayFabGameInstanceSS::TraumaEvent(const FString& trauma_id, const int32& marine_id) {
}

void UPlayFabGameInstanceSS::TickTorchDuration(float Tick) {
}

void UPlayFabGameInstanceSS::SquadLocationTimer() {
}

void UPlayFabGameInstanceSS::SkillUseEvent(AHumanoidTactical* Marine, USkill_DataAsset* Skill, const int32& QuantityBeforeUse) {
}

void UPlayFabGameInstanceSS::ReloadNoAmmoPFEvent() {
}

void UPlayFabGameInstanceSS::ReiniCreatedShelter() {
}

void UPlayFabGameInstanceSS::OnSubLevelHandlerSetForPlayFab(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

void UPlayFabGameInstanceSS::MoneyChangeEvent(const int32& Amount, const FString& Context) {
}

void UPlayFabGameInstanceSS::MissionEndEvent() {
}

void UPlayFabGameInstanceSS::MarineLevelUpEvent(AHumanoid* Marine, int32 NbLevelsUp) {
}

void UPlayFabGameInstanceSS::MarineDeathEvent(AHumanoidMarine* Marine, const FDamageResultStruct& _DamageResult) {
}

void UPlayFabGameInstanceSS::MarineChooseClassEvent(const FChooseMarineClassInfosStruct& MarineClassStruct) {
}

void UPlayFabGameInstanceSS::MarineChooseAttributeEvent(const FChooseAttributeInfosStruct& ChooseAttributeStruct) {
}

void UPlayFabGameInstanceSS::HideEvent(const int32& SquadSize) {
}

FString UPlayFabGameInstanceSS::GetTextStringKey(const FText& textKey) {
    return TEXT("");
}

void UPlayFabGameInstanceSS::EnablePlayfab() {
}

void UPlayFabGameInstanceSS::DisablePlayfab() {
}

void UPlayFabGameInstanceSS::DailyChoiceEvent(const FDailyEventInfosStruct& DailyEventStruct) {
}

void UPlayFabGameInstanceSS::CreateShelterPFEvent() {
}

bool UPlayFabGameInstanceSS::CheckIfLoggedIn() {
    return false;
}

void UPlayFabGameInstanceSS::BuildMandatoryInfosStruct() {
}


