#include "FOWRenderTarget.h"

AFOWRenderTarget::AFOWRenderTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RenderTarget = NULL;
}

void AFOWRenderTarget::ResetPlayerFieldOfView_Implementation(UTexture2D* GeneratedMask, FVector2D DrawLocation) {
}

void AFOWRenderTarget::InitRenderTarget_Implementation(FVector RealPosition, FVector PipelineRenderingOffset, FVector Scale, int32 TextureDefinition) {
}

void AFOWRenderTarget::CropRenderTargetLocalised_Implementation(UTexture2D* GeneratedMask, FVector2D DrawLocation) {
}


