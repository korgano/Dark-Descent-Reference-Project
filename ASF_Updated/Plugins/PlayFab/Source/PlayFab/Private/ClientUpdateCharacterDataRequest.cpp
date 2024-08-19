#include "ClientUpdateCharacterDataRequest.h"

FClientUpdateCharacterDataRequest::FClientUpdateCharacterDataRequest() {
    this->CustomTags = NULL;
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

