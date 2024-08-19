#include "Skill_Diversion_DataAsset.h"

USkill_Diversion_DataAsset::USkill_Diversion_DataAsset() {
    this->ThrowingRange = 6000.00f;
    this->ThrowingVelocity = 1500.00f;
    this->ThrowStartHeight = 100.00f;
    this->ThrowApexHeight = 300.00f;
    this->DiversionRadius = 2500.00f;
    this->DiversionDuration = 6.00f;
    this->DiversionSound = NULL;
}

FText USkill_Diversion_DataAsset::GetAccuracyBonus(const UObject* WorldContextObject) const {
    return FText::GetEmpty();
}


