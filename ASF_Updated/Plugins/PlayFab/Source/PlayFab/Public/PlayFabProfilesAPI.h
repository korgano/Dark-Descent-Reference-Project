#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "OnPlayFabProfilesRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "ProfilesGetEntityProfileRequest.h"
#include "ProfilesGetEntityProfileResponse.h"
#include "ProfilesGetEntityProfilesRequest.h"
#include "ProfilesGetEntityProfilesResponse.h"
#include "ProfilesGetGlobalPolicyRequest.h"
#include "ProfilesGetGlobalPolicyResponse.h"
#include "ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.h"
#include "ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.h"
#include "ProfilesSetEntityProfilePolicyRequest.h"
#include "ProfilesSetEntityProfilePolicyResponse.h"
#include "ProfilesSetGlobalPolicyRequest.h"
#include "ProfilesSetGlobalPolicyResponse.h"
#include "ProfilesSetProfileLanguageRequest.h"
#include "ProfilesSetProfileLanguageResponse.h"
#include "PlayFabProfilesAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabJsonObject;
class UPlayFabProfilesAPI;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabProfilesAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetProfilePolicy, FProfilesSetEntityProfilePolicyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetProfileLanguage, FProfilesSetProfileLanguageResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetGlobalPolicy, FProfilesSetGlobalPolicyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds, FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetProfiles, FProfilesGetEntityProfilesResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetProfile, FProfilesGetEntityProfileResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetGlobalPolicy, FProfilesGetGlobalPolicyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabProfilesRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabProfilesAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabProfilesAPI* SetProfilePolicy(FProfilesSetEntityProfilePolicyRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessSetProfilePolicy onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabProfilesAPI* SetProfileLanguage(FProfilesSetProfileLanguageRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessSetProfileLanguage onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabProfilesAPI* SetGlobalPolicy(FProfilesSetGlobalPolicyRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessSetGlobalPolicy onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetProfilePolicy(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetProfileLanguage(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetGlobalPolicy(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitlePlayersFromMasterPlayerAccountIds(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetProfiles(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetProfile(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetGlobalPolicy(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabProfilesAPI* GetTitlePlayersFromMasterPlayerAccountIds(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabProfilesAPI* GetProfiles(FProfilesGetEntityProfilesRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessGetProfiles onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabProfilesAPI* GetProfile(FProfilesGetEntityProfileRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessGetProfile onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabProfilesAPI* GetGlobalPolicy(FProfilesGetGlobalPolicyRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessGetGlobalPolicy onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

