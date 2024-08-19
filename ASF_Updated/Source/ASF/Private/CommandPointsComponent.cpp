#include "CommandPointsComponent.h"

UCommandPointsComponent::UCommandPointsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Completion = 0.00f;
    this->CommandPoint_DataAsset = NULL;
}

void UCommandPointsComponent::SetCompletion(float _Completion, bool _DisplayFeedback) {
}

UCommandPoint_DataAsset* UCommandPointsComponent::GetCommandPoint_DataAsset() const {
    return NULL;
}

void UCommandPointsComponent::AddCommandPoint_External_Implementation(float _Amount) {
}


