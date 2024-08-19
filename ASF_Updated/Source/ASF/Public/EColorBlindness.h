#pragma once
#include "CoreMinimal.h"
#include "EColorBlindness.generated.h"

UENUM(BlueprintType)
enum class EColorBlindness : uint8 {
    None,
    Deuteranopia,
    Protanopia,
    Tritanopia,
};

