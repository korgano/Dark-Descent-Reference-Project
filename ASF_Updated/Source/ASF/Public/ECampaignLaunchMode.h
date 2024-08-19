#pragma once
#include "CoreMinimal.h"
#include "ECampaignLaunchMode.generated.h"

UENUM(BlueprintType)
enum class ECampaignLaunchMode : uint8 {
    Prologue,
    SkipPrologueShipping,
    SkipPrologueCheat,
    NewGamePlus,
};

