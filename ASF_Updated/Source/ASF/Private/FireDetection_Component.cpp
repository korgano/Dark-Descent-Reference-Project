#include "FireDetection_Component.h"

UFireDetection_Component::UFireDetection_Component(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsOnFire = false;
}

void UFireDetection_Component::SetOnFire_Implementation(bool bIsOnFire) {
}

bool UFireDetection_Component::IsOwnerOnFire() {
    return false;
}


