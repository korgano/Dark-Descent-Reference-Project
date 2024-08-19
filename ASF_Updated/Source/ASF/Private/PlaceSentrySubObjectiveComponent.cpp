#include "PlaceSentrySubObjectiveComponent.h"

UPlaceSentrySubObjectiveComponent::UPlaceSentrySubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SquadSentrySkill = NULL;
    this->InteractorSentrySkill = NULL;
    this->SentryID = -1;
    this->LinkedSentry = NULL;
}

void UPlaceSentrySubObjectiveComponent::OnTwinActorLinked(AGameplayTwinActor* TwinActor) {
}

void UPlaceSentrySubObjectiveComponent::OnSquadSentrySkillUnselected(USkill* Skill) {
}

void UPlaceSentrySubObjectiveComponent::OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad) {
}

void UPlaceSentrySubObjectiveComponent::OnSentryExistenceValidated(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UPlaceSentrySubObjectiveComponent::OnSentryEndedPlayBeforeInitialization(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UPlaceSentrySubObjectiveComponent::OnSentryCreated(USkill_Deployable* SentrySkill, AActor* Sentry) {
}

void UPlaceSentrySubObjectiveComponent::OnRestrictionAreaEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UPlaceSentrySubObjectiveComponent::HandleSentrySpawned_Implementation(USkill_Deployable* SentrySkill, ASentry* Sentry) {
}


