#pragma once
#include "CoreMinimal.h"
#include "EWidgetType.generated.h"

UENUM(BlueprintType)
enum class EWidgetType : uint8 {
    SQUAD,
    DIRECTIVES,
    MOTIONTRACKER,
    EVENTS,
    INVENTORY,
    COMMANDPOINTS,
    STAMINA,
    OBJECTIVES,
    FOLLOWERS,
    MEDICAL_SUPPLY,
    AMMOS,
    TOOLS,
    SENTRY,
    RETRIBUTION,
    AGGRESSIVENESS,
};

