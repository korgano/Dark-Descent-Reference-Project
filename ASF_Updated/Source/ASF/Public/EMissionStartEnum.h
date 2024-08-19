#pragma once
#include "CoreMinimal.h"
#include "EMissionStartEnum.generated.h"

UENUM(BlueprintType)
enum class EMissionStartEnum : uint8 {
    BEFORE_INTRO,
    AFTER_INTRO,
    AFTER_ALL_INIT,
    BEFORE_INTRO_SAVE,
};

