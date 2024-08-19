#include "AC_Trauma.h"

UAC_Trauma::UAC_Trauma(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Humanoid = NULL;
    this->PDA_TraumaHandler = NULL;
}

void UAC_Trauma::RemoveTrauma() {
}

void UAC_Trauma::IncreaseTraumaPoint(int32 _TraumaPoint) {
}

bool UAC_Trauma::HasTraumaPoint() const {
    return false;
}

bool UAC_Trauma::HasTrauma(const FGameplayTag& _Tag) const {
    return false;
}

bool UAC_Trauma::HasAnyTrauma() const {
    return false;
}

FTraumaApplied UAC_Trauma::GetTrauma() const {
    return FTraumaApplied{};
}

int32 UAC_Trauma::GetTotalTraumaPoints() const {
    return 0;
}

void UAC_Trauma::DecreaseTraumaPoint(int32 _TraumaPoint) {
}

void UAC_Trauma::ApplyTraumasAutoHealTurn() {
}

void UAC_Trauma::ApplyTrauma(const FTraumaApplied& _Trauma) {
}

void UAC_Trauma::AddTraumaWithForcedTurnAutoHeal(UTrauma_DataAsset* _Trauma, int32 _ForcedTurnAutoHeal) {
}

void UAC_Trauma::AddTrauma(const FTraumaApplied& _Trauma) {
}


