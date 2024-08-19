#include "ClientUpdateSharedGroupDataRequest.h"

FClientUpdateSharedGroupDataRequest::FClientUpdateSharedGroupDataRequest() {
    this->CustomTags = NULL;
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

