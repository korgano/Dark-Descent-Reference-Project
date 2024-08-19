#pragma once
#include "CoreMinimal.h"
#include "ECodexEntryGrouping.generated.h"

UENUM(BlueprintType)
enum class ECodexEntryGrouping : uint8 {
    NONE,
    BYMISSION,
    BYSECTION,
};

