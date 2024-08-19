#include "ServerUpdateSharedGroupDataRequest.h"

FServerUpdateSharedGroupDataRequest::FServerUpdateSharedGroupDataRequest() {
    this->CustomTags = NULL;
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

