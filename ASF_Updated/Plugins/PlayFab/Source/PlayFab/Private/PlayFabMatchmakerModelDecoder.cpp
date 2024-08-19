#include "PlayFabMatchmakerModelDecoder.h"

UPlayFabMatchmakerModelDecoder::UPlayFabMatchmakerModelDecoder() {
}

FMatchmakerUserInfoResponse UPlayFabMatchmakerModelDecoder::decodeUserInfoResponseResponse(UPlayFabJsonObject* response) {
    return FMatchmakerUserInfoResponse{};
}

FMatchmakerPlayerLeftResponse UPlayFabMatchmakerModelDecoder::decodePlayerLeftResponseResponse(UPlayFabJsonObject* response) {
    return FMatchmakerPlayerLeftResponse{};
}

FMatchmakerPlayerJoinedResponse UPlayFabMatchmakerModelDecoder::decodePlayerJoinedResponseResponse(UPlayFabJsonObject* response) {
    return FMatchmakerPlayerJoinedResponse{};
}

FMatchmakerAuthUserResponse UPlayFabMatchmakerModelDecoder::decodeAuthUserResponseResponse(UPlayFabJsonObject* response) {
    return FMatchmakerAuthUserResponse{};
}


