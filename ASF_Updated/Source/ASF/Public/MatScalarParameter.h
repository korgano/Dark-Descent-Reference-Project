#pragma once
#include "CoreMinimal.h"
#include "MatScalarParameter.generated.h"

USTRUCT(BlueprintType)
struct FMatScalarParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScalarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    ASF_API FMatScalarParameter();
};

