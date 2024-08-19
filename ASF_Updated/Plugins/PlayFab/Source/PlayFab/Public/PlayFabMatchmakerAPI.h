#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "MatchmakerAuthUserRequest.h"
#include "MatchmakerAuthUserResponse.h"
#include "MatchmakerPlayerJoinedRequest.h"
#include "MatchmakerPlayerJoinedResponse.h"
#include "MatchmakerPlayerLeftRequest.h"
#include "MatchmakerPlayerLeftResponse.h"
#include "MatchmakerUserInfoRequest.h"
#include "MatchmakerUserInfoResponse.h"
#include "OnPlayFabMatchmakerRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "PlayFabMatchmakerAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabJsonObject;
class UPlayFabMatchmakerAPI;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabMatchmakerAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUserInfo, FMatchmakerUserInfoResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPlayerLeft, FMatchmakerPlayerLeftResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPlayerJoined, FMatchmakerPlayerJoinedResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAuthUser, FMatchmakerAuthUserResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabMatchmakerRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabMatchmakerAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabMatchmakerAPI* UserInfo(FMatchmakerUserInfoRequest Request, UPlayFabMatchmakerAPI::FDelegateOnSuccessUserInfo onSuccess, UPlayFabMatchmakerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMatchmakerAPI* PlayerLeft(FMatchmakerPlayerLeftRequest Request, UPlayFabMatchmakerAPI::FDelegateOnSuccessPlayerLeft onSuccess, UPlayFabMatchmakerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMatchmakerAPI* PlayerJoined(FMatchmakerPlayerJoinedRequest Request, UPlayFabMatchmakerAPI::FDelegateOnSuccessPlayerJoined onSuccess, UPlayFabMatchmakerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperUserInfo(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPlayerLeft(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPlayerJoined(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAuthUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMatchmakerAPI* AuthUser(FMatchmakerAuthUserRequest Request, UPlayFabMatchmakerAPI::FDelegateOnSuccessAuthUser onSuccess, UPlayFabMatchmakerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

