#include "AdminModifyServerBuildResult.h"

FAdminModifyServerBuildResult::FAdminModifyServerBuildResult() {
    this->MaxGamesPerHost = 0;
    this->MinFreeGameSlots = 0;
    this->Status = EGameBuildStatus::pfenum_Available;
}

