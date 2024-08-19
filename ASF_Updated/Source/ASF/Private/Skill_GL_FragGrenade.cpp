#include "Skill_GL_FragGrenade.h"

USkill_GL_FragGrenade::USkill_GL_FragGrenade() {
    this->FragGrenadeMode = EnumFragGrenadeMode::CLASSIC;
    this->HasFired = false;
}

void USkill_GL_FragGrenade::SpawnProjectile_Implementation() {
}

void USkill_GL_FragGrenade::OnAimingFinished_Implementation() {
}


