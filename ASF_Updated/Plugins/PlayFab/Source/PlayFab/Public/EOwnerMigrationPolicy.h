#pragma once
#include "CoreMinimal.h"
#include "EOwnerMigrationPolicy.generated.h"

UENUM(BlueprintType)
enum class EOwnerMigrationPolicy : uint8 {
    pfenum_None,
    pfenum_Automatic,
    pfenum_Manual,
    pfenum_Server,
};

