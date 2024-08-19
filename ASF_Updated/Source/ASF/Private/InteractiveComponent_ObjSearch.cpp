#include "InteractiveComponent_ObjSearch.h"

UInteractiveComponent_ObjSearch::UInteractiveComponent_ObjSearch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsNarrative = true;
    this->bForceDisplayButton = false;
    this->EndWithClose = false;
}


