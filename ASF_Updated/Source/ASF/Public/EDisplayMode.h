#pragma once
#include "CoreMinimal.h"
#include "EDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EDisplayMode : uint8 {
    BorderlessWindow,
    Window,
};

