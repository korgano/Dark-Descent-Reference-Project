#include "AmbushTrackerIndicator.h"
#include "Tinda_EffectHandlerComponent.h"
#include "TrackedComponent.h"

AAmbushTrackerIndicator::AAmbushTrackerIndicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandler = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("Effect Handler Component"));
    this->TrackedComponent = CreateDefaultSubobject<UTrackedComponent>(TEXT("Tracked Component"));
}

UTrackedComponent* AAmbushTrackerIndicator::GetTrackedComponent() const {
    return NULL;
}

UTinda_EffectHandlerComponent* AAmbushTrackerIndicator::GetEffectHandler() const {
    return NULL;
}


