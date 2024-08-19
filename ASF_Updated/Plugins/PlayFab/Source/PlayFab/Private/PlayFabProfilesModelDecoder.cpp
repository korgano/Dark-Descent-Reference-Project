#include "PlayFabProfilesModelDecoder.h"

UPlayFabProfilesModelDecoder::UPlayFabProfilesModelDecoder() {
}

FProfilesSetProfileLanguageResponse UPlayFabProfilesModelDecoder::decodeSetProfileLanguageResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesSetProfileLanguageResponse{};
}

FProfilesSetGlobalPolicyResponse UPlayFabProfilesModelDecoder::decodeSetGlobalPolicyResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesSetGlobalPolicyResponse{};
}

FProfilesSetEntityProfilePolicyResponse UPlayFabProfilesModelDecoder::decodeSetEntityProfilePolicyResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesSetEntityProfilePolicyResponse{};
}

FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse UPlayFabProfilesModelDecoder::decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse{};
}

FProfilesGetGlobalPolicyResponse UPlayFabProfilesModelDecoder::decodeGetGlobalPolicyResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesGetGlobalPolicyResponse{};
}

FProfilesGetEntityProfilesResponse UPlayFabProfilesModelDecoder::decodeGetEntityProfilesResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesGetEntityProfilesResponse{};
}

FProfilesGetEntityProfileResponse UPlayFabProfilesModelDecoder::decodeGetEntityProfileResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesGetEntityProfileResponse{};
}


