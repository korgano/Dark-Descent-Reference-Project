#include "AdminSetupPushNotificationRequest.h"

FAdminSetupPushNotificationRequest::FAdminSetupPushNotificationRequest() {
    this->OverwriteOldARN = false;
    this->Platform = EPushSetupPlatform::pfenum_GCM;
}

