#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventTargetType.generated.h"

UENUM(BlueprintType)
enum class EOtagoEventTargetType : uint8 {
    RANDOM_MARINE,
    RANDOM_AVAILABLE_MARINE,
    RANDOM_WOUNDED_MARINE,
    RANDOM_TRAUMATIZED_MARINE,
    RANDOM_UNTRAUMATIZED_MARINE,
    RANDOM_HEALTHY_MARINE,
    RANDOM_MOST_EXPERIENCED_MARINE,
    RANDOM_SURVIVOR,
    RANDOM_UNLOCKED_LOCATION,
};

