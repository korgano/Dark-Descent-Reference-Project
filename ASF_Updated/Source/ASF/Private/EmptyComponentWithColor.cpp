#include "EmptyComponentWithColor.h"

UEmptyComponentWithColor::UEmptyComponentWithColor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bHiddenInSceneCapture = true;
    this->MaterialToApply = NULL;
}

void UEmptyComponentWithColor::InitColorAndAll_Implementation() {
}


