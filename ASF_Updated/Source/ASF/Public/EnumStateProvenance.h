#pragma once
#include "CoreMinimal.h"
#include "EnumStateProvenance.generated.h"

UENUM(BlueprintType)
enum class EnumStateProvenance : uint8 {
    INTERNAL,
    TREE,
    EXTERNAL,
    ROLLBACK,
};

