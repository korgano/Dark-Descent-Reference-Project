#pragma once
#include "CoreMinimal.h"
#include "EnumGraphPolyDiplomacy.generated.h"

UENUM(BlueprintType)
enum class EnumGraphPolyDiplomacy : uint8 {
    STOP,
    ALLOW,
    ALLOW_DUPLICATE,
};

