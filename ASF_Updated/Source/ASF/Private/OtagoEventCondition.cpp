#include "OtagoEventCondition.h"

FOtagoEventCondition::FOtagoEventCondition() {
    this->Type = EOtagoEventConditionType::ENGINEER_COUNT;
    this->Operator = EOtagoEventConditionComparisonOperator::EQUAL;
    this->bNot = false;
}

