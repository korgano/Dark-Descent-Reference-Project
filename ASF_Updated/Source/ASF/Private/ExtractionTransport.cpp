#include "ExtractionTransport.h"
#include "Components/AudioComponent.h"

AExtractionTransport::AExtractionTransport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("PilotVoiceComponent"));
    this->PilotVoiceComponent = (UAudioComponent*)RootComponent;
    this->PiloteVoiceProfile = EVoiceProfile::NONE;
    this->inLeaveMission = false;
    this->ReasonWhenLeaveWithTransport = EnumDestroyReason::EXTRACTED;
    this->EnumNavigationFeedbackType = EnumNavigationFeedbackType::APC;
    this->bRegisterAsExtractionTransport = true;
    this->LastMovementOrder = EMovementOrderFrom::ORDEREDBYGAMELOGIC;
    this->bHumanoidShouldCrouch = false;
}

void AExtractionTransport::ReserveEntrance() {
}

void AExtractionTransport::ReleaseEntrance() {
}

void AExtractionTransport::OnPilotVoiceAudioFinished() {
}

void AExtractionTransport::OnActiveSubLevelChanged(AASFGameState_TacticalMode* GameState, const FString& ExtractionTransportType, const FString& ActiveSubLevel) {
}

void AExtractionTransport::MakeMarineLeaveAPC_Implementation() {
}

void AExtractionTransport::LeaveMission_Implementation() {
}

bool AExtractionTransport::IsEntranceReserved() const {
    return false;
}

void AExtractionTransport::HandleRemovedFromPlay_Implementation() {
}

void AExtractionTransport::HandleAddedToPlay_Implementation() {
}

FString AExtractionTransport::GetSubLevel() const {
    return TEXT("");
}

FTransform AExtractionTransport::GetInteractionTransform_Implementation() {
    return FTransform{};
}

FVector AExtractionTransport::GetClosestAccessPoint_Implementation(ACharacter* _Character) {
    return FVector{};
}

FVector AExtractionTransport::GetAPCLeavingFormationPoint(const int32 ID, FVector& LocationToRotate) const {
    return FVector{};
}

FVector AExtractionTransport::GetAPCEnteringFormationPoint(const int32 ID, FVector& LocationToRotate) const {
    return FVector{};
}

void AExtractionTransport::EnterOrLeaveTransport_Implementation(bool Enter, AASFCharacter* _Character) {
}

void AExtractionTransport::AskCameraFollow_Implementation(bool _Ask, int32 _CameraIndex) {
}


