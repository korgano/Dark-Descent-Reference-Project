#include "Tinda_WidgetComponent.h"

UTinda_WidgetComponent::UTinda_WidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
}

void UTinda_WidgetComponent::Undisplay_Implementation() {
}

void UTinda_WidgetComponent::Display_Implementation() {
}


