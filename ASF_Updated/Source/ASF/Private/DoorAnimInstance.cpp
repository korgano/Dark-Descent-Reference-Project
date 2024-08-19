#include "DoorAnimInstance.h"

UDoorAnimInstance::UDoorAnimInstance() {
    this->IsSequencer = false;
    this->FadeInSequencerTime = 0.20f;
    this->FadeOutSequencerTime = 0.20f;
    this->FadeOutSequencerTimeDelayed2Frames = 0.20f;
    this->IsOpen = false;
    this->AnimSequence = NULL;
}

void UDoorAnimInstance::ToggleTickEnabled(bool bEnabled) {
}

bool UDoorAnimInstance::SetAnimationAsset(UAnimationAsset* NewAsset) {
    return false;
}

void UDoorAnimInstance::RequestNextUpdateBroadcast() {
}

void UDoorAnimInstance::OpenFinished() {
}

void UDoorAnimInstance::Open(float PlayRate, float StartPosition, bool bNoAnim) {
}

void UDoorAnimInstance::OnProxyRequestUpdate() {
}

void UDoorAnimInstance::Init(bool NewOpen) {
}

void UDoorAnimInstance::CloseFinished() {
}

void UDoorAnimInstance::Close(float PlayRate, float StartPosition, bool bNoAnim) {
}


