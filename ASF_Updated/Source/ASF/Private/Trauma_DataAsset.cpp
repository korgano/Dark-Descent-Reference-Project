#include "Trauma_DataAsset.h"

UTrauma_DataAsset::UTrauma_DataAsset() {
    this->CanBeHealedByAsylum = true;
    this->NumberTurnAutoHeal = 0;
}

FString UTrauma_DataAsset::LevelToString(int32 _i) {
    return TEXT("");
}

bool UTrauma_DataAsset::Greater_TraumaTrauma(const FTraumaApplied& _A, const FTraumaApplied& _B) {
    return false;
}

FText UTrauma_DataAsset::GetDescription(const FTraumaApplied& _Trauma) {
    return FText::GetEmpty();
}


