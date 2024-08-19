#include "AnimInstanceVehicle.h"

UAnimInstanceVehicle::UAnimInstanceVehicle() {
    this->IsSequencer = false;
    this->FadeInSequencerTime = 0.20f;
    this->FadeOutSequencerTime = 0.20f;
    this->FadeOutSequencerTimeDelayed2Frames = 0.20f;
    this->fSpeed = 0.00f;
    this->fWheelAngle = 0.00f;
    this->fWheelAngleBL = 0.00f;
    this->fWheelAngleBR = 0.00f;
    this->fWheelAngleFL = 0.00f;
    this->fWheelAngleFR = 0.00f;
    this->fWheelRadius = 1.00f;
    this->fAngularVelocity = 0.00f;
    this->fCurrentOrientation = 0.00f;
    this->OpenDoor = false;
    this->BlockWheelRotation = false;
}

void UAnimInstanceVehicle::UpdateAngleWheel(FName& BoneNameWheel, FVector& CurrentLocationWheel, float& WheelAngle) {
}

void UAnimInstanceVehicle::TickLocomotion(float fDeltaTime) {
}


