#include "Medbay.h"

AMedbay::AMedbay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BasePhysicianCount = 1;
    this->MaxPhysicianCount = 5;
    this->Physicians = 1;
    this->AssignedPhysicians = 0;
    this->CareDurationPerLostHealth = 1.00f;
    this->MaxCareDuration = 10;
    this->PhysicianAssignmentCareDurationReduction = 1;
    this->CareDurationReduction = 0;
    this->ProsthesisMaterialsCost = 10;
    this->DisabledPassiveCareDuration = 0;
    this->bFirstVisitSinceMission09 = false;
}

void AMedbay::SortWoundedMarines(TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines) {
}

void AMedbay::RemoveWoundedMarine(int32 _MarineID) {
}

void AMedbay::RemovePhysicians(int32 _Count) {
}

bool AMedbay::HasAvailablePhysician() const {
    return false;
}

void AMedbay::GetWoundedMarines(TArray<AHumanoid*>& _WoundedMarines) {
}

FWoundedMarine AMedbay::GetWoundedMarine(int32 _MarineID) const {
    return FWoundedMarine{};
}

int32 AMedbay::GetAvailablePhysicians() const {
    return 0;
}

bool AMedbay::CanAffordProsthesis() const {
    return false;
}

void AMedbay::AssignProsthesis(int32 _MarineID) {
}

void AMedbay::AssignPhysician(int32 _MarineID) {
}

bool AMedbay::AddWoundedMarine(AHumanoid* _Marine, float _CareDurationMultiplier) {
    return false;
}

void AMedbay::AddPhysicians(int32 _Count) {
}

void AMedbay::AddPhysician() {
}

void AMedbay::AddDisabledPassiveCareDuration(int32 _Turns) {
}

void AMedbay::AddCareDuration(AHumanoid* _Marine, int32 _CareDuration) {
}


