#pragma once
#include "CoreMinimal.h"
#include "EScheduledTaskType.generated.h"

UENUM(BlueprintType)
enum class EScheduledTaskType : uint8 {
    pfenum_CloudScript,
    pfenum_ActionsOnPlayerSegment,
    pfenum_CloudScriptAzureFunctions,
    pfenum_InsightsScheduledScaling,
};

