#include "DeployableMotionTracker.h"
#include "StatComponent.h"

ADeployableMotionTracker::ADeployableMotionTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatComponent = CreateDefaultSubobject<UStatComponent>(TEXT("DeployableMotionTrackerStatComponent"));
    this->DataAsset = NULL;
    this->bHasActivatedDecoy = false;
    this->bIsDecoyActivated = false;
    this->SavedDecoyRemainingTime = -1.00f;
    this->TrackerDataAsset = NULL;
    this->CombatComponent = NULL;
}

void ADeployableMotionTracker::OnDMTDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult) {
}

bool ADeployableMotionTracker::IsDecoyActivated() const {
    return false;
}

void ADeployableMotionTracker::HandleDecoyDeactivation_Implementation() {
}

void ADeployableMotionTracker::HandleDecoyActivation_Implementation() {
}

float ADeployableMotionTracker::GetDecoyRemainingTime() const {
    return 0.0f;
}


void ADeployableMotionTracker::DestroyDMTActor() {
}

void ADeployableMotionTracker::DeactivateDecoy() {
}

bool ADeployableMotionTracker::CanActivateDecoy() const {
    return false;
}

void ADeployableMotionTracker::ActivateDecoy() {
}


