#include "AdminCreatePlayerStatisticDefinitionRequest.h"

FAdminCreatePlayerStatisticDefinitionRequest::FAdminCreatePlayerStatisticDefinitionRequest() {
    this->AggregationMethod = EStatisticAggregationMethod::pfenum_Last;
    this->CustomTags = NULL;
    this->VersionChangeInterval = EStatisticResetIntervalOption::pfenum_Never;
}

