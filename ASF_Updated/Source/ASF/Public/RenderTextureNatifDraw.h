#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RenderTextureNatifDraw.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ASF_API ARenderTextureNatifDraw : public AActor {
    GENERATED_BODY()
public:
    ARenderTextureNatifDraw(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UTexture2D* GetGeneratedTexture();
    
    UFUNCTION(BlueprintCallable)
    void GenerrateRandomArray(int32 SizeX, int32 SizeY);
    
    UFUNCTION(BlueprintCallable)
    void GenerateMaskByLinearFunctionWithAntiAliase(int32 SizeX, int32 SizeY, const TArray<FVector2D>& FieldOfViewCoordinate, const FVector2D& FieldOfViewCenter);
    
    UFUNCTION(BlueprintCallable)
    void GenerateMaskByLinearFunction(int32 SizeX, int32 SizeY, const TArray<FVector2D>& FieldOfViewCoordinate, const FVector2D& FieldOfViewCenter);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* CreateRenderTargetMask(int32 SizeX, int32 SizeY);
    
};

