#pragma once
#include "CoreMinimal.h"
#include "IntVector2D.generated.h"

USTRUCT(BlueprintType)
struct FIntVector2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    ASF_API FIntVector2D();
};

