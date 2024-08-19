#include "ServerGetFriendsListRequest.h"

FServerGetFriendsListRequest::FServerGetFriendsListRequest() {
    this->CustomTags = NULL;
    this->IncludeFacebookFriends = false;
    this->IncludeSteamFriends = false;
    this->ProfileConstraints = NULL;
}

