#include "TextureToMesh.h"

UTextureToMesh::UTextureToMesh() {
}

FTinda_MeshDescription UTextureToMesh::Tinda_TriangulateVolumetricShape(TArray<FVector> _Positions, float _SizeZ) {
    return FTinda_MeshDescription{};
}

FTinda_MeshDescription UTextureToMesh::Tinda_TriangulateShape(TArray<FVector> _Positions) {
    return FTinda_MeshDescription{};
}

TArray<FVector> UTextureToMesh::TextureToVertex(UObject* _WorldContext, UTexture2D* _Texture, int32 _NbVertexMax, float _TextureSizeX, float _TextureSizeY) {
    return TArray<FVector>();
}

void UTextureToMesh::TextureToArrayOfColor(UTexture2D* _Texture, FTextureAsArrayOfColors& res) {
}

TArray<FVector> UTextureToMesh::SimplifyVertex(TArray<FVector> _Vertex) {
    return TArray<FVector>();
}

UTexture2D* UTextureToMesh::RenderTargetToTexture2D(UObject* _WorldContext, UTextureRenderTarget* _RenderTarget) {
    return NULL;
}

void UTextureToMesh::RenderTargetToArrayOfColor(UTextureRenderTarget* _RenderTarget, FTextureAsArrayOfColors& res) {
}

FColor UTextureToMesh::GetColorAt(const FTextureAsArrayOfColors& res, int32 Position) {
    return FColor{};
}

FVector UTextureToMesh::GetBarycenterFromPosition(TArray<FVector> _Positions) {
    return FVector{};
}

int32 UTextureToMesh::Convert2DIndexTo1DIndex(FVector2D Size, int32 X, int32 Y) {
    return 0;
}


