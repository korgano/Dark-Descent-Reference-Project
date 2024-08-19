#include "LinkedEffectSettings.h"

FLinkedEffectSettings::FLinkedEffectSettings() {
    this->EffectClass = NULL;
    this->LinkRule = EnumLinkEffect_LinkRule::APPLY;
    this->Effect = NULL;
}

