#include "GameplayTwinHandler.h"

AGameplayTwinHandler::AGameplayTwinHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AGameplayTwinHandler::RemoveGameplayTwinActor(AGameplayTwinActor* ActorToRemove, bool bNeedDelete) {
}

void AGameplayTwinHandler::MergeTwinHandlers(AGameplayTwinHandler* HandlerTarget, const TArray<AGameplayTwinHandler*>& HandlersToMerge) {
}

AGameplayTwinActor* AGameplayTwinHandler::GetTwinOf(AActor* SourceActor) {
    return NULL;
}

AGameplayTwinActor* AGameplayTwinHandler::GetGameplayTwinActorWithNameEditor(const FName& Name) {
    return NULL;
}

AGameplayTwinActor* AGameplayTwinHandler::GetGameplayTwinActorWithName(const FName& Name) {
    return NULL;
}

UActorComponent* AGameplayTwinHandler::GetAssociatedComponent(AActor* ActorTarget, UActorComponent* ComponentFrom) {
    return NULL;
}

TArray<AGameplayTwinActor*> AGameplayTwinHandler::GetAllTwinsOf(AActor* SourceActor) {
    return TArray<AGameplayTwinActor*>();
}

AActor* AGameplayTwinHandler::GetActorLinkToGameplayTwinActorWithName(const FName& Name) {
    return NULL;
}

void AGameplayTwinHandler::GameplayTwinActorIsDestroyed(AGameplayTwinActor* DestroyedActor) {
}

int32 AGameplayTwinHandler::DestroyLonelyGameplayTwin() {
    return 0;
}

void AGameplayTwinHandler::AddGameplayTwinActor(AGameplayTwinActor* ActorToAdd) {
}


