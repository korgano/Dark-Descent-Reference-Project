#pragma once
#include "CoreMinimal.h"
#include "DynamicElementDisplayProperties.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FDynamicElementDisplayProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementArrayID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DynamicEllementIdx;
    
    FDynamicElementDisplayProperties();
};

