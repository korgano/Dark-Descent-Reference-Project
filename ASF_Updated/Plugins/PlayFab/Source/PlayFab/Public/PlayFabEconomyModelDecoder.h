#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EconomyCreateDraftItemResponse.h"
#include "EconomyCreateUploadUrlsResponse.h"
#include "EconomyDeleteEntityItemReviewsResponse.h"
#include "EconomyDeleteItemResponse.h"
#include "EconomyGetCatalogConfigResponse.h"
#include "EconomyGetDraftItemResponse.h"
#include "EconomyGetDraftItemsResponse.h"
#include "EconomyGetEntityDraftItemsResponse.h"
#include "EconomyGetEntityItemReviewResponse.h"
#include "EconomyGetItemModerationStateResponse.h"
#include "EconomyGetItemPublishStatusResponse.h"
#include "EconomyGetItemResponse.h"
#include "EconomyGetItemReviewSummaryResponse.h"
#include "EconomyGetItemReviewsResponse.h"
#include "EconomyGetItemsResponse.h"
#include "EconomyPublishDraftItemResponse.h"
#include "EconomyReportItemResponse.h"
#include "EconomyReportItemReviewResponse.h"
#include "EconomyReviewItemResponse.h"
#include "EconomySearchItemsResponse.h"
#include "EconomySetItemModerationStateResponse.h"
#include "EconomySubmitItemReviewVoteResponse.h"
#include "EconomyTakedownItemReviewsResponse.h"
#include "EconomyUpdateCatalogConfigResponse.h"
#include "EconomyUpdateDraftItemResponse.h"
#include "PlayFabEconomyModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabEconomyModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabEconomyModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateDraftItemResponse decodeUpdateDraftItemResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateCatalogConfigResponse decodeUpdateCatalogConfigResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyTakedownItemReviewsResponse decodeTakedownItemReviewsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySubmitItemReviewVoteResponse decodeSubmitItemReviewVoteResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySetItemModerationStateResponse decodeSetItemModerationStateResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySearchItemsResponse decodeSearchItemsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyReviewItemResponse decodeReviewItemResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyReportItemReviewResponse decodeReportItemReviewResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyReportItemResponse decodeReportItemResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyPublishDraftItemResponse decodePublishDraftItemResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemsResponse decodeGetItemsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemReviewSummaryResponse decodeGetItemReviewSummaryResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemReviewsResponse decodeGetItemReviewsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemResponse decodeGetItemResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemPublishStatusResponse decodeGetItemPublishStatusResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemModerationStateResponse decodeGetItemModerationStateResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetEntityItemReviewResponse decodeGetEntityItemReviewResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetEntityDraftItemsResponse decodeGetEntityDraftItemsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetDraftItemsResponse decodeGetDraftItemsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetDraftItemResponse decodeGetDraftItemResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetCatalogConfigResponse decodeGetCatalogConfigResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyDeleteItemResponse decodeDeleteItemResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyDeleteEntityItemReviewsResponse decodeDeleteEntityItemReviewsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateUploadUrlsResponse decodeCreateUploadUrlsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateDraftItemResponse decodeCreateDraftItemResponseResponse(UPlayFabJsonObject* response);
    
};

