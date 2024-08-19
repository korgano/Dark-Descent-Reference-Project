#pragma once
#include "CoreMinimal.h"
#include "StructPOIResultData.h"
#include "StructPOIResult.generated.h"

class UAIPointOfInterestVolatile;

USTRUCT(BlueprintType)
struct FStructPOIResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestVolatile* POI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructPOIResultData POIResultData;
    
    ASF_API FStructPOIResult();
};

