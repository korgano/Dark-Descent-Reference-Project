#include "PlayFabEconomyAPI.h"

UPlayFabEconomyAPI::UPlayFabEconomyAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::UpdateDraftItem(FEconomyUpdateDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::UpdateCatalogConfig(FEconomyUpdateCatalogConfigRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateCatalogConfig onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::TakedownItemReviews(FEconomyTakedownItemReviewsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessTakedownItemReviews onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::SubmitItemReviewVote(FEconomySubmitItemReviewVoteRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSubmitItemReviewVote onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::SetItemModerationState(FEconomySetItemModerationStateRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSetItemModerationState onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::SearchItems(FEconomySearchItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearchItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::ReviewItem(FEconomyReviewItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessReviewItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::ReportItemReview(FEconomyReportItemReviewRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessReportItemReview onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::ReportItem(FEconomyReportItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessReportItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::PublishDraftItem(FEconomyPublishDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessPublishDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabEconomyAPI::HelperUpdateDraftItem(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperUpdateCatalogConfig(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperTakedownItemReviews(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperSubmitItemReviewVote(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperSetItemModerationState(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperSearchItems(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperReviewItem(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperReportItemReview(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperReportItem(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperPublishDraftItem(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperGetItems(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperGetItemReviewSummary(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperGetItemReviews(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperGetItemPublishStatus(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperGetItemModerationState(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperGetItem(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperGetEntityItemReview(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperGetEntityDraftItems(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperGetDraftItems(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperGetDraftItem(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperGetCatalogConfig(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperDeleteItem(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperDeleteEntityItemReviews(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperCreateUploadUrls(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabEconomyAPI::HelperCreateDraftItem(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::GetItems(FEconomyGetItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::GetItemReviewSummary(FEconomyGetItemReviewSummaryRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemReviewSummary onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::GetItemReviews(FEconomyGetItemReviewsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemReviews onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::GetItemPublishStatus(FEconomyGetItemPublishStatusRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemPublishStatus onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::GetItemModerationState(FEconomyGetItemModerationStateRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemModerationState onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::GetItem(FEconomyGetItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::GetEntityItemReview(FEconomyGetEntityItemReviewRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetEntityItemReview onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::GetEntityDraftItems(FEconomyGetEntityDraftItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetEntityDraftItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::GetDraftItems(FEconomyGetDraftItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetDraftItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::GetDraftItem(FEconomyGetDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::GetCatalogConfig(FEconomyGetCatalogConfigRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetCatalogConfig onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::DeleteItem(FEconomyDeleteItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::DeleteEntityItemReviews(FEconomyDeleteEntityItemReviewsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteEntityItemReviews onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::CreateUploadUrls(FEconomyCreateUploadUrlsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateUploadUrls onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEconomyAPI* UPlayFabEconomyAPI::CreateDraftItem(FEconomyCreateDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}


