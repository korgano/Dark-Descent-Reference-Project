#include "FOWRevertedManagerActor.h"

AFOWRevertedManagerActor::AFOWRevertedManagerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FOVRefreshRate = 0.00f;
    this->TextureSize = 0;
    this->TextureChunkSize = 512;
    this->MinimapTextureChunkSize = 1024;
    this->MinimapMT_TextureChunkSize = 512;
    this->GiveFullVision = false;
    this->IsFOWShaderAplied = true;
    this->IsDrawerMultiThreadActivated = true;
    this->UseChunkTexture = true;
    this->waitBlackDraw = false;
    this->FOWTickingTask = NULL;
    this->pixelSize = 0.00f;
    this->generatedMotherRenderTexture = NULL;
    this->generatedMotherRenderTextureChunk = NULL;
    this->generatedMotherRenderMinimapTextureChunk = NULL;
    this->generatedMotherRenderMinimapMTTextureChunk = NULL;
    this->GameShader = NULL;
    this->MapTexture = NULL;
    this->MapShader = NULL;
    this->MTMinimapShader = NULL;
    this->MinimapVisible = false;
}

FVector2D AFOWRevertedManagerActor::WorldToMinimapUV_Unclamped(FVector Position) const {
    return FVector2D{};
}

FVector2D AFOWRevertedManagerActor::WorldToMinimapUV(FVector Position) const {
    return FVector2D{};
}

FVector2D AFOWRevertedManagerActor::Vector_WorldToMinimapUV(FVector Vector) const {
    return FVector2D{};
}

void AFOWRevertedManagerActor::StopFOW() {
}

void AFOWRevertedManagerActor::StartMaskGenerationByThread() {
}

void AFOWRevertedManagerActor::SetVisibilityOutlinePP_Implementation(bool bVisible) {
}

void AFOWRevertedManagerActor::Save(const FString& Filename) {
}

void AFOWRevertedManagerActor::RemoveDrawer(UFOWRevertedRenderTextureDrawer* Drawer) {
}

FVector AFOWRevertedManagerActor::RaycastOnFOW(FVector Begin, FVector End, EnumFOWVisionType FOWLimite, bool& _OutHasHit) {
    return FVector{};
}

bool AFOWRevertedManagerActor::PlayerHasVisibilityOnActor(AActor* Actor) {
    return false;
}

bool AFOWRevertedManagerActor::PlayerHasVisibilityArround(FVector ActorPosition, int32 pixelLength, int32 pixelHeight) {
    return false;
}

void AFOWRevertedManagerActor::NeedToUpdatePP_Implementation() {
}

FVector AFOWRevertedManagerActor::MinimapUVToWorld(FVector2D _UV) const {
    return FVector{};
}

void AFOWRevertedManagerActor::Load(const FString& Filename) {
}

bool AFOWRevertedManagerActor::IsUsingFOWSubChunk() const {
    return false;
}

bool AFOWRevertedManagerActor::IsFOWBlackPartApplied() const {
    return false;
}

void AFOWRevertedManagerActor::InitMotherRenderTexture() {
}

bool AFOWRevertedManagerActor::GetwaitBlackDraw() const {
    return false;
}

int32 AFOWRevertedManagerActor::GetTileIndex(FVector ActorPosition) {
    return 0;
}

EnumFOWVisionType AFOWRevertedManagerActor::GetPlayerVisibilityOnActor(AActor* Actor) {
    return EnumFOWVisionType::UNSEEN;
}

UMaterialInstanceDynamic* AFOWRevertedManagerActor::GetMTMinimapShader() const {
    return NULL;
}

bool AFOWRevertedManagerActor::GetMinimapVisible() const {
    return false;
}

UMaterialInstanceDynamic* AFOWRevertedManagerActor::GetMinimapShader() const {
    return NULL;
}

UTexture2D* AFOWRevertedManagerActor::GetGeneratedSubChunkTexture() const {
    return NULL;
}

UTexture2D* AFOWRevertedManagerActor::GetGeneratedMotherRenderTextureMinimapMTChunk() const {
    return NULL;
}

UTexture2D* AFOWRevertedManagerActor::GetGeneratedMotherRenderTextureMinimapChunk() const {
    return NULL;
}

UTexture2D* AFOWRevertedManagerActor::GetGeneratedMotherRenderTextureChunk() const {
    return NULL;
}

UTexture2D* AFOWRevertedManagerActor::GetGeneratedMotherRenderTexture() const {
    return NULL;
}

FFOWTextureSubChunk AFOWRevertedManagerActor::GetFOWTextureSubChunk() const {
    return FFOWTextureSubChunk{};
}

int32 AFOWRevertedManagerActor::GetFOWStateAt(FVector ActorPosition) {
    return 0;
}

EnumFOWVisionType AFOWRevertedManagerActor::GetFOWStateAround(FVector ActorPosition, int32 pixelLength, int32 pixelHeight, int32 _LengthPrecision, int32 _HeightPrecision) {
    return EnumFOWVisionType::UNSEEN;
}

void AFOWRevertedManagerActor::GetAdjacentTiles(UFOWRevertedRenderTextureDrawer* Drawer, FVector Position, float Radius, TArray<int32>& OutTilesForUpdate) {
}

void AFOWRevertedManagerActor::GenerateRenderTargetTexture() {
}

void AFOWRevertedManagerActor::GenerateMotherRenderTextureChunk(FVector Position, bool minimap) {
}

void AFOWRevertedManagerActor::GenerateMotherRenderTargetTexture() {
}

void AFOWRevertedManagerActor::GenerateMinimapMTRenderTextureChunk(FVector Position) {
}

void AFOWRevertedManagerActor::EndMaskGeneration() {
}

void AFOWRevertedManagerActor::ClearFOW(bool OnlyMinimap) {
}

void AFOWRevertedManagerActor::AddDrawer(UFOWRevertedRenderTextureDrawer* Drawer) {
}


