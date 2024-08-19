#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventEffectTargetType.generated.h"

UENUM(BlueprintType)
enum class EOtagoEventEffectTargetType : uint8 {
    NO_TARGET,
    EVENT_TARGET_BY_INDEX,
    RANDOM_MARINE,
    RANDOM_AVAILABLE_MARINE,
    RANDOM_WOUNDED_MARINE,
    RANDOM_TRAUMATIZED_MARINE,
    RANDOM_UNTRAUMATIZED_MARINE,
    RANDOM_HEALTHY_MARINE,
    RANDOM_MOST_EXPERIENCED_MARINE,
    ALL_MARINES,
    ALL_AVAILABLE_MARINES,
    ALL_TIRED_MARINES,
    ALL_EXHAUSTED_MARINES,
    ALL_TIRED_OR_EXHAUSTED_MARINES,
    ALL_MARINES_NOT_TIRED_OR_EXHAUSTED,
};
