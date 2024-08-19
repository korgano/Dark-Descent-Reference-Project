#include "Activity_SwapItem.h"
#include "EActivityAnimationType.h"
#include "EnumActivityType.h"
#include "Templates/SubclassOf.h"

UActivity_SwapItem::UActivity_SwapItem() {
    this->ActivityType = EnumActivityType::SWAP_ITEM;
    this->AnimationType = EActivityAnimationType::SWAP;
}

void UActivity_SwapItem::SetItemToEquip(FGameplayTag _ItemToEquip) {
}

float UActivity_SwapItem::GetSwapDuration_Implementation() {
    return 0.0f;
}

FGameplayTag UActivity_SwapItem::GetItemTag() const {
    return FGameplayTag{};
}

UActivity_SwapItem* UActivity_SwapItem::Create_Activity_SwapItem(AActor* _Context, TSubclassOf<UActivity_SwapItem> _ActivityClass, FGameplayTag _ItemTag, FVector _CharacterAimingLocation_Desired) {
    return NULL;
}


