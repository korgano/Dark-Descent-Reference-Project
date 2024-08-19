#include "AssemblyChain_Robot.h"

AAssemblyChain_Robot::AAssemblyChain_Robot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RobotRange = 150.00f;
    this->SplineAlphaPosition = 0.00f;
    this->SplineAlphaRange = 0.00f;
}

void AAssemblyChain_Robot::UpdateOverlapEvent() {
}

void AAssemblyChain_Robot::SetSplinePosition(const FVector& _SplinePosition, float _SplineAlphaPosition, float _SplineAlphaRange) {
}

void AAssemblyChain_Robot::RemoveOverlappingObject(AAssemblyChain_Movable* _OverlappingObject) {
}

bool AAssemblyChain_Robot::IsAlphaOverlapping(float _Alpha) const {
    return false;
}

float AAssemblyChain_Robot::GetSplineAlphaRange() const {
    return 0.0f;
}

float AAssemblyChain_Robot::GetSplineAlphaPosition() const {
    return 0.0f;
}

float AAssemblyChain_Robot::GetRobotRange() const {
    return 0.0f;
}

void AAssemblyChain_Robot::AddOverlappingObject(AAssemblyChain_Movable* _OverlappingObject) {
}


