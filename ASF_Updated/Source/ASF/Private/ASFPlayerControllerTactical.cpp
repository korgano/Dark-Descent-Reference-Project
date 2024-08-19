#include "ASFPlayerControllerTactical.h"

AASFPlayerControllerTactical::AASFPlayerControllerTactical(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->HoldInteractInput = false;
    this->CrouchUndercoverToggle = false;
    this->GamepadBindingType_IG = EGamepadBindingType::RESPECT_INPUT_A_SELECTION;
    this->TimeHoverDisplayedAfterRelease = 0.30f;
    this->TimeBeforeHoverIsDisplayed = 0.15f;
    this->ConcurentWidget = EConcurentWidget::DEFAULT;
    this->MarineCardSelected = NULL;
    this->HoveredInteraction = NULL;
    this->ActivityClass_PlayerFocus = NULL;
    this->Activity_PlayerFocus = NULL;
    this->CursorRoomClusterFilter = NULL;
    this->IsMoveToCursorValid = false;
    this->EscapeMenu = NULL;
    this->Map = NULL;
    this->ChartmapTable = NULL;
    this->ChoiceMenu = NULL;
    this->CurrentSecurityCamera = NULL;
}

void AASFPlayerControllerTactical::UpdateCoverToggle_Implementation(bool Crouch) {
}

void AASFPlayerControllerTactical::ToggleMinimapWithoutChangeType_Implementation() {
}

void AASFPlayerControllerTactical::ToggleMinimap_Implementation(EMinimapType MinimapType) {
}

void AASFPlayerControllerTactical::SetTMMainGUI_Implementation(UTMMainWidget* _Main) {
}

void AASFPlayerControllerTactical::SetInSecurityCameraView_Implementation(bool _B) {
}

void AASFPlayerControllerTactical::SetHoveredInteraction(UInteractiveComponent* _Interaction) {
}

void AASFPlayerControllerTactical::SetHoldInteractInput(bool _HoldInteractInput) {
}

void AASFPlayerControllerTactical::SetCurrentSecurityCamera(ASecurityCamera* NewSecurityCamera) {
}

void AASFPlayerControllerTactical::SetConcurentWidget_Implementation(EConcurentWidget _ConcurentWidget) {
}

void AASFPlayerControllerTactical::SetChoiceMenu(UTMPlayerChoiceWidget* _ChoiceMenu) {
}

void AASFPlayerControllerTactical::SetCanDisplayCover_Implementation(bool Display) {
}

void AASFPlayerControllerTactical::Retribution_Implementation() {
}

void AASFPlayerControllerTactical::ReleaseInteractInput() {
}

void AASFPlayerControllerTactical::PressInteractInput() {
}

void AASFPlayerControllerTactical::OpenSkillMenu_Implementation() {
}

void AASFPlayerControllerTactical::OpenCodex_Implementation() {
}

void AASFPlayerControllerTactical::OnSquadLeaderChanged(ASquad* Squad, AHumanoidMarine* Leader) {
}

bool AASFPlayerControllerTactical::IsModalWindowOpen_Implementation() const {
    return false;
}

bool AASFPlayerControllerTactical::IsInSecurityCameraView_Implementation() const {
    return false;
}

bool AASFPlayerControllerTactical::IsHoveringCover_Implementation() const {
    return false;
}

bool AASFPlayerControllerTactical::IsActionMenuOpen_Implementation() const {
    return false;
}

UTMMapWidget* AASFPlayerControllerTactical::GetTMMapGUI_Implementation() const {
    return NULL;
}

UTMMainWidget* AASFPlayerControllerTactical::GetTMMainGUI_Implementation() const {
    return NULL;
}

bool AASFPlayerControllerTactical::GetHoldInteractInput() const {
    return false;
}

TArray<UMapFeedbackData_UserWidget*> AASFPlayerControllerTactical::GetGrapnelWidgets_Implementation() {
    return TArray<UMapFeedbackData_UserWidget*>();
}

float AASFPlayerControllerTactical::GetDynamicTutoHoldPercent_Implementation() const {
    return 0.0f;
}

ASecurityCamera* AASFPlayerControllerTactical::GetCurrentSecurityCamera() const {
    return NULL;
}

void AASFPlayerControllerTactical::DisplayUpperMapWidgetSubLevel_Implementation() {
}

void AASFPlayerControllerTactical::DisplayDownerMapWidgetSubLevel_Implementation() {
}

void AASFPlayerControllerTactical::CloseSkillMenu_Implementation() {
}

void AASFPlayerControllerTactical::CloseMinimap_Implementation() {
}

void AASFPlayerControllerTactical::ChartmapTableRevealClick_Implementation() {
}

void AASFPlayerControllerTactical::ChangeBindingType_Implementation(EGamepadBindingType _GamepadBindingType_IG) {
}

void AASFPlayerControllerTactical::BroadcastDynamicTutorialHoldStateChanged(bool NewState) {
}


