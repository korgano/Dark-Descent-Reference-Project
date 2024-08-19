#pragma once
#include "CoreMinimal.h"
#include "InfluenceMapPolyCellHeader.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FInfluenceMapPolyCellHeader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CellIndex;
    
    FInfluenceMapPolyCellHeader();
};

