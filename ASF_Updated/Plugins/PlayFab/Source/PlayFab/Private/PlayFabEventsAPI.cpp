#include "PlayFabEventsAPI.h"

UPlayFabEventsAPI::UPlayFabEventsAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

UPlayFabEventsAPI* UPlayFabEventsAPI::WriteTelemetryEvents(FEventsWriteEventsRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessWriteTelemetryEvents onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEventsAPI* UPlayFabEventsAPI::WriteEvents(FEventsWriteEventsRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessWriteEvents onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabEventsAPI::HelperWriteTelemetryEvents(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEventsAPI::HelperWriteEvents(FPlayFabBaseModel response, UObject* customData, bool successful) {
}


