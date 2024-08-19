#include "EconomySetItemModerationStateRequest.h"

FEconomySetItemModerationStateRequest::FEconomySetItemModerationStateRequest() {
    this->AlternateId = NULL;
    this->CustomTags = NULL;
    this->Status = EModerationStatus::pfenum_Unknown;
}

