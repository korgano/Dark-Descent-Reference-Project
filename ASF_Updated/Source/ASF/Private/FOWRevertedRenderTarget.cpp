#include "FOWRevertedRenderTarget.h"

AFOWRevertedRenderTarget::AFOWRevertedRenderTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FOWManager = NULL;
    this->TileID = 0;
    this->SizeX = 0;
    this->SizeY = 0;
    this->motherRenderTextureBufferIndex = 0;
    this->SubChunkTextureBufferIndex = 0;
}

void AFOWRevertedRenderTarget::SetManager(AFOWRevertedManagerActor* Manager) {
}

bool AFOWRevertedRenderTarget::RemoveVision() {
    return false;
}

void AFOWRevertedRenderTarget::InitRenderTarget(FVector RealPosition, FVector PipelineRenderingOffset, FVector Scale, int32 TextureDefinition, int32 ID, int32 NewMotherRenderTextureBufferIndex) {
}

void AFOWRevertedRenderTarget::InitialiseTextureParam(int32 size_X, int32 size_Y, int32 NewMotherRenderTextureBufferIndex) {
}

int32 AFOWRevertedRenderTarget::GetTexturePositionAt(FVector2D coordinate) {
    return 0;
}

int32 AFOWRevertedRenderTarget::GetMotherTexturePositionAt(FVector2D coordinate) {
    return 0;
}

UTexture2D* AFOWRevertedRenderTarget::GetGeneratedTexture() const {
    return NULL;
}

int32 AFOWRevertedRenderTarget::GetFOWStateAt(FVector2D coordinate) {
    return 0;
}

void AFOWRevertedRenderTarget::GenerateTexture_Implementation(const TArray<FVector>& Coordinates, const FVector& Center, float Radius) {
}

bool AFOWRevertedRenderTarget::CreateRenderTargetMaskByManagerChunk() {
    return false;
}

bool AFOWRevertedRenderTarget::ClearRenderTargetFOW() {
    return false;
}

void AFOWRevertedRenderTarget::ClearRenderTarget() {
}


