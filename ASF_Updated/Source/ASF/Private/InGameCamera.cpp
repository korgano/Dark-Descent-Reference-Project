#include "InGameCamera.h"

AInGameCamera::AInGameCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorGrabbed = NULL;
    this->ActorToOrientCam = NULL;
    this->TimeMinBeforeForceRotation = 0.00f;
    this->CameraLagForceRotation = 1.00f;
}

void AInGameCamera::SetZoom_Implementation(float ArmLenghtTarget, bool IgnoreDelay) {
}

void AInGameCamera::SetTimeMinBeforeForceRotationAndCameraLag(float _TimeMinBeforeForceRotation, float _CameraLagForceRotation) {
}

void AInGameCamera::SetCameraArmLength_Implementation(float _NewArmLength) {
}

void AInGameCamera::SetActorToOrientCam(AActor* _NewActor) {
}

void AInGameCamera::SetActorToFocus_Implementation(AActor* ActorToFocus, bool SetFirstLocation) {
}

void AInGameCamera::RegisterEventForOrientCam(FEvent_FocusCam EventToCall) {
}

void AInGameCamera::RegisterEventForFocusCam(FEvent_FocusCam EventToCall) {
}



void AInGameCamera::InitCameraPosition() {
}

bool AInGameCamera::HasAnOrientCamEventBound() const {
    return false;
}

bool AInGameCamera::HasAnFocusCamEventBound() const {
    return false;
}

float AInGameCamera::GetTimeMinBeforeForceRotation() const {
    return 0.0f;
}

void AInGameCamera::GetTargetArmMinMax_Implementation(float& Min, float& Max) {
}

float AInGameCamera::GetGamepadCursorRadius_Implementation() const {
    return 0.0f;
}

UCamera_Tactical_DataAsset* AInGameCamera::GetCameraPDA_Implementation() const {
    return NULL;
}

float AInGameCamera::GetCameraLagForceRotation() const {
    return 0.0f;
}

float AInGameCamera::GetCameraArmLength_Implementation() const {
    return 0.0f;
}

AActor* AInGameCamera::GetActorToOrientCam() const {
    return NULL;
}

void AInGameCamera::ForceZoom_Implementation(float ArmLenghtTarget, bool IgnoreDelay, bool bOverideZoomLagValue, float OveriddedZoomLagValue) {
}

void AInGameCamera::ClearEventOrientCam() {
}

void AInGameCamera::ClearEventFocusCam() {
}


void AInGameCamera::CallOrientCam() {
}

void AInGameCamera::CallFocusCam() {
}


