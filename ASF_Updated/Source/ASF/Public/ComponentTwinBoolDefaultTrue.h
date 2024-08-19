#pragma once
#include "CoreMinimal.h"
#include "ComponentTwinBool.h"
#include "ComponentTwinBoolDefaultTrue.generated.h"

USTRUCT(BlueprintType)
struct FComponentTwinBoolDefaultTrue : public FComponentTwinBool {
    GENERATED_BODY()
public:
    ASF_API FComponentTwinBoolDefaultTrue();
};

