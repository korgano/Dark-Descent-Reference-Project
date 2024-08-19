#include "InventoryResourceComponent.h"

UInventoryResourceComponent::UInventoryResourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UInventoryResourceComponent::SpendResources(FGameplayTag _ResourceTag, int32 _NbMaterial) {
}

void UInventoryResourceComponent::SetResources(FGameplayTag _ResourceTag, int32 _NbMaterial) {
}

int32 UInventoryResourceComponent::GetResourceQuantity(FGameplayTag _GameplayTag) const {
    return 0;
}

TMap<FGameplayTag, int32> UInventoryResourceComponent::GetAllResources() const {
    return TMap<FGameplayTag, int32>();
}

bool UInventoryResourceComponent::CanSpendResourceQuantity(FGameplayTag _ResourceTag, int32 _Quantity) const {
    return false;
}

void UInventoryResourceComponent::AddResources(FGameplayTag _ResourceTag, int32 _NbMaterial) {
}


