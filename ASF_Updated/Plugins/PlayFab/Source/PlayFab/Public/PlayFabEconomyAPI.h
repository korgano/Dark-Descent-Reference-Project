#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EconomyCreateDraftItemRequest.h"
#include "EconomyCreateDraftItemResponse.h"
#include "EconomyCreateUploadUrlsRequest.h"
#include "EconomyCreateUploadUrlsResponse.h"
#include "EconomyDeleteEntityItemReviewsRequest.h"
#include "EconomyDeleteEntityItemReviewsResponse.h"
#include "EconomyDeleteItemRequest.h"
#include "EconomyDeleteItemResponse.h"
#include "EconomyGetCatalogConfigRequest.h"
#include "EconomyGetCatalogConfigResponse.h"
#include "EconomyGetDraftItemRequest.h"
#include "EconomyGetDraftItemResponse.h"
#include "EconomyGetDraftItemsRequest.h"
#include "EconomyGetDraftItemsResponse.h"
#include "EconomyGetEntityDraftItemsRequest.h"
#include "EconomyGetEntityDraftItemsResponse.h"
#include "EconomyGetEntityItemReviewRequest.h"
#include "EconomyGetEntityItemReviewResponse.h"
#include "EconomyGetItemModerationStateRequest.h"
#include "EconomyGetItemModerationStateResponse.h"
#include "EconomyGetItemPublishStatusRequest.h"
#include "EconomyGetItemPublishStatusResponse.h"
#include "EconomyGetItemRequest.h"
#include "EconomyGetItemResponse.h"
#include "EconomyGetItemReviewSummaryRequest.h"
#include "EconomyGetItemReviewSummaryResponse.h"
#include "EconomyGetItemReviewsRequest.h"
#include "EconomyGetItemReviewsResponse.h"
#include "EconomyGetItemsRequest.h"
#include "EconomyGetItemsResponse.h"
#include "EconomyPublishDraftItemRequest.h"
#include "EconomyPublishDraftItemResponse.h"
#include "EconomyReportItemRequest.h"
#include "EconomyReportItemResponse.h"
#include "EconomyReportItemReviewRequest.h"
#include "EconomyReportItemReviewResponse.h"
#include "EconomyReviewItemRequest.h"
#include "EconomyReviewItemResponse.h"
#include "EconomySearchItemsRequest.h"
#include "EconomySearchItemsResponse.h"
#include "EconomySetItemModerationStateRequest.h"
#include "EconomySetItemModerationStateResponse.h"
#include "EconomySubmitItemReviewVoteRequest.h"
#include "EconomySubmitItemReviewVoteResponse.h"
#include "EconomyTakedownItemReviewsRequest.h"
#include "EconomyTakedownItemReviewsResponse.h"
#include "EconomyUpdateCatalogConfigRequest.h"
#include "EconomyUpdateCatalogConfigResponse.h"
#include "EconomyUpdateDraftItemRequest.h"
#include "EconomyUpdateDraftItemResponse.h"
#include "OnPlayFabEconomyRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "PlayFabEconomyAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabEconomyAPI;
class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabEconomyAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateDraftItem, FEconomyUpdateDraftItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCatalogConfig, FEconomyUpdateCatalogConfigResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessTakedownItemReviews, FEconomyTakedownItemReviewsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubmitItemReviewVote, FEconomySubmitItemReviewVoteResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetItemModerationState, FEconomySetItemModerationStateResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSearchItems, FEconomySearchItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReviewItem, FEconomyReviewItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReportItemReview, FEconomyReportItemReviewResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReportItem, FEconomyReportItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPublishDraftItem, FEconomyPublishDraftItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItems, FEconomyGetItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItemReviewSummary, FEconomyGetItemReviewSummaryResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItemReviews, FEconomyGetItemReviewsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItemPublishStatus, FEconomyGetItemPublishStatusResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItemModerationState, FEconomyGetItemModerationStateResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItem, FEconomyGetItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetEntityItemReview, FEconomyGetEntityItemReviewResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetEntityDraftItems, FEconomyGetEntityDraftItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetDraftItems, FEconomyGetDraftItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetDraftItem, FEconomyGetDraftItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCatalogConfig, FEconomyGetCatalogConfigResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteItem, FEconomyDeleteItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteEntityItemReviews, FEconomyDeleteEntityItemReviewsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateUploadUrls, FEconomyCreateUploadUrlsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateDraftItem, FEconomyCreateDraftItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabEconomyRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabEconomyAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateDraftItem(FEconomyUpdateDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateCatalogConfig(FEconomyUpdateCatalogConfigRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateCatalogConfig onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* TakedownItemReviews(FEconomyTakedownItemReviewsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessTakedownItemReviews onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SubmitItemReviewVote(FEconomySubmitItemReviewVoteRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSubmitItemReviewVote onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SetItemModerationState(FEconomySetItemModerationStateRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSetItemModerationState onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SearchItems(FEconomySearchItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearchItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* ReviewItem(FEconomyReviewItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessReviewItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* ReportItemReview(FEconomyReportItemReviewRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessReportItemReview onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* ReportItem(FEconomyReportItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessReportItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* PublishDraftItem(FEconomyPublishDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessPublishDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateDraftItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCatalogConfig(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperTakedownItemReviews(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSubmitItemReviewVote(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetItemModerationState(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSearchItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReviewItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReportItemReview(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReportItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPublishDraftItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItemReviewSummary(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItemReviews(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItemPublishStatus(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItemModerationState(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetEntityItemReview(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetEntityDraftItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetDraftItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetDraftItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCatalogConfig(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteEntityItemReviews(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateUploadUrls(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateDraftItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItems(FEconomyGetItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItemReviewSummary(FEconomyGetItemReviewSummaryRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemReviewSummary onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItemReviews(FEconomyGetItemReviewsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemReviews onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItemPublishStatus(FEconomyGetItemPublishStatusRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemPublishStatus onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItemModerationState(FEconomyGetItemModerationStateRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemModerationState onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItem(FEconomyGetItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetEntityItemReview(FEconomyGetEntityItemReviewRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetEntityItemReview onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetEntityDraftItems(FEconomyGetEntityDraftItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetEntityDraftItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetDraftItems(FEconomyGetDraftItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetDraftItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetDraftItem(FEconomyGetDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetCatalogConfig(FEconomyGetCatalogConfigRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetCatalogConfig onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteItem(FEconomyDeleteItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteEntityItemReviews(FEconomyDeleteEntityItemReviewsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteEntityItemReviews onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateUploadUrls(FEconomyCreateUploadUrlsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateUploadUrls onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateDraftItem(FEconomyCreateDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

