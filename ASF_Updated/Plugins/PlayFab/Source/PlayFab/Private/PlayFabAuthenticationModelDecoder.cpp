#include "PlayFabAuthenticationModelDecoder.h"

UPlayFabAuthenticationModelDecoder::UPlayFabAuthenticationModelDecoder() {
}

FAuthenticationValidateEntityTokenResponse UPlayFabAuthenticationModelDecoder::decodeValidateEntityTokenResponseResponse(UPlayFabJsonObject* response) {
    return FAuthenticationValidateEntityTokenResponse{};
}

FAuthenticationGetEntityTokenResponse UPlayFabAuthenticationModelDecoder::decodeGetEntityTokenResponseResponse(UPlayFabJsonObject* response) {
    return FAuthenticationGetEntityTokenResponse{};
}


