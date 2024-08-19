#include "ASFPlayerController.h"
#include "CommonSaveLoadComponent.h"
#include "UIVisibilityComponent.h"

AASFPlayerController::AASFPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->WaterMark = NULL;
    this->CommonSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->UIVisibilityComponent = CreateDefaultSubobject<UUIVisibilityComponent>(TEXT("UIVisibilityComponent"));
    this->DoorOverlapChannel = ObjectTypeQuery1;
    this->bShiftIsPressed = false;
    this->bAlternativeCommandIsPressed = false;
    this->bCombatMenuPressed = false;
    this->bCombatDataPressed = false;
    this->bInputActionOrderPressed = false;
    this->bIsInMinimap = false;
    this->bIsMapLoading = false;
    this->InputActionBinder = NULL;
    this->WheelHandler = NULL;
    this->MinimapHandler = NULL;
    this->SelectedActor = NULL;
    this->HoveredActor = NULL;
    this->AskDisplayInteractiveObject = false;
    this->SquadMode = ESquadMode::Default;
    this->SelectedSkill = NULL;
    this->HoveredSkill = NULL;
    this->SelectedOverlay = NULL;
    this->WidgetCard_Member_Selected = NULL;
    this->CinematicModeAmbienceSoundVolume = 0.50f;
    this->DialogueSoundIsPlaying = false;
    this->DialogueAudioComponent = NULL;
    this->ControllerTypeSwitchAxisMinDelta = 0.20f;
    this->LastNavigationDirection = EUINavigation::Invalid;
    this->bDPadNavigationEnabled = true;
    this->Cursor3D = NULL;
    this->InputImagesDataTable = NULL;
    this->PlayerActionToInputName = NULL;
    this->MarineRenderTarget = NULL;
    this->ItemRenderTarget = NULL;
    this->CheatMenuWidget = NULL;
    this->CheatWindow = NULL;
    this->CheatRunTime = NULL;
}

void AASFPlayerController::UpdateSoundMasterClassSlowMo_Implementation() {
}

void AASFPlayerController::UpdateCursorPosition() {
}

void AASFPlayerController::ToggleCheatWindow() {
}

void AASFPlayerController::ToggleCheatMenu() {
}


void AASFPlayerController::StopDialogueSound() {
}

bool AASFPlayerController::ShouldDisplayCursor() const {
    return false;
}

void AASFPlayerController::SetWidgetCard_Member_Selected(UTinda_UserWidget* _newCard) {
}


void AASFPlayerController::SetTutorialState(ETutorialState _TutorialState) {
}

void AASFPlayerController::SetSquadMode(ESquadMode _SquadMode) {
}

void AASFPlayerController::SetSoundGroupVolume(const FString& _SoundGroup, float _Volume) {
}

void AASFPlayerController::SetSoftwareCursor(TEnumAsByte<EMouseCursor::Type> _Type, FSoftClassPath _ClassPath) {
}

void AASFPlayerController::SetSelectedSkill(USkill* _Skill) {
}

void AASFPlayerController::SetIsInminimap(bool bNewMinimap, EMinimapType _Type) {
}

void AASFPlayerController::SetInputActionBinder(AInputActionBinder* _InputActionBinder) {
}

void AASFPlayerController::SetHoveredSkill(USkill* _Skill) {
}

bool AASFPlayerController::SetHoveredActor(AActor* NewActorHovered) {
    return false;
}

void AASFPlayerController::SetDPadNavigationEnabled(bool _Enabled) {
}

void AASFPlayerController::SetCursorVisibility(bool bVisible) {
}

void AASFPlayerController::SetClientViewportMousePosition(int32 X, int32 Y) {
}

void AASFPlayerController::SetAmbienceSoundVolume(float _Volume) {
}

void AASFPlayerController::SelectOverlay(UOverlay_WidgetComponent* _Overlay) {
}

bool AASFPlayerController::SelectActor(AActor* NewActorToSelect) {
    return false;
}

void AASFPlayerController::RestoreDefaultInputMappings() {
}

void AASFPlayerController::ReplaceWithInputImage(FText& Text, const TArray<FString>& InputImage) const {
}

void AASFPlayerController::ReplaceActionBinding(FName ActionName, FInputChord OldChord, FInputChord NewChord) {
}

void AASFPlayerController::RemoveGrapableActor(AActor* Actor) {
}

void AASFPlayerController::RemoveActionBinding(FName ActionName, FInputChord ChordToRemove) {
}

void AASFPlayerController::PlayNewDialogueSound(USoundBase* Sound) {
}

void AASFPlayerController::PausePhaseSoundTrack_Implementation(bool bPause) {
}

void AASFPlayerController::OpenActionMenu_Implementation(AHumanoidMarine* Marine) {
}

void AASFPlayerController::OnSquadCreated(AASFPlayerState* _PlayerState, ASquad* _Squad) {
}


void AASFPlayerController::OnMediaPlayerOpen_Implementation() {
}

void AASFPlayerController::OnMediaPlayerClosed_Implementation() {
}

void AASFPlayerController::OnMarineAddedToSquad(ASquad* _Squad, AHumanoidMarine* _Character) {
}

void AASFPlayerController::OnDialogueSoundFinished() {
}

void AASFPlayerController::OnControllerTypeChanged_Event(EnumControllerType NewType) {
}

bool AASFPlayerController::IsInTutorialMode() const {
    return false;
}

bool AASFPlayerController::IsInMinimap_Implementation() const {
    return false;
}

bool AASFPlayerController::IsInCinematicMode() const {
    return false;
}


bool AASFPlayerController::IsChordAlreadyMapped(const FInputActionKeyMapping& Mapping, FName ActionName, FInputChord Chord) {
    return false;
}

