#include "TMEvent_Effect.h"

UTMEvent_Effect::UTMEvent_Effect() {
    this->PrintOnGUI = false;
    this->EventSystem = NULL;
}

bool UTMEvent_Effect::ShouldPrintOnEventGUI() const {
    return false;
}

bool UTMEvent_Effect::ShouldPrintDuration_Implementation() const {
    return false;
}

void UTMEvent_Effect::SetDisplayInformations(const FText& _Title, const FText& _Description) {
}

FText UTMEvent_Effect::GetTitle_Implementation() const {
    return FText::GetEmpty();
}

float UTMEvent_Effect::GetPrintedRemainingDuration_Implementation() const {
    return 0.0f;
}

FText UTMEvent_Effect::GetDescription_Implementation() const {
    return FText::GetEmpty();
}


