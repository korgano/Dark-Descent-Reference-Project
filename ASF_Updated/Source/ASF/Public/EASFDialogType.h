#pragma once
#include "CoreMinimal.h"
#include "EASFDialogType.generated.h"

UENUM(BlueprintType)
enum class EASFDialogType : uint8 {
    None,
    Generic,
    SaveFailed,
    Eula,
    Privacy,
    ControllerDisconnected,
};

