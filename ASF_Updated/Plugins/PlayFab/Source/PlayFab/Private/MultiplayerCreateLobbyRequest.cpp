#include "MultiplayerCreateLobbyRequest.h"

FMultiplayerCreateLobbyRequest::FMultiplayerCreateLobbyRequest() {
    this->AccessPolicy = EAccessPolicy::pfenum_Public;
    this->CustomTags = NULL;
    this->LobbyData = NULL;
    this->MaxPlayers = 0;
    this->Owner = NULL;
    this->OwnerMigrationPolicy = EOwnerMigrationPolicy::pfenum_None;
    this->SearchData = NULL;
    this->UseConnections = false;
}

