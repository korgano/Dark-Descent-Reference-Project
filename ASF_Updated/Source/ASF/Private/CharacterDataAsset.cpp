#include "CharacterDataAsset.h"

UCharacterDataAsset::UCharacterDataAsset() {
    this->MovementSpeed = 0.00f;
    this->RotationSpeed = 0.00f;
    this->DefaultNavigationFilter = NULL;
    this->DefaultNavigationFilter_NoInfluence = NULL;
    this->AngleForRotation = 30.00f;
    this->AngleForStaticRotation = 90.00f;
    this->CharacterMouvementSFX = NULL;
    this->CharacterDodge = 0.00f;
    this->POIPerception = NULL;
    this->NoiseDetectionRange = 6000.00f;
    this->SoundPrecision = NULL;
    this->InitialLifeMax_Easy = 6.00f;
    this->InitialLifeMax_Medium = 6.00f;
    this->InitialLifeMax_Hard = 6.00f;
    this->InitialLifeMax_VeryHard = 6.00f;
    this->InitialArmorValue = 2.00f;
    this->ChanceToReceiveCriticCoef = 0.00f;
    this->FlareBonusAccuracy_ForTarget = 5.00f;
    this->CommandPointRewardedOnKill = 0.20f;
    this->ExperienceRewardedOnKill = 0.00f;
}


