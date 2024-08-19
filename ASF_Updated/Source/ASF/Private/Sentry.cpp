#include "Sentry.h"
#include "MarineStatComponent.h"

ASentry::ASentry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatComponent = CreateDefaultSubobject<UMarineStatComponent>(TEXT("SentryStatComponent"));
    this->CombatComponent = NULL;
    this->DataAsset = NULL;
    this->displayInFollowers = true;
    this->KillCount = 0;
}

void ASentry::OnDeployStateChanged(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded) {
}

void ASentry::IncrementKillCount() {
}

TSoftClassPtr<UMapFeedbackDataProperties> ASentry::GetOpenDataProperties_Implementation() const {
    return NULL;
}

int32 ASentry::GetKillCount() {
    return 0;
}


