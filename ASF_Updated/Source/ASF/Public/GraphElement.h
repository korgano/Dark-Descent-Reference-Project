#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GraphElement.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FGraphElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GenerationOrigin;
    
    FGraphElement();
};

