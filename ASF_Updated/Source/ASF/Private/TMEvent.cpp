#include "TMEvent.h"

UTMEvent::UTMEvent() {
    this->EventSystem = NULL;
    this->DataAsset = NULL;
}

void UTMEvent::Trigger_Implementation() {
}

void UTMEvent::OnCreateEffectToApply_Implementation(UTinda_Effect* _Effect) {
}

void UTMEvent::Initialize_Implementation() {
}

FText UTMEvent::GetTitle_Implementation() {
    return FText::GetEmpty();
}

FGameplayTag UTMEvent::GetTag() const {
    return FGameplayTag{};
}

ATMEventSystem* UTMEvent::GetParentSystem() const {
    return NULL;
}

TArray<TSoftClassPtr<UTMEvent_Effect>> UTMEvent::GetEffectsToApply() const {
    return TArray<TSoftClassPtr<UTMEvent_Effect>>();
}

FText UTMEvent::GetDescription_Implementation() {
    return FText::GetEmpty();
}

UEvent_DataAsset* UTMEvent::GetDataAsset() {
    return NULL;
}

bool UTMEvent::CanBeTriggered_Implementation(ATMEventSystem* _EventSystem) {
    return false;
}


