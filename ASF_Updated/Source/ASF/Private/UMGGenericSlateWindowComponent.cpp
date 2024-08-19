#include "UMGGenericSlateWindowComponent.h"

UUMGGenericSlateWindowComponent::UUMGGenericSlateWindowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->slateUI = NULL;
    this->SlateWindowManager = NULL;
    this->createdWidget = NULL;
}

void UUMGGenericSlateWindowComponent::SetManager(AUMGGenericSlateWindowManager* slateManager) {
}

void UUMGGenericSlateWindowComponent::ResetLocalVariable() {
}

void UUMGGenericSlateWindowComponent::InitSlateWindow() {
}

void UUMGGenericSlateWindowComponent::DestroyComponent_Internal() {
}


