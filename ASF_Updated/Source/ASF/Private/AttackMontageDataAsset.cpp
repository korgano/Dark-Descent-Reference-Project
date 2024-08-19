#include "AttackMontageDataAsset.h"

UAttackMontageDataAsset::UAttackMontageDataAsset() {
    this->AttackAnim = NULL;
    this->AttackStrenght = EnumAttackStrenght::LIGHT;
    this->IsSwitchFootAttack = false;
    this->MemberUsed = EnumAlienAttackMemberUsed::LEFT_ARM;
    this->AttackSideOnMarines = EnumAlienAttackSide::FROM_FRONT;
    this->AttackType = EnumAlienAttackType::NONE;
    this->HeightAttack = EnumCharacterHeightState::REGULAR_HEIGHT;
    this->StartTime = 0.00f;
}


