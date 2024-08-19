#pragma once
#include "CoreMinimal.h"
#include "ComponentTwinBool.generated.h"

USTRUCT(BlueprintType)
struct FComponentTwinBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValue;
    
    ASF_API FComponentTwinBool();
};

