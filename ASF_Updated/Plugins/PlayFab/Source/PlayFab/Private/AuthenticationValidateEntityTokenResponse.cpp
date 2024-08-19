#include "AuthenticationValidateEntityTokenResponse.h"

FAuthenticationValidateEntityTokenResponse::FAuthenticationValidateEntityTokenResponse() {
    this->Entity = NULL;
    this->IdentifiedDeviceType = EIdentifiedDeviceType::pfenum_Unknown;
    this->IdentityProvider = ELoginIdentityProvider::pfenum_Unknown;
    this->Lineage = NULL;
}

