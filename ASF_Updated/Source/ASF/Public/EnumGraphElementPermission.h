#pragma once
#include "CoreMinimal.h"
#include "EnumGraphElementPermission.generated.h"

UENUM(BlueprintType)
enum class EnumGraphElementPermission : uint8 {
    UNAUTORIZED,
    AUTORIZED,
};

