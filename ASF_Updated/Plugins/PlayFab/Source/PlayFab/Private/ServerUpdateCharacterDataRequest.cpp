#include "ServerUpdateCharacterDataRequest.h"

FServerUpdateCharacterDataRequest::FServerUpdateCharacterDataRequest() {
    this->CustomTags = NULL;
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

