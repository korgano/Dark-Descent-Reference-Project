#pragma once
#include "CoreMinimal.h"
#include "EAnalysisTaskState.generated.h"

UENUM(BlueprintType)
enum class EAnalysisTaskState : uint8 {
    pfenum_Waiting,
    pfenum_ReadyForSubmission,
    pfenum_SubmittingToPipeline,
    pfenum_Running,
    pfenum_Completed,
    pfenum_Failed,
    pfenum_Canceled,
};

