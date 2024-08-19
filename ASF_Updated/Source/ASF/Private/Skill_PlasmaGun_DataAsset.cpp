#include "Skill_PlasmaGun_DataAsset.h"

USkill_PlasmaGun_DataAsset::USkill_PlasmaGun_DataAsset() {
    this->Damage = NULL;
    this->DamageInterval = 0.10f;
    this->FireDuration = 2.00f;
    this->FireDelay = 1.00f;
    this->EndSkillDelay = 0.50f;
    this->DamageZone_HalfSize = 100.00f;
    this->WallCollisionZone_HalfSize = 10.00f;
}


