#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeamIndex = 0;
}

void UInventoryComponent::Spend(FGameplayTag _Tag, int32 _Quantity, bool _HasBeenReserved) {
}

void UInventoryComponent::ReserveQuantity(FGameplayTag _Tag, int32 _Quantity) {
}

void UInventoryComponent::ReserveCapacity(FGameplayTag _Tag, int32 _Quantity) {
}

int32 UInventoryComponent::RemoveCapacity(FGameplayTag _Tag, int32 _Quantity) {
    return 0;
}

void UInventoryComponent::ReleaseQuantity(FGameplayTag _Tag, int32 _Quantity) {
}

void UInventoryComponent::ReleaseCapacity(FGameplayTag _Tag, int32 _Quantity) {
}

TSoftObjectPtr<UTexture2D> UInventoryComponent::GetWhiteItemIcon(FGameplayTag _Tag) const {
    return NULL;
}

int32 UInventoryComponent::GetReservedQuantity(FGameplayTag _Tag) const {
    return 0;
}

int32 UInventoryComponent::GetReservedCapacity(FGameplayTag _Tag) const {
    return 0;
}

int32 UInventoryComponent::GetQuantity(FGameplayTag _Tag) const {
    return 0;
}

TSoftObjectPtr<UTexture2D> UInventoryComponent::GetItemIcon(FGameplayTag _Tag) const {
    return NULL;
}

int32 UInventoryComponent::GetCapacity(FGameplayTag _Tag) const {
    return 0;
}

void UInventoryComponent::GetAllSupplies(TMap<FGameplayTag, int32>& _Res) const {
}

void UInventoryComponent::GetAllResources(TMap<FGameplayTag, int32>& _Res) const {
}

void UInventoryComponent::GetAllItems(TMap<FGameplayTag, int32>& _Res) const {
}

bool UInventoryComponent::CheckCheatInfiniteResources() const {
    return false;
}

bool UInventoryComponent::CanSpend(FGameplayTag _Tag, int32 _Quantity) const {
    return false;
}

bool UInventoryComponent::CanAddQuantity(const FGameplayTag& _Tag, int32 _Quantity) const {
    return false;
}

bool UInventoryComponent::CanAddQuantities(TMap<FGameplayTag, int32>& _Items) const {
    return false;
}

int32 UInventoryComponent::AddQuantity(FGameplayTag _Tag, int32 _Quantity, bool _Reserved) {
    return 0;
}

void UInventoryComponent::AddQuantities(const TMap<FGameplayTag, int32>& _Supplies) {
}

void UInventoryComponent::AddCapacity(FGameplayTag _Tag, int32 _Quantity) {
}


