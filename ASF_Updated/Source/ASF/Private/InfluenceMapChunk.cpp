#include "InfluenceMapChunk.h"

UInfluenceMapChunk::UInfluenceMapChunk() {
    this->ChunkIndex = 0;
    this->ChunkCellNbr = 0;
    this->ChunkCellIndex = 0;
    this->InfluenceMapCellNbr = 0;
    this->InfluenceMapManager = NULL;
}

bool UInfluenceMapChunk::UpdateInfluenceMapWeight(TArray<FInfluenceMapTilePolyCell>& TilePolyCell) {
    return false;
}


