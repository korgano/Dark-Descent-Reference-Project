#include "DiplomacyComponent.h"

UDiplomacyComponent::UDiplomacyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDiplomacyComponent::SetDiplomacyWihTeam(FGameplayTag _TeamTag, EDiplomacy _NewDiplo) {
}

void UDiplomacyComponent::InitDiplomacy() {
}

FGameplayTag UDiplomacyComponent::GetTeamTag() {
    return FGameplayTag{};
}

EDiplomacy UDiplomacyComponent::GetDiplomacyWithTeamTag(FGameplayTag _TeamTag) {
    return EDiplomacy::ENNEMY;
}

EDiplomacy UDiplomacyComponent::GetDiplomacyWithActor(AActor* _OtherActor) {
    return EDiplomacy::ENNEMY;
}

EDiplomacy UDiplomacyComponent::GetDiplomacyBetweenActor(AActor* _From, AActor* Against) {
    return EDiplomacy::ENNEMY;
}


