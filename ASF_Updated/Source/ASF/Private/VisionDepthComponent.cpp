#include "VisionDepthComponent.h"

UVisionDepthComponent::UVisionDepthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsTicking = true;
    this->bIsVisionDepthMaster = false;
    this->VisionCollisionChannel = ECC_WorldStatic;
    this->VisionRayNumber = 300;
    this->VisionRayDist = 4500.00f;
    this->MasterVisionDepth = NULL;
    this->VisionDepthTickTask = NULL;
}

void UVisionDepthComponent::VisionDepthTick() {
}

void UVisionDepthComponent::RemoveVisionDepth(UVisionDepthComponent* _VisionDepth) {
}

TArray<FVisionDepthDepthAnalysis> UVisionDepthComponent::GetVisionDepthPath() {
    return TArray<FVisionDepthDepthAnalysis>();
}

TArray<FVisionDepthDepthAnalysis> UVisionDepthComponent::GetPathRecursively(FVisionDepthDepthAnalysis& prevPath) {
    return TArray<FVisionDepthDepthAnalysis>();
}

void UVisionDepthComponent::AddVisionDepth(UVisionDepthComponent* _VisionDepth) {
}


