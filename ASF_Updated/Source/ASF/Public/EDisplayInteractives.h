#pragma once
#include "CoreMinimal.h"
#include "EDisplayInteractives.generated.h"

UENUM(BlueprintType)
enum class EDisplayInteractives : uint8 {
    Always,
    Toggle,
    Never,
};

