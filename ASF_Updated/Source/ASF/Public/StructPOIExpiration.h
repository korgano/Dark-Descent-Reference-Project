#pragma once
#include "CoreMinimal.h"
#include "StructPOIExpiration.generated.h"

class UAIPointOfInterestVolatile;

USTRUCT(BlueprintType)
struct FStructPOIExpiration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestVolatile* POIVolatile;
    
    ASF_API FStructPOIExpiration();
};

