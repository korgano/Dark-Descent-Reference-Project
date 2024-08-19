#pragma once
#include "CoreMinimal.h"
#include "WeigherMaskOffset.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FWeigherMaskOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaskIndexOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OffsetY;
    
    FWeigherMaskOffset();
};

