#pragma once
#include "CoreMinimal.h"
#include "EUserDataPermission.generated.h"

UENUM(BlueprintType)
enum class EUserDataPermission : uint8 {
    pfenum_Private,
    pfenum_Public,
};

