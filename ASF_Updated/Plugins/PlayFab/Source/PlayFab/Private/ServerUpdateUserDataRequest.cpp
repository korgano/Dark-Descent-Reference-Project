#include "ServerUpdateUserDataRequest.h"

FServerUpdateUserDataRequest::FServerUpdateUserDataRequest() {
    this->CustomTags = NULL;
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

