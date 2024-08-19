#pragma once
#include "CoreMinimal.h"
#include "EContainerFlavor.generated.h"

UENUM(BlueprintType)
enum class EContainerFlavor : uint8 {
    pfenum_ManagedWindowsServerCore,
    pfenum_CustomLinux,
    pfenum_ManagedWindowsServerCorePreview,
    pfenum_Invalid,
};

