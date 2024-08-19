#include "Skill_GL_OtagoBarrageFire_PDA.h"

USkill_GL_OtagoBarrageFire_PDA::USkill_GL_OtagoBarrageFire_PDA() {
    this->ExplosionDataAsset = NULL;
    this->Sound_Launch = NULL;
    this->TotalRadius = 2000.00f;
    this->InitialDelay = 1.50f;
    this->VolleyDuration = 10.00f;
    this->OuterAimedLocationsNumber = 10;
    this->InnerAimedLocationsNumber = 7;
    this->MissileTrajectoryAngle = 45.00f;
    this->MissileDepartureHeight = 3000.00f;
    this->FlareDuration = 3.00f;
}


