#pragma once
#include "CoreMinimal.h"
#include "ComponentTwinBool.h"
#include "ComponentTwinBoolDefaultFalse.generated.h"

USTRUCT(BlueprintType)
struct FComponentTwinBoolDefaultFalse : public FComponentTwinBool {
    GENERATED_BODY()
public:
    ASF_API FComponentTwinBoolDefaultFalse();
};

