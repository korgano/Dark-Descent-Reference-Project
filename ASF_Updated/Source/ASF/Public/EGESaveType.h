#pragma once
#include "CoreMinimal.h"
#include "EGESaveType.generated.h"

UENUM(BlueprintType)
enum class EGESaveType : uint8 {
    NO_SAVE,
    ON_INTERACTION,
    ON_ENTER_BOX,
    AT_END,
};

