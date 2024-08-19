#include "APCMovementTriggerInfo.h"

UAPCMovementTriggerInfo::UAPCMovementTriggerInfo() {
    this->TriggerLabel = TEXT("Default__APCMovementTriggerInfo");
    this->MovementType = EAPCMovementTriggerType::APC_LEFT;
    this->CheckOrderMovementType = false;
    this->OrderMovement = EMovementOrderFrom::ORDEREDBYGAMELOGIC;
}


