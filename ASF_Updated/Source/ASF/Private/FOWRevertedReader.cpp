#include "FOWRevertedReader.h"

UFOWRevertedReader::UFOWRevertedReader() {
    this->World = NULL;
    this->MapShader = NULL;
    this->MapTextureMask = NULL;
}

FVector2D UFOWRevertedReader::WorldToMinimapUV(FVector Position) const {
    return FVector2D{};
}

FVector2D UFOWRevertedReader::Vector_WorldToMinimapUV(FVector Vector) const {
    return FVector2D{};
}

void UFOWRevertedReader::UpdateMapShader() {
}

void UFOWRevertedReader::Save_TileCompression(TArray<uint8>& FOWSave) {
}

void UFOWRevertedReader::Save(TArray<uint8>& FOWSave) {
}

void UFOWRevertedReader::Load_TileDecompression(TArray<uint8>& FOWSaveArray, const FMinimapData& _PlanInformation) {
}

void UFOWRevertedReader::Load(TArray<uint8>& FOWSaveArray, const FMinimapData& _PlanInformation) {
}

void UFOWRevertedReader::InitTexture() {
}

void UFOWRevertedReader::Init(UObject* _WorldContext, UMaterialInterface* MaterialType, FName OptionalName, UTexture2D* MainTexture) {
}

UMaterialInstanceDynamic* UFOWRevertedReader::GetShaderMaterial() const {
    return NULL;
}

bool UFOWRevertedReader::GetMinimapVisible() const {
    return false;
}

UTexture2D* UFOWRevertedReader::GetGeneratedMotherRenderTexture() const {
    return NULL;
}

EnumFOWVisionType UFOWRevertedReader::GetFOWStateAround(FVector ActorPosition, int32 pixelLength, int32 pixelHeight) {
    return EnumFOWVisionType::UNSEEN;
}

void UFOWRevertedReader::Generate(const FFOWSetting& FOWSettings, const FMinimapData& _PlanInformation) {
}

void UFOWRevertedReader::ClearFOW(bool OnlyMinimap) {
}


