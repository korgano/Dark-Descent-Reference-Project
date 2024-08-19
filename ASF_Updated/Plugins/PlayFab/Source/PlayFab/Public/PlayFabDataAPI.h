#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "DataAbortFileUploadsRequest.h"
#include "DataAbortFileUploadsResponse.h"
#include "DataDeleteFilesRequest.h"
#include "DataDeleteFilesResponse.h"
#include "DataFinalizeFileUploadsRequest.h"
#include "DataFinalizeFileUploadsResponse.h"
#include "DataGetFilesRequest.h"
#include "DataGetFilesResponse.h"
#include "DataGetObjectsRequest.h"
#include "DataGetObjectsResponse.h"
#include "DataInitiateFileUploadsRequest.h"
#include "DataInitiateFileUploadsResponse.h"
#include "DataSetObjectsRequest.h"
#include "DataSetObjectsResponse.h"
#include "OnPlayFabDataRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "PlayFabDataAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabDataAPI;
class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabDataAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetObjects, FDataSetObjectsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessInitiateFileUploads, FDataInitiateFileUploadsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetObjects, FDataGetObjectsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetFiles, FDataGetFilesResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessFinalizeFileUploads, FDataFinalizeFileUploadsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteFiles, FDataDeleteFilesResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAbortFileUploads, FDataAbortFileUploadsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabDataRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabDataAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabDataAPI* SetObjects(FDataSetObjectsRequest Request, UPlayFabDataAPI::FDelegateOnSuccessSetObjects onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabDataAPI* InitiateFileUploads(FDataInitiateFileUploadsRequest Request, UPlayFabDataAPI::FDelegateOnSuccessInitiateFileUploads onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetObjects(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperInitiateFileUploads(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetObjects(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetFiles(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperFinalizeFileUploads(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteFiles(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAbortFileUploads(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabDataAPI* GetObjects(FDataGetObjectsRequest Request, UPlayFabDataAPI::FDelegateOnSuccessGetObjects onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabDataAPI* GetFiles(FDataGetFilesRequest Request, UPlayFabDataAPI::FDelegateOnSuccessGetFiles onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabDataAPI* FinalizeFileUploads(FDataFinalizeFileUploadsRequest Request, UPlayFabDataAPI::FDelegateOnSuccessFinalizeFileUploads onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabDataAPI* DeleteFiles(FDataDeleteFilesRequest Request, UPlayFabDataAPI::FDelegateOnSuccessDeleteFiles onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabDataAPI* AbortFileUploads(FDataAbortFileUploadsRequest Request, UPlayFabDataAPI::FDelegateOnSuccessAbortFileUploads onSuccess, UPlayFabDataAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

