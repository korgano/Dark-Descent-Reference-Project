#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "InsightsInsightsEmptyRequest.h"
#include "InsightsInsightsGetDetailsResponse.h"
#include "InsightsInsightsGetLimitsResponse.h"
#include "InsightsInsightsGetOperationStatusRequest.h"
#include "InsightsInsightsGetOperationStatusResponse.h"
#include "InsightsInsightsGetPendingOperationsRequest.h"
#include "InsightsInsightsGetPendingOperationsResponse.h"
#include "InsightsInsightsOperationResponse.h"
#include "InsightsInsightsSetPerformanceRequest.h"
#include "InsightsInsightsSetStorageRetentionRequest.h"
#include "OnPlayFabInsightsRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "PlayFabInsightsAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabInsightsAPI;
class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabInsightsAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetStorageRetention, FInsightsInsightsOperationResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetPerformance, FInsightsInsightsOperationResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPendingOperations, FInsightsInsightsGetPendingOperationsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetOperationStatus, FInsightsInsightsGetOperationStatusResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLimits, FInsightsInsightsGetLimitsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetDetails, FInsightsInsightsGetDetailsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabInsightsRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabInsightsAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabInsightsAPI* SetStorageRetention(FInsightsInsightsSetStorageRetentionRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessSetStorageRetention onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabInsightsAPI* SetPerformance(FInsightsInsightsSetPerformanceRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessSetPerformance onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetStorageRetention(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetPerformance(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPendingOperations(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetOperationStatus(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLimits(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetDetails(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabInsightsAPI* GetPendingOperations(FInsightsInsightsGetPendingOperationsRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessGetPendingOperations onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabInsightsAPI* GetOperationStatus(FInsightsInsightsGetOperationStatusRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessGetOperationStatus onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabInsightsAPI* GetLimits(FInsightsInsightsEmptyRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessGetLimits onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabInsightsAPI* GetDetails(FInsightsInsightsEmptyRequest Request, UPlayFabInsightsAPI::FDelegateOnSuccessGetDetails onSuccess, UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

