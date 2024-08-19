#include "InventoryTriggerInfo.h"

UInventoryTriggerInfo::UInventoryTriggerInfo() {
    this->TriggerLabel = TEXT("Default__InventoryTriggerInfo");
    this->NbItemToReach = 0;
}

void UInventoryTriggerInfo::OnSuppliesQuantityChanged(UInventoryComponent* Inventory, FGameplayTag Tag, int32 OldValue, int32 NewValue) {
}

void UInventoryTriggerInfo::OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad) {
}


