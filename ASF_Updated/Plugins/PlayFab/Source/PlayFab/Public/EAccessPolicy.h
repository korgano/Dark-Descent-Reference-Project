#pragma once
#include "CoreMinimal.h"
#include "EAccessPolicy.generated.h"

UENUM(BlueprintType)
enum class EAccessPolicy : uint8 {
    pfenum_Public,
    pfenum_Friends,
    pfenum_Private,
};

