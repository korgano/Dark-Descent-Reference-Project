#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CSVFloatString.generated.h"

USTRUCT(BlueprintType)
struct FCSVFloatString : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TT_Value;
    
    ASF_API FCSVFloatString();
};

