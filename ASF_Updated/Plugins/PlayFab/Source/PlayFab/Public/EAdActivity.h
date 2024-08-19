#pragma once
#include "CoreMinimal.h"
#include "EAdActivity.generated.h"

UENUM(BlueprintType)
enum class EAdActivity : uint8 {
    pfenum_Opened,
    pfenum_Closed,
    pfenum_Start,
    pfenum_End,
};

