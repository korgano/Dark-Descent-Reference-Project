#pragma once
#include "CoreMinimal.h"
#include "EnableStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FEnableStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enable_playfab;
    
    FEnableStruct();
};

