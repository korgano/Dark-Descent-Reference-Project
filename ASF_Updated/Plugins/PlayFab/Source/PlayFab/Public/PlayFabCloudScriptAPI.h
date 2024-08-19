#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "CloudScriptEmptyResult.h"
#include "CloudScriptExecuteCloudScriptResult.h"
#include "CloudScriptExecuteEntityCloudScriptRequest.h"
#include "CloudScriptExecuteFunctionRequest.h"
#include "CloudScriptExecuteFunctionResult.h"
#include "CloudScriptGetFunctionRequest.h"
#include "CloudScriptGetFunctionResult.h"
#include "CloudScriptListFunctionsRequest.h"
#include "CloudScriptListFunctionsResult.h"
#include "CloudScriptListHttpFunctionsResult.h"
#include "CloudScriptListQueuedFunctionsResult.h"
#include "CloudScriptPostFunctionResultForEntityTriggeredActionRequest.h"
#include "CloudScriptPostFunctionResultForFunctionExecutionRequest.h"
#include "CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.h"
#include "CloudScriptPostFunctionResultForScheduledTaskRequest.h"
#include "CloudScriptRegisterHttpFunctionRequest.h"
#include "CloudScriptRegisterQueuedFunctionRequest.h"
#include "CloudScriptUnregisterFunctionRequest.h"
#include "OnPlayFabCloudScriptRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "PlayFabCloudScriptAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabCloudScriptAPI;
class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabCloudScriptAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnregisterFunction, FCloudScriptEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRegisterQueuedFunction, FCloudScriptEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRegisterHttpFunction, FCloudScriptEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPostFunctionResultForScheduledTask, FCloudScriptEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction, FCloudScriptEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPostFunctionResultForFunctionExecution, FCloudScriptEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPostFunctionResultForEntityTriggeredAction, FCloudScriptEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListQueuedFunctions, FCloudScriptListQueuedFunctionsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListHttpFunctions, FCloudScriptListHttpFunctionsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListFunctions, FCloudScriptListFunctionsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetFunction, FCloudScriptGetFunctionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessExecuteFunction, FCloudScriptExecuteFunctionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessExecuteEntityCloudScript, FCloudScriptExecuteCloudScriptResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabCloudScriptRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabCloudScriptAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* UnregisterFunction(FCloudScriptUnregisterFunctionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessUnregisterFunction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* RegisterQueuedFunction(FCloudScriptRegisterQueuedFunctionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessRegisterQueuedFunction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* RegisterHttpFunction(FCloudScriptRegisterHttpFunctionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessRegisterHttpFunction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* PostFunctionResultForScheduledTask(FCloudScriptPostFunctionResultForScheduledTaskRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForScheduledTask onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* PostFunctionResultForPlayerTriggeredAction(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* PostFunctionResultForFunctionExecution(FCloudScriptPostFunctionResultForFunctionExecutionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForFunctionExecution onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* PostFunctionResultForEntityTriggeredAction(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForEntityTriggeredAction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* ListQueuedFunctions(FCloudScriptListFunctionsRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessListQueuedFunctions onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* ListHttpFunctions(FCloudScriptListFunctionsRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessListHttpFunctions onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* ListFunctions(FCloudScriptListFunctionsRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessListFunctions onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnregisterFunction(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRegisterQueuedFunction(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRegisterHttpFunction(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPostFunctionResultForScheduledTask(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPostFunctionResultForPlayerTriggeredAction(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPostFunctionResultForFunctionExecution(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPostFunctionResultForEntityTriggeredAction(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListQueuedFunctions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListHttpFunctions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListFunctions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetFunction(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperExecuteFunction(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperExecuteEntityCloudScript(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* GetFunction(FCloudScriptGetFunctionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessGetFunction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* ExecuteFunction(FCloudScriptExecuteFunctionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessExecuteFunction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabCloudScriptAPI* ExecuteEntityCloudScript(FCloudScriptExecuteEntityCloudScriptRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessExecuteEntityCloudScript onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

