#include "DamageResultStruct.h"

FDamageResultStruct::FDamageResultStruct() {
    this->DamageDone = 0.00f;
    this->bBlockByArmor = false;
    this->OldWoundState = EnumWound::FULL_LIFE;
    this->NewWoundState = EnumWound::FULL_LIFE;
    this->DamageReceiver = NULL;
    this->IsCritical = false;
}

