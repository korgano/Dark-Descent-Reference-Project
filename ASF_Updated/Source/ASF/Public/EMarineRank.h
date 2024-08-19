#pragma once
#include "CoreMinimal.h"
#include "EMarineRank.generated.h"

UENUM(BlueprintType)
enum class EMarineRank : uint8 {
    ROOKIE,
    PRIVATE,
    SPECIALIST,
    VETERAN,
    HERO,
    LEGEND,
};

