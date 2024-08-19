#pragma once
#include "CoreMinimal.h"
#include "ESubscriptionType.generated.h"

UENUM(BlueprintType)
enum class ESubscriptionType : uint8 {
    pfenum_LobbyChange,
    pfenum_LobbyInvite,
};

