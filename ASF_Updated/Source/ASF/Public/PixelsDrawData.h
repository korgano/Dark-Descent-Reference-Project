#pragma once
#include "CoreMinimal.h"
#include "PixelsDrawData.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FPixelsDrawData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool canDraw;
    
    FPixelsDrawData();
};

