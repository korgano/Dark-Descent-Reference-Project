#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Segment.generated.h"

USTRUCT(BlueprintType)
struct FSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector End;
    
    ASF_API FSegment();
};

