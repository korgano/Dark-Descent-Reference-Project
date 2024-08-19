#pragma once
#include "CoreMinimal.h"
#include "InfluenceMapCellHeader.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FInfluenceMapCellHeader {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> PolyCellIndex;
    
    FInfluenceMapCellHeader();
};

