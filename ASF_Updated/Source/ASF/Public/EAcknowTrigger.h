#pragma once
#include "CoreMinimal.h"
#include "EAcknowTrigger.generated.h"

UENUM(BlueprintType)
enum class EAcknowTrigger : uint8 {
    SELECTION,
    SKILL,
    DIRECTIVE,
    STANCE,
    INTERACTION,
    CONTACT,
    NEW_BLEEP,
    MORE_BLEEP,
    DAMAGE,
    SHOCK,
    BREAKDOWN,
    STATE_CHANGE,
    SITUATION,
    PHASE_SWITCH,
    EVENT,
    APC,
    OTAGO_ROOM,
};

