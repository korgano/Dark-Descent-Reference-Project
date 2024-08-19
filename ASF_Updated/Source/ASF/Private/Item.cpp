#include "Item.h"

AItem::AItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Character = NULL;
}

void AItem::SetCharacter(AASFCharacter* _Character) {
}

FName AItem::GetSocketWeaponEquiped() const {
    return NAME_None;
}

FGameplayTag AItem::GetItemTag() {
    return FGameplayTag{};
}

FGameplayTag AItem::GetItemCategory() {
    return FGameplayTag{};
}

TSoftObjectPtr<UTexture2D> AItem::GetIcon() {
    return NULL;
}

FGameplayTagContainer AItem::GetBlockersTag() {
    return FGameplayTagContainer{};
}

void AItem::AttachItemToCharacter_Implementation(AASFCharacter* _Character) {
}


