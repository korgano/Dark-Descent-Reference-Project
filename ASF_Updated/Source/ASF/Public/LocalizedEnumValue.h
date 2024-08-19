#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocalizedEnum.h"
#include "LocalizedEnumValue.generated.h"

USTRUCT(BlueprintType)
struct FLocalizedEnumValue : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalizedEnum Enum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    ASF_API FLocalizedEnumValue();
};

