#pragma once
#include "CoreMinimal.h"
#include "EnumTryApplyEffectResult.generated.h"

UENUM(BlueprintType)
enum class EnumTryApplyEffectResult : uint8 {
    HAS_REFRESHED,
    HAS_FAIL_REFRESHED,
    ACTIVATED,
    NOT_ACTIVATED,
    TARGET_DONT_HAVE_EFFECTHANDLER,
};

