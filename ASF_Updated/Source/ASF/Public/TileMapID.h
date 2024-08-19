#pragma once
#include "CoreMinimal.h"
#include "TileMapID.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FTileMapID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GraphID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GraphTilesIdx;
    
    FTileMapID();
};

