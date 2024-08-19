#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterInteractionType.generated.h"

UENUM(BlueprintType)
enum class EnumCharacterInteractionType : uint8 {
    NONE,
    GRIP,
    SEARCH,
    SEARCH_CORPSE,
    KEYBOARD,
    WELDING,
    HEAL_HIMSELF,
    HEAL_PARTNER,
    TAKE_STRESSPILLS,
    TAKE_PAINKILLER,
    REPRIMANDE,
    CALM_DOWN,
    DROP_MINES,
    SENTRY_DROP,
    SENTRY_REPAIR,
    SENTRY_RELOAD,
    DEMOLITION,
    DEPLOY_MOTION_TRACKER,
};

