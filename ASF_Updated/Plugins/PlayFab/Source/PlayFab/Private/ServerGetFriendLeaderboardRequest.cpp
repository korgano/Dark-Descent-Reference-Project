#include "ServerGetFriendLeaderboardRequest.h"

FServerGetFriendLeaderboardRequest::FServerGetFriendLeaderboardRequest() {
    this->CustomTags = NULL;
    this->IncludeFacebookFriends = false;
    this->IncludeSteamFriends = false;
    this->MaxResultsCount = 0;
    this->ProfileConstraints = NULL;
    this->StartPosition = 0;
    this->UseSpecificVersion = false;
    this->Version = 0;
}

