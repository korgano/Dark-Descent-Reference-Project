#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavNodeRefCarrier.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FNavNodeRefCarrier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PolyLocation;
    
    FNavNodeRefCarrier();
};

