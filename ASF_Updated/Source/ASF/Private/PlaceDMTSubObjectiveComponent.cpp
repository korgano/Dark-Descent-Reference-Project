#include "PlaceDMTSubObjectiveComponent.h"

UPlaceDMTSubObjectiveComponent::UPlaceDMTSubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DMTSkill = NULL;
    this->DMTID = -1;
    this->LinkedDMT = NULL;
}

void UPlaceDMTSubObjectiveComponent::OnTwinActorLinked(AGameplayTwinActor* TwinActor) {
}

void UPlaceDMTSubObjectiveComponent::OnSquadDMTSkillUnselected(USkill* Skill) {
}

void UPlaceDMTSubObjectiveComponent::OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad) {
}

void UPlaceDMTSubObjectiveComponent::OnRestrictionAreaEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UPlaceDMTSubObjectiveComponent::OnDMTExistenceValidated(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UPlaceDMTSubObjectiveComponent::OnDMTEndedPlayBeforeInitialization(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UPlaceDMTSubObjectiveComponent::OnDMTCreated(USkill_Deployable* MotionTrackerSkill, AActor* MotionTracker) {
}


