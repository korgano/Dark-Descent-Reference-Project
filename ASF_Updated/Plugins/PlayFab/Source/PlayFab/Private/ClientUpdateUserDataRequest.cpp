#include "ClientUpdateUserDataRequest.h"

FClientUpdateUserDataRequest::FClientUpdateUserDataRequest() {
    this->CustomTags = NULL;
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

