#pragma once
#include "CoreMinimal.h"
#include "EnumAlienAttackMemberUsed.generated.h"

UENUM(BlueprintType)
enum class EnumAlienAttackMemberUsed : uint8 {
    LEFT_ARM,
    RIGHT_ARM,
    TAIL,
    HEAD,
    ALL,
};

