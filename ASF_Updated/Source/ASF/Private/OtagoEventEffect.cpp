#include "OtagoEventEffect.h"

FOtagoEventEffect::FOtagoEventEffect() {
    this->Type = EOtagoEventEffectType::NO_EFFECT;
    this->Category = EOtagoEventEffectCategory::NEUTRAL;
    this->Probability = 0.00f;
    this->Target = EOtagoEventEffectTargetType::NO_TARGET;
    this->TargetIndex = 0;
}

