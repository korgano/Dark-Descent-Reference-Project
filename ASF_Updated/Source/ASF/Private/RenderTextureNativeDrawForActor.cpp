#include "RenderTextureNativeDrawForActor.h"

URenderTextureNativeDrawForActor::URenderTextureNativeDrawForActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SizeX = 0;
    this->SizeY = 0;
    this->GeneratedTexture = NULL;
    this->previousGeneratedTexture = NULL;
}

void URenderTextureNativeDrawForActor::InitialiseTextureParam(int32 size_X, int32 size_Y) {
}

UTexture2D* URenderTextureNativeDrawForActor::GetPreviousGeneratedTexture() const {
    return NULL;
}

UTexture2D* URenderTextureNativeDrawForActor::GetGeneratedTexture() const {
    return NULL;
}

void URenderTextureNativeDrawForActor::GenerateMaskByLinearFunctionWithAntiAliase(const TArray<FVector2D>& FieldOfViewCoordinate, const FVector2D& FieldOfViewCenter) {
}

UTexture2D* URenderTextureNativeDrawForActor::CreateRenderTargetMask() {
    return NULL;
}


