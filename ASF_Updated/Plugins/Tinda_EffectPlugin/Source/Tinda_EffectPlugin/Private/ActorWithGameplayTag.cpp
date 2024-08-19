#include "ActorWithGameplayTag.h"

AActorWithGameplayTag::AActorWithGameplayTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsTickEnable = false;
}

FGameplayTagContainer AActorWithGameplayTag::GetGameplayTagContainer() {
    return FGameplayTagContainer{};
}


