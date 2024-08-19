#include "AdminUpdatePlayerStatisticDefinitionRequest.h"

FAdminUpdatePlayerStatisticDefinitionRequest::FAdminUpdatePlayerStatisticDefinitionRequest() {
    this->AggregationMethod = EStatisticAggregationMethod::pfenum_Last;
    this->VersionChangeInterval = EStatisticResetIntervalOption::pfenum_Never;
}

