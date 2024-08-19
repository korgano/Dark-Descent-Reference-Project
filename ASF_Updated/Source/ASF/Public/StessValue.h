#pragma once
#include "CoreMinimal.h"
#include "EStressStep.h"
#include "StessValue.generated.h"

USTRUCT(BlueprintType)
struct FStessValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStressStep Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    ASF_API FStessValue();
};

