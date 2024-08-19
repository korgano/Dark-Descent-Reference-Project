#include "AC_AcidBurst.h"

UAC_AcidBurst::UAC_AcidBurst(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChanceOfAcidBurst = 0.00f;
}

void UAC_AcidBurst::Spawn_AcidBurst_Implementation(float _DamageMin, float _DamageMax, float _Range) {
}

void UAC_AcidBurst::SetShowAcidBurster(bool _ShowAcidBurster) {
}

void UAC_AcidBurst::Log_AcidBurst(const FString& _Log) {
}

bool UAC_AcidBurst::GetShowAcidBurster() {
    return false;
}



