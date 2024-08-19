#include "FeedbackActorSubObjectiveComp.h"

UFeedbackActorSubObjectiveComp::UFeedbackActorSubObjectiveComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReferenceType = EActorReferenceType::GAMEPLAYTWIN;
    this->ActorCharacterID = NULL;
}

void UFeedbackActorSubObjectiveComp::SetActorTarget(AGameplayTwinActor* _ActorTarget) {
}

void UFeedbackActorSubObjectiveComp::OnActorDestroyed(AActor* _DestroyedActor) {
}

void UFeedbackActorSubObjectiveComp::BindEventToActor(AASFGameStateBase* _GameState, AActor* _Actor) {
}


