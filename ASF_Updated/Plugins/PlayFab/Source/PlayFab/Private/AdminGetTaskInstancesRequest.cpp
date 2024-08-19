#include "AdminGetTaskInstancesRequest.h"

FAdminGetTaskInstancesRequest::FAdminGetTaskInstancesRequest() {
    this->StatusFilter = ETaskInstanceStatus::pfenum_Succeeded;
    this->TaskIdentifier = NULL;
}

