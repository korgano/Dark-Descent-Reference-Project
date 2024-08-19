#pragma once
#include "CoreMinimal.h"
#include "EUserSettingType.generated.h"

UENUM(BlueprintType)
enum class EUserSettingType : uint8 {
    Bool,
    Float,
    Enum,
    Int,
};

