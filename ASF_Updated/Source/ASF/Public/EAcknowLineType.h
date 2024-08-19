#pragma once
#include "CoreMinimal.h"
#include "EAcknowLineType.generated.h"

UENUM(BlueprintType)
enum class EAcknowLineType : uint8 {
    ACKNOW,
    ASSENT,
    WARNING,
    REACTION,
    EXPRESSION,
    NARRATIVE,
    MEDIA,
};

