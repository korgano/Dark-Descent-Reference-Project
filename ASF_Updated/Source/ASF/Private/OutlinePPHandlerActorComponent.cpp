#include "OutlinePPHandlerActorComponent.h"

UOutlinePPHandlerActorComponent::UOutlinePPHandlerActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PP = NULL;
}

void UOutlinePPHandlerActorComponent::UpdatePP(APostProcessVolume* NewPP) {
}

void UOutlinePPHandlerActorComponent::SetVisibilityOutlinePP_Implementation(bool bVisible) {
}

void UOutlinePPHandlerActorComponent::OnUserSettingByteValueChanged(FGameplayTag SettingTag, uint8 Value) {
}


void UOutlinePPHandlerActorComponent::HoverChange(EnumHover Type, bool bIsHoverAsked) {
}


