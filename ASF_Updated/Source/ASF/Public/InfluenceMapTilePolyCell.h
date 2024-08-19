#pragma once
#include "CoreMinimal.h"
#include "InfluenceMapPolyCell.h"
#include "InfluenceMapTilePolyCell.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FInfluenceMapTilePolyCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInfluenceMapPolyCell> PolyCell;
    
    FInfluenceMapTilePolyCell();
};

