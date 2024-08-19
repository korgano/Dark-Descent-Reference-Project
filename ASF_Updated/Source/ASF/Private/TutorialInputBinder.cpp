#include "TutorialInputBinder.h"
#include "DynamiqueSaveLoadComponent.h"
#include "Templates/SubclassOf.h"

ATutorialInputBinder::ATutorialInputBinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DynamicSaveLoadComponent = CreateDefaultSubobject<UDynamiqueSaveLoadComponent>(TEXT("DynamicSaveLoadComponent"));
    this->TutoInteractActor = NULL;
}

bool ATutorialInputBinder::ShouldConsumeInputSkillShotTutoReleased_Implementation() {
    return false;
}

bool ATutorialInputBinder::ShouldConsumeInputSkillShotTuto_Implementation() {
    return false;
}

bool ATutorialInputBinder::ShouldConsumeInputMoveTutoRunning_Implementation() {
    return false;
}

bool ATutorialInputBinder::ShouldConsumeInputMoveTuto_Implementation() {
    return false;
}

bool ATutorialInputBinder::ShouldConsumeInputInteractionTutoPart2_Implementation() {
    return false;
}

bool ATutorialInputBinder::ShouldConsumeInputInteractionTuto_Implementation() {
    return false;
}

bool ATutorialInputBinder::ShouldConsumeInputForceSkillShotReleased_Implementation() {
    return false;
}

bool ATutorialInputBinder::ShouldConsumeInputDetectionTutoPart3_Implementation() {
    return false;
}

bool ATutorialInputBinder::ShouldConsumeInputDetectionTutoPart2_Implementation() {
    return false;
}

void ATutorialInputBinder::SetActive(bool _Active) {
}

void ATutorialInputBinder::ReleaseAxis(const TArray<FName>& _AxisToRelease, bool UseForceArray) {
}

void ATutorialInputBinder::ReleaseAll() {
}

void ATutorialInputBinder::ReleaseActions(const TArray<FName>& _ActionToRelease, bool UseForceArray) {
}

void ATutorialInputBinder::RefreshBindings() {
}

void ATutorialInputBinder::OnMissionLoaded(AASFGameModeBase_TacticalMode* GameMode) {
}

void ATutorialInputBinder::OnKeyEvent() {
}

void ATutorialInputBinder::OnAxisEvent(float _Value) {
}

void ATutorialInputBinder::LaunchSkillShotTutoReleased() {
}

void ATutorialInputBinder::LaunchSkillShotTuto() {
}

void ATutorialInputBinder::LaunchMoveTuto() {
}

void ATutorialInputBinder::LaunchMoveRunningTuto() {
}

void ATutorialInputBinder::LaunchInteractionTuto(AActor* _TutoInteractActor) {
}

void ATutorialInputBinder::LaunchDetectionP3Tuto() {
}

void ATutorialInputBinder::LaunchDetectionP2Tuto() {
}

void ATutorialInputBinder::LaunchDetectionP1Tuto() {
}

void ATutorialInputBinder::ForceSkillShotToZone(TSubclassOf<USkill> SkillClass, ASkillRestrictedLaunchZone* LaunchZone) {
}

void ATutorialInputBinder::BlockAxis(const TArray<FName>& _AxisToBlock, bool UseForceArray) {
}

void ATutorialInputBinder::BlockActions(const TArray<FName>& _ActionToBlock, bool UseForceArray) {
}


