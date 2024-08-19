#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventConditionType.generated.h"

UENUM(BlueprintType)
enum class EOtagoEventConditionType : uint8 {
    ENGINEER_COUNT,
    PHYSICIAN_COUNT,
    MARINE_COUNT,
    AVAILABLE_MARINE_COUNT,
    WOUNDED_MARINE_COUNT,
    TIRED_MARINE_COUNT,
    EXHAUSTED_MARINE_COUNT,
    TRAUMATIZED_MARINE_COUNT,
    UNTRAUMATIZED_MARINE_COUNT,
    HEALTHY_MARINE_COUNT,
    MATERIAL_COUNT,
    XENOSAMPLE_COUNT,
    MISSION_STARTED,
    MISSION_FINISHED,
    REMAINING_XENO_TECH_RESEARCH,
    INFESTATION_LEVEL,
    CAMPAIGN_TURN,
    REMAINING_DEATH_CLOCK_TURNS,
    EVENT_PICK_COUNT,
    TURNS_SINCE_EVENT_PICKED,
    FEATURE_UNLOCKED,
    NONE,
};

