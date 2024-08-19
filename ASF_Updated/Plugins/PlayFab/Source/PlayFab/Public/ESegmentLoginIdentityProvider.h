#pragma once
#include "CoreMinimal.h"
#include "ESegmentLoginIdentityProvider.generated.h"

UENUM(BlueprintType)
enum class ESegmentLoginIdentityProvider : uint8 {
    pfenum_Unknown,
    pfenum_PlayFab,
    pfenum_Custom,
    pfenum_GameCenter,
    pfenum_GooglePlay,
    pfenum_Steam,
    pfenum_XBoxLive,
    pfenum_PSN,
    pfenum_Kongregate,
    pfenum_Facebook,
    pfenum_IOSDevice,
    pfenum_AndroidDevice,
    pfenum_Twitch,
    pfenum_WindowsHello,
    pfenum_GameServer,
    pfenum_CustomServer,
    pfenum_NintendoSwitch,
    pfenum_FacebookInstantGames,
    pfenum_OpenIdConnect,
    pfenum_Apple,
    pfenum_NintendoSwitchAccount,
};

