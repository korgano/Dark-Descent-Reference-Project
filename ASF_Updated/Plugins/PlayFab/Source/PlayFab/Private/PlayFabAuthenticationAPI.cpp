#include "PlayFabAuthenticationAPI.h"

UPlayFabAuthenticationAPI::UPlayFabAuthenticationAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::ValidateEntityToken(FAuthenticationValidateEntityTokenRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessValidateEntityToken onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabAuthenticationAPI::HelperValidateEntityToken(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabAuthenticationAPI::HelperGetEntityToken(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::GetEntityToken(FAuthenticationGetEntityTokenRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessGetEntityToken onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}


