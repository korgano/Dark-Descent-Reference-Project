#include "MultiplayerUpdateLobbyRequest.h"

FMultiplayerUpdateLobbyRequest::FMultiplayerUpdateLobbyRequest() {
    this->AccessPolicy = EAccessPolicy::pfenum_Public;
    this->CustomTags = NULL;
    this->LobbyData = NULL;
    this->MaxPlayers = 0;
    this->MemberData = NULL;
    this->MemberEntity = NULL;
    this->MembershipLock = EMembershipLock::pfenum_Unlocked;
    this->Owner = NULL;
    this->SearchData = NULL;
}

