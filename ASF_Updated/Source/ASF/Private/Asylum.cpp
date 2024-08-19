#include "Asylum.h"

AAsylum::AAsylum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TreatmentTraumaPointsPerTurn = 1;
    this->BaseMinTreatmentTurns = 1;
    this->BaseMaxTreatmentTurns = 4;
    this->MinTreatmentTurns = 0;
    this->MaxTreatmentTurns = 0;
    this->TreatmentSlotCount = 4;
}

void AAsylum::TreatMarine(AHumanoid* _Marine) {
}

void AAsylum::StopTreatment(int32 _MarineID) {
}

void AAsylum::SortTreatedMarinesByCareDuration(TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines) {
}

void AAsylum::SortMarinesByCareDuration(TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines) {
}

bool AAsylum::IsMarineTreated(int32 _MarineID) const {
    return false;
}

bool AAsylum::HasAvailableSlot() const {
    return false;
}

int32 AAsylum::GetTreatmentDuration(const AHumanoid* _Marine) const {
    return 0;
}

FTreatedMarine AAsylum::GetTreatedMarine(int32 _MarineID) const {
    return FTreatedMarine{};
}

int32 AAsylum::GetRemainingTurnsToRecovery(AHumanoid* _Marine) const {
    return 0;
}

int32 AAsylum::GetAvailableSlots() const {
    return 0;
}


