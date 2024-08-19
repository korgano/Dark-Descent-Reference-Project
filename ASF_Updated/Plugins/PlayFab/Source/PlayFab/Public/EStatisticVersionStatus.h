#pragma once
#include "CoreMinimal.h"
#include "EStatisticVersionStatus.generated.h"

UENUM(BlueprintType)
enum class EStatisticVersionStatus : uint8 {
    pfenum_Active,
    pfenum_SnapshotPending,
    pfenum_Snapshot,
    pfenum_ArchivalPending,
    pfenum_Archived,
};

