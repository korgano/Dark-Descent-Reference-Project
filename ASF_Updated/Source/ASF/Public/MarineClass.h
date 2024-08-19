#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MarineClass.generated.h"

class UMarineClassDataAssets;

USTRUCT(BlueprintType)
struct FMarineClass : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMarineClassDataAssets* MarineClass;
    
    ASF_API FMarineClass();
};

