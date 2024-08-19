#pragma once
#include "CoreMinimal.h"
#include "EPowerLoaderActivity.generated.h"

UENUM(BlueprintType)
enum class EPowerLoaderActivity : uint8 {
    WAIT,
    FOLLOWSPLINE,
    TAKE,
    DROP,
};

