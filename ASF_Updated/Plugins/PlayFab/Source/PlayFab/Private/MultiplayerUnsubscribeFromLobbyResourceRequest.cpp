#include "MultiplayerUnsubscribeFromLobbyResourceRequest.h"

FMultiplayerUnsubscribeFromLobbyResourceRequest::FMultiplayerUnsubscribeFromLobbyResourceRequest() {
    this->CustomTags = NULL;
    this->EntityKey = NULL;
    this->SubscriptionVersion = 0;
    this->Type = ESubscriptionType::pfenum_LobbyChange;
}

