#pragma once
#include "CoreMinimal.h"
#include "DynamicTextNumber.generated.h"

USTRUCT(BlueprintType)
struct LOCALIZATIONDYNAMIC_API FDynamicTextNumber {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeginIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPercent;
    
    FDynamicTextNumber();
};

