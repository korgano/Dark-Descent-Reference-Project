#include "AlienClassDataAsset.h"

UAlienClassDataAsset::UAlienClassDataAsset() {
    this->AIDefaultState = EnumAiState::NONE;
    this->bDontBindOnPhaseChange = false;
    this->RotationEffect = NULL;
    this->bCanSpot = false;
    this->bCanStase = true;
    this->RecoveringTime = 10.00f;
    this->BreachingBaseTime = 15.00f;
    this->BreachingRandomTimeDeviation = 10.00f;
    this->BreachingTimePerLifePoint = 1.50f;
    this->BreachingDistance = 100.00f;
    this->AlternativePathMaxDistance = 6000.00f;
    this->UseNoiseSharing = false;
    this->EvadeProbability = 0.00f;
    this->EvadeDistanceThreshold = 600.00f;
    this->EvadeStasisDistanceThreshold = 2000.00f;
    this->EncounterTriggerType = EnumEncounterTriggerType::NONE;
    this->TrackingRadius = 0.00f;
    this->StunDuration = 1.00f;
    this->AcidBurst_Explosion = NULL;
    this->CanJumpOverObstacle = false;
    this->AnimClass = EnumAlienClass::DRONE;
    this->bDisplayWidgetLife = true;
}


