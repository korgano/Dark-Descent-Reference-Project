#include "Cursor3D.h"

ACursor3D::ACursor3D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsCancelInteractionEnable = false;
}

bool ACursor3D::GetIsCancelInteractionEnable() const {
    return false;
}

void ACursor3D::EnableCancelInteraction(bool _IsCancelInteractionEnable) {
}


