#pragma once
#include "CoreMinimal.h"
#include "LocalizedEnum.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct FLocalizedEnum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* LocalizedEnum;
    
    ASF_API FLocalizedEnum();
};

