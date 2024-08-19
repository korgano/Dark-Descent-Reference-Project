#include "MarineStatComponent.h"

UMarineStatComponent::UMarineStatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Attribute_TargetingAngle = NULL;
    this->Attribute_TargetingAngleDeltaLocation = NULL;
    this->Attribute_StressDamageMultiplier = NULL;
    this->Attribute_StressHealMultiplier = NULL;
    this->CharacterMinimalHitChance = NULL;
    this->CharacterPrecision = NULL;
    this->CharacterCloseRangePrecisionBonus = NULL;
    this->CharacterCloseRangeDistance = NULL;
    this->Attribute_UnSpotTime = NULL;
    this->RunningDodge_ForTarget = NULL;
    this->CoverDodge_ForTarget = NULL;
}


