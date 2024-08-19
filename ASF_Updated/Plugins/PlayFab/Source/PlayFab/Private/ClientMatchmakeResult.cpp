#include "ClientMatchmakeResult.h"

FClientMatchmakeResult::FClientMatchmakeResult() {
    this->PollWaitTimeMS = 0;
    this->ServerPort = 0;
    this->Status = EMatchmakeStatus::pfenum_Complete;
}

