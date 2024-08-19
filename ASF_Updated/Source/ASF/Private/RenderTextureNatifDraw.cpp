#include "RenderTextureNatifDraw.h"

ARenderTextureNatifDraw::ARenderTextureNatifDraw(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UTexture2D* ARenderTextureNatifDraw::GetGeneratedTexture() {
    return NULL;
}

void ARenderTextureNatifDraw::GenerrateRandomArray(int32 SizeX, int32 SizeY) {
}

void ARenderTextureNatifDraw::GenerateMaskByLinearFunctionWithAntiAliase(int32 SizeX, int32 SizeY, const TArray<FVector2D>& FieldOfViewCoordinate, const FVector2D& FieldOfViewCenter) {
}

void ARenderTextureNatifDraw::GenerateMaskByLinearFunction(int32 SizeX, int32 SizeY, const TArray<FVector2D>& FieldOfViewCoordinate, const FVector2D& FieldOfViewCenter) {
}

UTexture2D* ARenderTextureNatifDraw::CreateRenderTargetMask(int32 SizeX, int32 SizeY) {
    return NULL;
}


