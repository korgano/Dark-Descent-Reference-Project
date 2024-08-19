#pragma once
#include "CoreMinimal.h"
#include "GraphDisplayProperties.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FGraphDisplayProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GraphID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GraphTileIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GraphTilePolyIdx;
    
    FGraphDisplayProperties();
};

