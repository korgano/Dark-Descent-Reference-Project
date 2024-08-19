#include "PlayFabInsightsAPI.h"

UPlayFabInsightsAPI::UPlayFabInsightsAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

UPlayFabInsightsAPI* UPlayFabInsightsAPI::SetStorageRetention(FInsightsInsightsSetStorageRetentionRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessSetStorageRetention onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabInsightsAPI* UPlayFabInsightsAPI::SetPerformance(FInsightsInsightsSetPerformanceRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessSetPerformance onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabInsightsAPI::HelperSetStorageRetention(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabInsightsAPI::HelperSetPerformance(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabInsightsAPI::HelperGetPendingOperations(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabInsightsAPI::HelperGetOperationStatus(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabInsightsAPI::HelperGetLimits(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabInsightsAPI::HelperGetDetails(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

UPlayFabInsightsAPI* UPlayFabInsightsAPI::GetPendingOperations(FInsightsInsightsGetPendingOperationsRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessGetPendingOperations onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabInsightsAPI* UPlayFabInsightsAPI::GetOperationStatus(FInsightsInsightsGetOperationStatusRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessGetOperationStatus onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabInsightsAPI* UPlayFabInsightsAPI::GetLimits(FInsightsInsightsEmptyRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessGetLimits onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabInsightsAPI* UPlayFabInsightsAPI::GetDetails(FInsightsInsightsEmptyRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessGetDetails onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}


