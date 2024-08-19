#include "ServerGetLeaderboardRequest.h"

FServerGetLeaderboardRequest::FServerGetLeaderboardRequest() {
    this->CustomTags = NULL;
    this->MaxResultsCount = 0;
    this->ProfileConstraints = NULL;
    this->StartPosition = 0;
    this->UseSpecificVersion = false;
    this->Version = 0;
}

