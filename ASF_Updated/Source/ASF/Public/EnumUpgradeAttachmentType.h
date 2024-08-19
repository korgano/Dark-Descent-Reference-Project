#pragma once
#include "CoreMinimal.h"
#include "EnumUpgradeAttachmentType.generated.h"

UENUM(BlueprintType)
enum class EnumUpgradeAttachmentType : uint8 {
    ATTACH_TO_MARINE,
    ATTACH_TO_WEAPON_MAIN,
    ATTACH_TO_WEAPON_SECONDARY,
};

