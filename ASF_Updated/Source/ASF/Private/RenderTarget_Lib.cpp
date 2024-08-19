#include "RenderTarget_Lib.h"

URenderTarget_Lib::URenderTarget_Lib() {
}

TArray<FColor> URenderTarget_Lib::RenderTargetToColorArray(UTextureRenderTarget2D* InRenderTarget) {
    return TArray<FColor>();
}

void URenderTarget_Lib::Get_RenderTarget_Texel(UTextureRenderTarget2D* InRenderTarget, const FIntPoint& Coord, FLinearColor& Out_LinearColor, FColor& Out_Color) {
}


