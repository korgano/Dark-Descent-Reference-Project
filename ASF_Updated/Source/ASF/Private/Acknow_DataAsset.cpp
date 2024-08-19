#include "Acknow_DataAsset.h"

UAcknow_DataAsset::UAcknow_DataAsset() {
    this->LineType = EAcknowLineType::ACKNOW;
    this->ForceHideNarrativeFeedback = false;
    this->Condition = EAcknowCondition::NONE;
    this->Trigger = EAcknowTrigger::SELECTION;
    this->Priority = 0;
    this->TolerablePostponement = 1.00f;
    this->InitialDelay = 0.00f;
    this->Cooldown = 10.00f;
    this->IsAcknowLocalizable = true;
}

bool UAcknow_DataAsset::CheckValidityAcknow_DataAsset(const UAcknow_DataAsset* DataAsset) {
    return false;
}


