#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InfluenceMapTilePolyCell.h"
#include "InfluenceMapChunk.generated.h"

class AInfluenceMapManager;

UCLASS(Blueprintable)
class ASF_API UInfluenceMapChunk : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkCellNbr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkCellIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfluenceMapCellNbr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfluenceMapManager* InfluenceMapManager;
    
    UInfluenceMapChunk();

    UFUNCTION(BlueprintCallable)
    bool UpdateInfluenceMapWeight(TArray<FInfluenceMapTilePolyCell>& TilePolyCell);
    
};

