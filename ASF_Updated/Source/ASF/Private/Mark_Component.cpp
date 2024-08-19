#include "Mark_Component.h"

UMark_Component::UMark_Component(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

AMark* UMark_Component::GetMarkWithTag(FName _Tag) {
    return NULL;
}

TArray<AMark*> UMark_Component::GetMarksWithTag(FName _Tag) {
    return TArray<AMark*>();
}


