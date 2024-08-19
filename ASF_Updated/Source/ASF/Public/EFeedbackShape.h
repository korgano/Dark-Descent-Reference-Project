#pragma once
#include "CoreMinimal.h"
#include "EFeedbackShape.generated.h"

UENUM(BlueprintType)
enum class EFeedbackShape : uint8 {
    DISC,
    CAPSULE,
    TRAPEZ,
    TRIANGLE,
};

