#include "InventorySubObjectiveComponent.h"

UInventorySubObjectiveComponent::UInventorySubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Number = 1;
    this->TextFormat = TEXT("{0} ({1}/{2})");
    this->countItem = 0;
}

void UInventorySubObjectiveComponent::TryToTriggerTriggerInfo() {
}

void UInventorySubObjectiveComponent::OnSuppliesQuantityChanged(UInventoryComponent* Inventory, FGameplayTag Tag, int32 OldValue, int32 NewValue) {
}

void UInventorySubObjectiveComponent::OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad) {
}


