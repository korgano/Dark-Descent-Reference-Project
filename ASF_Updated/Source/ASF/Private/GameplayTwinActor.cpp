#include "GameplayTwinActor.h"

AGameplayTwinActor::AGameplayTwinActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LinkedObject = NULL;
}

void AGameplayTwinActor::UnLinkTwin(UGameplayTwinComponent* TwinComp) {
}

void AGameplayTwinActor::SetSelectedLevelActors() {
}

void AGameplayTwinActor::SetLinkedObjectSubLevel(const FString& _SubLevelName) {
}

void AGameplayTwinActor::SetLinkedObjectName(const FString& _LinkedObjectName) {
}

void AGameplayTwinActor::LinkTwin(UGameplayTwinComponent* TwinComp) {
}

bool AGameplayTwinActor::HasTagFromLinkedObject(FGameplayTag _Tag) {
    return false;
}

FString AGameplayTwinActor::GetLinkedObjectSubLevel() const {
    return TEXT("");
}

AActor* AGameplayTwinActor::GetCurrentActor_BP(AActor* ActorToCheck, EnumISTWIN& IsTwin) {
    return NULL;
}

AActor* AGameplayTwinActor::GetCurrentActor(AActor* ActorToCheck, bool& bIsTwin) {
    return NULL;
}

void AGameplayTwinActor::AddTagToRemoveFromLinkedObject(FGameplayTag _Tag) {
}

void AGameplayTwinActor::AddTagToAddToLinkedObject(FGameplayTag _Tag) {
}


