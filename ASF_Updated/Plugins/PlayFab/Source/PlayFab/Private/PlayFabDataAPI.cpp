#include "PlayFabDataAPI.h"

UPlayFabDataAPI::UPlayFabDataAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

UPlayFabDataAPI* UPlayFabDataAPI::SetObjects(FDataSetObjectsRequest Request, UPlayFabDataAPI::FDelegateOnSuccessSetObjects onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabDataAPI* UPlayFabDataAPI::InitiateFileUploads(FDataInitiateFileUploadsRequest Request, UPlayFabDataAPI::FDelegateOnSuccessInitiateFileUploads onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabDataAPI::HelperSetObjects(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabDataAPI::HelperInitiateFileUploads(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabDataAPI::HelperGetObjects(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabDataAPI::HelperGetFiles(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabDataAPI::HelperFinalizeFileUploads(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabDataAPI::HelperDeleteFiles(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabDataAPI::HelperAbortFileUploads(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

UPlayFabDataAPI* UPlayFabDataAPI::GetObjects(FDataGetObjectsRequest Request, UPlayFabDataAPI::FDelegateOnSuccessGetObjects onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabDataAPI* UPlayFabDataAPI::GetFiles(FDataGetFilesRequest Request, UPlayFabDataAPI::FDelegateOnSuccessGetFiles onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabDataAPI* UPlayFabDataAPI::FinalizeFileUploads(FDataFinalizeFileUploadsRequest Request, UPlayFabDataAPI::FDelegateOnSuccessFinalizeFileUploads onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabDataAPI* UPlayFabDataAPI::DeleteFiles(FDataDeleteFilesRequest Request, UPlayFabDataAPI::FDelegateOnSuccessDeleteFiles onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabDataAPI* UPlayFabDataAPI::AbortFileUploads(FDataAbortFileUploadsRequest Request, UPlayFabDataAPI::FDelegateOnSuccessAbortFileUploads onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}


