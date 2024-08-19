#include "AdminUpdateUserDataRequest.h"

FAdminUpdateUserDataRequest::FAdminUpdateUserDataRequest() {
    this->CustomTags = NULL;
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

