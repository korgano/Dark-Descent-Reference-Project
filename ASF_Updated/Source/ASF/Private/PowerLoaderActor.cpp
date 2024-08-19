#include "PowerLoaderActor.h"
#include "MarineStatComponent.h"

APowerLoaderActor::APowerLoaderActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatComponent = CreateDefaultSubobject<UMarineStatComponent>(TEXT("MarineStatComponent"));
    this->PowerloaderId = 0;
    this->actualStepId = -1;
    this->IsGrabing = false;
}

void APowerLoaderActor::TryToTriggerTriggerInfo(int32 _stepId, int32 _powerloaderId) {
}

void APowerLoaderActor::SetTickEnabled_Implementation(bool Enabled) {
}

void APowerLoaderActor::PauseStep_Implementation(bool bySave) {
}

void APowerLoaderActor::NextStep_Implementation(int32 overrideNextStep) {
}

void APowerLoaderActor::HumanoidEnterLeave_Implementation(bool Enter, AHumanoidTactical* Humanoid, bool fromSave) {
}

bool APowerLoaderActor::HasValidActualStep() const {
    return false;
}

AHumanoidTactical* APowerLoaderActor::GetHumanoidInPowerLoader_Implementation() const {
    return NULL;
}

TArray<FVector> APowerLoaderActor::GetCurrentSpline_Implementation(bool _OnlyRemainingPoint) const {
    return TArray<FVector>();
}

USceneComponent* APowerLoaderActor::GetArrowInteraction_Implementation() const {
    return NULL;
}

void APowerLoaderActor::AttachActorToPowerloader_Implementation(AActor* actorToAttach) {
}


