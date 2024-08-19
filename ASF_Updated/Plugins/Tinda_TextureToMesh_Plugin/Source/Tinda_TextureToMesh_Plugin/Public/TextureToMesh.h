#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TextureAsArrayOfColors.h"
#include "Tinda_MeshDescription.h"
#include "TextureToMesh.generated.h"

class UTexture2D;
class UTextureRenderTarget;

UCLASS(Blueprintable)
class TINDA_TEXTURETOMESH_PLUGIN_API UTextureToMesh : public UObject {
    GENERATED_BODY()
public:
    UTextureToMesh();

    UFUNCTION(BlueprintCallable)
    static FTinda_MeshDescription Tinda_TriangulateVolumetricShape(TArray<FVector> _Positions, float _SizeZ);
    
    UFUNCTION(BlueprintCallable)
    static FTinda_MeshDescription Tinda_TriangulateShape(TArray<FVector> _Positions);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    static TArray<FVector> TextureToVertex(UObject* _WorldContext, UTexture2D* _Texture, int32 _NbVertexMax, float _TextureSizeX, float _TextureSizeY);
    
    UFUNCTION(BlueprintCallable)
    static void TextureToArrayOfColor(UTexture2D* _Texture, FTextureAsArrayOfColors& res);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> SimplifyVertex(TArray<FVector> _Vertex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    static UTexture2D* RenderTargetToTexture2D(UObject* _WorldContext, UTextureRenderTarget* _RenderTarget);
    
    UFUNCTION(BlueprintCallable)
    static void RenderTargetToArrayOfColor(UTextureRenderTarget* _RenderTarget, FTextureAsArrayOfColors& res);
    
    UFUNCTION(BlueprintCallable)
    static FColor GetColorAt(const FTextureAsArrayOfColors& res, int32 Position);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBarycenterFromPosition(TArray<FVector> _Positions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Convert2DIndexTo1DIndex(FVector2D Size, int32 X, int32 Y);
    
};

