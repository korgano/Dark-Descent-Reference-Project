#include "MultiplayerJoinArrangedLobbyRequest.h"

FMultiplayerJoinArrangedLobbyRequest::FMultiplayerJoinArrangedLobbyRequest() {
    this->AccessPolicy = EAccessPolicy::pfenum_Public;
    this->CustomTags = NULL;
    this->MaxPlayers = 0;
    this->MemberData = NULL;
    this->MemberEntity = NULL;
    this->OwnerMigrationPolicy = EOwnerMigrationPolicy::pfenum_None;
    this->UseConnections = false;
}

