#pragma once
#include "CoreMinimal.h"
#include "EnumSubObjFinishReason.generated.h"

UENUM(BlueprintType)
enum class EnumSubObjFinishReason : uint8 {
    FAILED,
    SUCCEED,
    INVALIDATED,
};

