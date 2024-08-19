#include "OtagoEvent.h"

FOtagoEvent::FOtagoEvent() {
    this->Type = EOtagoEventType::RANDOM;
    this->Priority = 0;
    this->bRepeatable = false;
    this->ConditionOperator = EOtagoEventConditionLogicalOperator::ALL_CONDITIONS;
}

