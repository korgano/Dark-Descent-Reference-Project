#pragma once
#include "CoreMinimal.h"
#include "MoneyChangedInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FMoneyChangedInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 variation_amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 materials_remaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString variation_cause;
    
    FMoneyChangedInfosStruct();
};

