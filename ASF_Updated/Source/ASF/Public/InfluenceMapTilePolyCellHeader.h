#pragma once
#include "CoreMinimal.h"
#include "InfluenceMapPolyCellHeader.h"
#include "InfluenceMapTilePolyCellHeader.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FInfluenceMapTilePolyCellHeader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInfluenceMapPolyCellHeader> PolyCellHeader;
    
    FInfluenceMapTilePolyCellHeader();
};

