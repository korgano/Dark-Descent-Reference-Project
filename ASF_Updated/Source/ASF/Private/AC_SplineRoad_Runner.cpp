#include "AC_SplineRoad_Runner.h"

UAC_SplineRoad_Runner::UAC_SplineRoad_Runner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultVelocityMax = 1000.00f;
    this->DefaultAcceleration = 50.00f;
    this->DefaultDeceleration = 100.00f;
    this->VelocityMax = 1000.00f;
    this->Acceleration = 50.00f;
    this->Deceleration = 100.00f;
    this->bIsRunning = false;
    this->CurrentVelocity = 0.00f;
    this->ForceVelocityCoef = 1.00f;
}

void UAC_SplineRoad_Runner::UpdateRotationXY() {
}

void UAC_SplineRoad_Runner::UpdateRegisterPath(FSplineRoad_Location _NewLocation) {
}

void UAC_SplineRoad_Runner::UpdateLocation(float _DeltaTime) {
}

void UAC_SplineRoad_Runner::SetDestinationLocation(FSplineRoad_Location Destination) {
}

void UAC_SplineRoad_Runner::Run(bool _Run) {
}

void UAC_SplineRoad_Runner::RemoveRoadTrigger(FAPCRoadProgressForTrigger& Trigger) {
}

void UAC_SplineRoad_Runner::PlaceInPosition() {
}

void UAC_SplineRoad_Runner::OnApcRegister(AASFGameState_TacticalMode* GameState, AExtractionTransport* ExtractionTransport) {
}

float UAC_SplineRoad_Runner::GetPathRemainingDist(const TArray<ASplineRoad*>& _Path, FSplineRoad_Location _Start, FSplineRoad_Location _Dest) {
    return 0.0f;
}

FSplineRoad_Location UAC_SplineRoad_Runner::GetLocationAheadInPath(float Dist) {
    return FSplineRoad_Location{};
}

TArray<ASplineRoad*> UAC_SplineRoad_Runner::FindPathTo(FSplineRoad_Location Destination) {
    return TArray<ASplineRoad*>();
}

void UAC_SplineRoad_Runner::Debug_MoveToDest() {
}

void UAC_SplineRoad_Runner::AddRoadTrigger(FAPCRoadProgressForTrigger& NewTrigger) {
}