bool AASFPlayerController::IsCheatMenuVisible() const {
    return false;
}

ETutorialState AASFPlayerController::GetTutorialState() const {
    return ETutorialState::INACTIVE;
}

ASquad* AASFPlayerController::GetSquad() const {
    return NULL;
}

bool AASFPlayerController::GetShiftIsPressed() const {
    return false;
}

USkill* AASFPlayerController::GetSelectedSkill() {
    return NULL;
}

AActor* AASFPlayerController::GetSelectedActor() {
    return NULL;
}

TArray<FString> AASFPlayerController::GetPlayerActions(const FText& Text) const {
    return TArray<FString>();
}

AMinimapHandler* AASFPlayerController::GetMinimapHandler() const {
    return NULL;
}

UTextureRenderTarget2D* AASFPlayerController::GetMarineCaptureRenderTarget() {
    return NULL;
}

FKey AASFPlayerController::GetKeyForInputAxis(FName _AxisName) const {
    return FKey{};
}

FKey AASFPlayerController::GetKeyForInputAction(FName _ActionName, bool ForceGamepad) const {
    return FKey{};
}

UTextureRenderTarget2D* AASFPlayerController::GetItemCaptureRenderTarget() {
    return NULL;
}

FString AASFPlayerController::GetInputRichTextKeyByRowName(FName _RowName) const {
    return TEXT("");
}

FString AASFPlayerController::GetInputRichTextKeyByPlayerAction(FName _PlayerAction, const EnumControllerType& ControllerType) const {
    return TEXT("");
}

FString AASFPlayerController::GetInputRichTextKeyByKey(const FKey& _Key) const {
    return TEXT("");
}

FString AASFPlayerController::GetInputRichTextKeyByAxis(FName _AxisName) const {
    return TEXT("");
}

FString AASFPlayerController::GetInputRichTextKeyByAction(FName _ActionName) const {
    return TEXT("");
}

TSoftObjectPtr<UTexture2D> AASFPlayerController::GetInputIconByRowName(FName _RowName) const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AASFPlayerController::GetInputIconByKey(const FKey& _Key) const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AASFPlayerController::GetInputIconByAxis(FName _AxisName) const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AASFPlayerController::GetInputIconByAction(FName _ActionName, bool ForceGamepad) const {
    return NULL;
}

AInputActionBinder* AASFPlayerController::GetInputActionBinder() const {
    return NULL;
}

FVector AASFPlayerController::GetInputAction_LocationStart_Implementation() const {
    return FVector{};
}

USkill* AASFPlayerController::GetHoveredSkill() {
    return NULL;
}

bool AASFPlayerController::GetHitResultsAtScreenPosition(const FVector2D ScreenPosition, const TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<FHitResult>& HitResult) const {
    return false;
}

TArray<AActor*> AASFPlayerController::GetGrapableActors() {
    return TArray<AActor*>();
}

FString AASFPlayerController::GetFormattedInputRichTextKeyByAxis(FName _AxisName) const {
    return TEXT("");
}

FString AASFPlayerController::GetFormattedInputRichTextKeyByAction(FName _ActionName) const {
    return TEXT("");
}

FString AASFPlayerController::GetFormattedInputRichTextKey(const FKey& _Key) const {
    return TEXT("");
}

bool AASFPlayerController::GetDialogueSoundIsPlaying() {
    return false;
}

UAudioComponent* AASFPlayerController::GetDialogueAudioComponent() {
    return NULL;
}

FText AASFPlayerController::GetDescriptionWithInputImage(const FText& Text) const {
    return FText::GetEmpty();
}

FVector AASFPlayerController::GetCursorLocationForAction() {
    return FVector{};
}

FVector AASFPlayerController::GetCursorLocation() const {
    return FVector{};
}

TArray<UInputComponent*> AASFPlayerController::GetCurrentInputStack() {
    return TArray<UInputComponent*>();
}

UTextureRenderTarget2D* AASFPlayerController::GetCaptureRenderTarget() {
    return NULL;
}

TArray<AHumanoidTactical*> AASFPlayerController::GetAllSelectedMembersAsAHumanoidTactical() const {
    return TArray<AHumanoidTactical*>();
}

TArray<AHumanoidTactical*> AASFPlayerController::GetAllSelectedMembers() const {
    return TArray<AHumanoidTactical*>();
}

void AASFPlayerController::EscapeMenuOrDecoPopUpOpeningChanged_Implementation(UObject* _Ref, bool _B) {
}


void AASFPlayerController::CloseCombatMenu_Implementation(bool _bAnimated) {
}

void AASFPlayerController::CloseActionMenu_Implementation() {
}

void AASFPlayerController::ClearPauseAndSlowMo() {
}

void AASFPlayerController::AskSlowMo_Static(UObject* _Ref, bool _B) {
}

void AASFPlayerController::AskSlowMo(UObject* _Ref, bool _B) {
}

void AASFPlayerController::AskPause_Static(UObject* _Ref, bool _B) {
}

void AASFPlayerController::AskPause(UObject* _Ref, bool _B) {
}

void AASFPlayerController::AskHiddenCusor(UObject* _Ref, bool _Hidden) {
}

bool AASFPlayerController::ASFIsWorldPositionOnScreen(FVector WorldLocation) const {
    return false;
}

bool AASFPlayerController::ASFGetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const {
    return false;
}

bool AASFPlayerController::ASFGetHitResultsUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<FHitResult>& HitResult) const {
    return false;
}

bool AASFPlayerController::ASFDeprojectMousePositionToWorld(FVector& WorldLocation, FVector& WorldDirection) const {
    return false;
}

void AASFPlayerController::AddGrapableActor(AActor* _Actor) {
}

void AASFPlayerController::AddActionBinding(FName ActionName, FInputChord ChordToAdd) {
}


