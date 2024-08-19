#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "ExperimentationCreateExclusionGroupRequest.h"
#include "ExperimentationCreateExclusionGroupResult.h"
#include "ExperimentationCreateExperimentRequest.h"
#include "ExperimentationCreateExperimentResult.h"
#include "ExperimentationDeleteExclusionGroupRequest.h"
#include "ExperimentationDeleteExperimentRequest.h"
#include "ExperimentationEmptyResponse.h"
#include "ExperimentationGetExclusionGroupTrafficRequest.h"
#include "ExperimentationGetExclusionGroupTrafficResult.h"
#include "ExperimentationGetExclusionGroupsRequest.h"
#include "ExperimentationGetExclusionGroupsResult.h"
#include "ExperimentationGetExperimentsRequest.h"
#include "ExperimentationGetExperimentsResult.h"
#include "ExperimentationGetLatestScorecardRequest.h"
#include "ExperimentationGetLatestScorecardResult.h"
#include "ExperimentationGetTreatmentAssignmentRequest.h"
#include "ExperimentationGetTreatmentAssignmentResult.h"
#include "ExperimentationStartExperimentRequest.h"
#include "ExperimentationStopExperimentRequest.h"
#include "ExperimentationUpdateExclusionGroupRequest.h"
#include "ExperimentationUpdateExperimentRequest.h"
#include "OnPlayFabExperimentationRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "PlayFabExperimentationAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabExperimentationAPI;
class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabExperimentationAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateExperiment, FExperimentationEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateExclusionGroup, FExperimentationEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessStopExperiment, FExperimentationEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessStartExperiment, FExperimentationEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTreatmentAssignment, FExperimentationGetTreatmentAssignmentResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLatestScorecard, FExperimentationGetLatestScorecardResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetExperiments, FExperimentationGetExperimentsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetExclusionGroupTraffic, FExperimentationGetExclusionGroupTrafficResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetExclusionGroups, FExperimentationGetExclusionGroupsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteExperiment, FExperimentationEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteExclusionGroup, FExperimentationEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateExperiment, FExperimentationCreateExperimentResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateExclusionGroup, FExperimentationCreateExclusionGroupResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabExperimentationRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabExperimentationAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* UpdateExperiment(FExperimentationUpdateExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessUpdateExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* UpdateExclusionGroup(FExperimentationUpdateExclusionGroupRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessUpdateExclusionGroup onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* StopExperiment(FExperimentationStopExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessStopExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* StartExperiment(FExperimentationStartExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessStartExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateExperiment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateExclusionGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperStopExperiment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperStartExperiment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTreatmentAssignment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLatestScorecard(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetExperiments(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetExclusionGroupTraffic(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetExclusionGroups(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteExperiment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteExclusionGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateExperiment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateExclusionGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* GetTreatmentAssignment(FExperimentationGetTreatmentAssignmentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessGetTreatmentAssignment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* GetLatestScorecard(FExperimentationGetLatestScorecardRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessGetLatestScorecard onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* GetExperiments(FExperimentationGetExperimentsRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessGetExperiments onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* GetExclusionGroupTraffic(FExperimentationGetExclusionGroupTrafficRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessGetExclusionGroupTraffic onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* GetExclusionGroups(FExperimentationGetExclusionGroupsRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessGetExclusionGroups onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* DeleteExperiment(FExperimentationDeleteExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessDeleteExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* DeleteExclusionGroup(FExperimentationDeleteExclusionGroupRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessDeleteExclusionGroup onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* CreateExperiment(FExperimentationCreateExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessCreateExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* CreateExclusionGroup(FExperimentationCreateExclusionGroupRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessCreateExclusionGroup onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

