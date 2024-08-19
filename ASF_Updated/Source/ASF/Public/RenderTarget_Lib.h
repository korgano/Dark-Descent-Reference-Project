#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RenderTarget_Lib.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ASF_API URenderTarget_Lib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URenderTarget_Lib();

    UFUNCTION(BlueprintCallable)
    static TArray<FColor> RenderTargetToColorArray(UTextureRenderTarget2D* InRenderTarget);
    
    UFUNCTION(BlueprintCallable)
    static void Get_RenderTarget_Texel(UTextureRenderTarget2D* InRenderTarget, const FIntPoint& Coord, FLinearColor& Out_LinearColor, FColor& Out_Color);
    
};

