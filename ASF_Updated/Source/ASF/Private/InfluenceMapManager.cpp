#include "InfluenceMapManager.h"
#include "Templates/SubclassOf.h"

AInfluenceMapManager::AInfluenceMapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoomCluster = NULL;
    this->IsWeigherMultiThreadActivated = true;
    this->AllowNavigationInvalidation = false;
    this->InfluenceMapScale = 10000;
    this->InfluenceMapCellSize = 100;
    this->InfluenceMapChunkCellNbr = 64;
    this->InfluenceMapTask = NULL;
    this->InfluenceMapRowCellNbr = 0;
    this->InfluenceMapRowChunkNbr = 0;
    this->NavBlockerModification = false;
    this->NeedDataSwap = false;
    this->DefaultQuery = NULL;
    this->InfluenceMapTexture = NULL;
    this->M_InfluenceMapDebug = NULL;
    this->DebugPolyCell = false;
    this->PolyTileIdx = 0;
    this->PolyCellIdx = 0;
    this->GameMode = NULL;
    this->bIsGenerated = false;
}

void AInfluenceMapManager::UpdateNavBlocker(FGameplayTag _UpdatedFaction) {
}

void AInfluenceMapManager::UnregisterQuery(UObject* _Owner) {
}

void AInfluenceMapManager::UnLockInfluenceMapData() {
}

void AInfluenceMapManager::SwapInfluenceMapData() {
}

void AInfluenceMapManager::SwapChunkInfluenceMapData() {
}

void AInfluenceMapManager::StartInfluenceMaskGeneration_Thread() {
}

void AInfluenceMapManager::SetInfluenceMapScale(int32 _InfluenceMapScale) {
}

void AInfluenceMapManager::SetInfluenceMapDebugQuerier(FInfluenceMapDebugQuerier _DebugQuerier) {
}

void AInfluenceMapManager::SetInfluenceMapCenterPosition(FVector _InfluenceMapCenter) {
}

void AInfluenceMapManager::SetDebugPolyCell(bool _DebugPolyCell) {
}

void AInfluenceMapManager::SelectPolyCellByLocation(FVector _WorldLocation) {
}

void AInfluenceMapManager::ResizeTilePolyCell(int32 Size) {
}

void AInfluenceMapManager::ResizePolyCell(int32 TileIdx, int32 NewSize) {
}

void AInfluenceMapManager::ResetPolyCell(int32 TileIdx, int32 CellIdx) {
}

void AInfluenceMapManager::RequestDataSwap() {
}

void AInfluenceMapManager::RemoveWeigher(UInfluenceMapWeigherComponent* _Weigher, bool _Saving) {
}

void AInfluenceMapManager::RegisterQuery(UObject* _Owner) {
}

void AInfluenceMapManager::OnWeighGenerationByChunkEnd() {
}

void AInfluenceMapManager::OnRoomClusterSet(ARoomCluster* _RoomCluster) {
}

void AInfluenceMapManager::LockInfluenceMapData() {
}

bool AInfluenceMapManager::IsCellInfluencedByArea(const FInfluenceMapCell& _InfluenceMapCell, TSubclassOf<UInfluenceMapArea> _InfluenceMapAreaClass) const {
    return false;
}

void AInfluenceMapManager::InvalidateWeighterNavigation() {
}

void AInfluenceMapManager::InitInfluenceMapUpdate_Implementation() {
}

void AInfluenceMapManager::InitInfluenceMapData_Implementation() {
}

bool AInfluenceMapManager::GetUseInfluenceMap() {
    return false;
}

TArray<int32> AInfluenceMapManager::GetUpdatedChunkIndex(const TArray<int32>& _UpdatedChunk, int32 BinaryInfluenceMaskChunkNbr, int32 TopLeftChunkIndex) const {
    return TArray<int32>();
}

UInfluenceMapQuery* AInfluenceMapManager::GetQuery(UObject* _Owner, TSubclassOf<UInfluenceMapFilter> _InfluenceMapFilter) {
    return NULL;
}

bool AInfluenceMapManager::GetIsGenerated() const {
    return false;
}

FVector AInfluenceMapManager::GetInfluenceMapTopLeftPos() const {
    return FVector{};
}

TArray<FInfluenceMapTilePolyCellHeader> AInfluenceMapManager::GetInfluenceMapTilePolyCellHeader() {
    return TArray<FInfluenceMapTilePolyCellHeader>();
}

TArray<FInfluenceMapTilePolyCell> AInfluenceMapManager::GetInfluenceMapTilePolyCell() {
    return TArray<FInfluenceMapTilePolyCell>();
}

int32 AInfluenceMapManager::GetInfluenceMapScale() const {
    return 0;
}

int32 AInfluenceMapManager::GetInfluenceMapRowChunkNbr() const {
    return 0;
}

int32 AInfluenceMapManager::GetInfluenceMapRowCellNbr() const {
    return 0;
}

int32 AInfluenceMapManager::GetInfluenceMapChunkCellNbr() const {
    return 0;
}

FVector AInfluenceMapManager::GetInfluenceMapCenter() const {
    return FVector{};
}

int32 AInfluenceMapManager::GetInfluenceMapCellSize() const {
    return 0;
}

TArray<FInfluenceMapCellHeader> AInfluenceMapManager::GetInfluenceMapCellHeader() {
    return TArray<FInfluenceMapCellHeader>();
}

UInfluenceMapArea* AInfluenceMapManager::GetInfluenceMapArea(int32 _AreaID) const {
    return NULL;
}

FVector AInfluenceMapManager::GetChunkTopLeft(int32 _ChunkIndex) const {
    return FVector{};
}

int32 AInfluenceMapManager::GetChunkIndex(FVector _WorldPosition) const {
    return 0;
}

void AInfluenceMapManager::GenerateInfluenceMapTexture() {
}

FWeigherMaskOffset AInfluenceMapManager::FindMaskOffset(int32 _ChunkIndex, int32 BinaryInfluenceMaskCellNbr, int32 BinaryInfluenceMaskChunkNbr, int32 TopLeftChunkIndex) const {
    return FWeigherMaskOffset{};
}

int32 AInfluenceMapManager::FindCellIndexInPlan(int32 _TopLeftChunkIndex, int32 _X, int32 _Y) const {
    return 0;
}

FInfluenceMapCell AInfluenceMapManager::FindCellAtLocation(FVector _WorldLocation) const {
    return FInfluenceMapCell{};
}

void AInfluenceMapManager::AddWeigher(UInfluenceMapWeigherComponent* _Weigher, bool _FromSave) {
}


