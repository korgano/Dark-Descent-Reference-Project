#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "ClientAcceptTradeRequest.h"
#include "ClientAcceptTradeResponse.h"
#include "ClientAddFriendRequest.h"
#include "ClientAddFriendResult.h"
#include "ClientAddGenericIDRequest.h"
#include "ClientAddGenericIDResult.h"
#include "ClientAddOrUpdateContactEmailRequest.h"
#include "ClientAddOrUpdateContactEmailResult.h"
#include "ClientAddSharedGroupMembersRequest.h"
#include "ClientAddSharedGroupMembersResult.h"
#include "ClientAddUserVirtualCurrencyRequest.h"
#include "ClientAddUsernamePasswordRequest.h"
#include "ClientAddUsernamePasswordResult.h"
#include "ClientAndroidDevicePushNotificationRegistrationRequest.h"
#include "ClientAndroidDevicePushNotificationRegistrationResult.h"
#include "ClientAttributeInstallRequest.h"
#include "ClientAttributeInstallResult.h"
#include "ClientCancelTradeRequest.h"
#include "ClientCancelTradeResponse.h"
#include "ClientConfirmPurchaseRequest.h"
#include "ClientConfirmPurchaseResult.h"
#include "ClientConsumeItemRequest.h"
#include "ClientConsumeItemResult.h"
#include "ClientConsumeMicrosoftStoreEntitlementsRequest.h"
#include "ClientConsumeMicrosoftStoreEntitlementsResponse.h"
#include "ClientConsumePS5EntitlementsRequest.h"
#include "ClientConsumePS5EntitlementsResult.h"
#include "ClientConsumePSNEntitlementsRequest.h"
#include "ClientConsumePSNEntitlementsResult.h"
#include "ClientConsumeXboxEntitlementsRequest.h"
#include "ClientConsumeXboxEntitlementsResult.h"
#include "ClientCreateSharedGroupRequest.h"
#include "ClientCreateSharedGroupResult.h"
#include "ClientCurrentGamesRequest.h"
#include "ClientCurrentGamesResult.h"
#include "ClientDeviceInfoRequest.h"
#include "ClientEmptyResponse.h"
#include "ClientEmptyResult.h"
#include "ClientExecuteCloudScriptRequest.h"
#include "ClientExecuteCloudScriptResult.h"
#include "ClientGameServerRegionsRequest.h"
#include "ClientGameServerRegionsResult.h"
#include "ClientGetAccountInfoRequest.h"
#include "ClientGetAccountInfoResult.h"
#include "ClientGetAdPlacementsRequest.h"
#include "ClientGetAdPlacementsResult.h"
#include "ClientGetCatalogItemsRequest.h"
#include "ClientGetCatalogItemsResult.h"
#include "ClientGetCharacterDataRequest.h"
#include "ClientGetCharacterDataResult.h"
#include "ClientGetCharacterInventoryRequest.h"
#include "ClientGetCharacterInventoryResult.h"
#include "ClientGetCharacterLeaderboardRequest.h"
#include "ClientGetCharacterLeaderboardResult.h"
#include "ClientGetCharacterStatisticsRequest.h"
#include "ClientGetCharacterStatisticsResult.h"
#include "ClientGetContentDownloadUrlRequest.h"
#include "ClientGetContentDownloadUrlResult.h"
#include "ClientGetFriendLeaderboardAroundPlayerRequest.h"
#include "ClientGetFriendLeaderboardAroundPlayerResult.h"
#include "ClientGetFriendLeaderboardRequest.h"
#include "ClientGetFriendsListRequest.h"
#include "ClientGetFriendsListResult.h"
#include "ClientGetLeaderboardAroundCharacterRequest.h"
#include "ClientGetLeaderboardAroundCharacterResult.h"
#include "ClientGetLeaderboardAroundPlayerRequest.h"
#include "ClientGetLeaderboardAroundPlayerResult.h"
#include "ClientGetLeaderboardForUsersCharactersRequest.h"
#include "ClientGetLeaderboardForUsersCharactersResult.h"
#include "ClientGetLeaderboardRequest.h"
#include "ClientGetLeaderboardResult.h"
#include "ClientGetPaymentTokenRequest.h"
#include "ClientGetPaymentTokenResult.h"
#include "ClientGetPhotonAuthenticationTokenRequest.h"
#include "ClientGetPhotonAuthenticationTokenResult.h"
#include "ClientGetPlayFabIDsFromFacebookIDsRequest.h"
#include "ClientGetPlayFabIDsFromFacebookIDsResult.h"
#include "ClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest.h"
#include "ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult.h"
#include "ClientGetPlayFabIDsFromGameCenterIDsRequest.h"
#include "ClientGetPlayFabIDsFromGameCenterIDsResult.h"
#include "ClientGetPlayFabIDsFromGenericIDsRequest.h"
#include "ClientGetPlayFabIDsFromGenericIDsResult.h"
#include "ClientGetPlayFabIDsFromGoogleIDsRequest.h"
#include "ClientGetPlayFabIDsFromGoogleIDsResult.h"
#include "ClientGetPlayFabIDsFromKongregateIDsRequest.h"
#include "ClientGetPlayFabIDsFromKongregateIDsResult.h"
#include "ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h"
#include "ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult.h"
#include "ClientGetPlayFabIDsFromPSNAccountIDsRequest.h"
#include "ClientGetPlayFabIDsFromPSNAccountIDsResult.h"
#include "ClientGetPlayFabIDsFromSteamIDsRequest.h"
#include "ClientGetPlayFabIDsFromSteamIDsResult.h"
#include "ClientGetPlayFabIDsFromTwitchIDsRequest.h"
#include "ClientGetPlayFabIDsFromTwitchIDsResult.h"
#include "ClientGetPlayFabIDsFromXboxLiveIDsRequest.h"
#include "ClientGetPlayFabIDsFromXboxLiveIDsResult.h"
#include "ClientGetPlayerCombinedInfoRequest.h"
#include "ClientGetPlayerCombinedInfoResult.h"
#include "ClientGetPlayerProfileRequest.h"
#include "ClientGetPlayerProfileResult.h"
#include "ClientGetPlayerSegmentsRequest.h"
#include "ClientGetPlayerSegmentsResult.h"
#include "ClientGetPlayerStatisticVersionsRequest.h"
#include "ClientGetPlayerStatisticVersionsResult.h"
#include "ClientGetPlayerStatisticsRequest.h"
#include "ClientGetPlayerStatisticsResult.h"
#include "ClientGetPlayerTagsRequest.h"
#include "ClientGetPlayerTagsResult.h"
#include "ClientGetPlayerTradesRequest.h"
#include "ClientGetPlayerTradesResponse.h"
#include "ClientGetPublisherDataRequest.h"
#include "ClientGetPublisherDataResult.h"
#include "ClientGetPurchaseRequest.h"
#include "ClientGetPurchaseResult.h"
#include "ClientGetSharedGroupDataRequest.h"
#include "ClientGetSharedGroupDataResult.h"
#include "ClientGetStoreItemsRequest.h"
#include "ClientGetStoreItemsResult.h"
#include "ClientGetTimeRequest.h"
#include "ClientGetTimeResult.h"
#include "ClientGetTitleDataRequest.h"
#include "ClientGetTitleDataResult.h"
#include "ClientGetTitleNewsRequest.h"
#include "ClientGetTitleNewsResult.h"
#include "ClientGetTitlePublicKeyRequest.h"
#include "ClientGetTitlePublicKeyResult.h"
#include "ClientGetTradeStatusRequest.h"
#include "ClientGetTradeStatusResponse.h"
#include "ClientGetUserDataRequest.h"
#include "ClientGetUserDataResult.h"
#include "ClientGetUserInventoryRequest.h"
#include "ClientGetUserInventoryResult.h"
#include "ClientGrantCharacterToUserRequest.h"
#include "ClientGrantCharacterToUserResult.h"
#include "ClientLinkAndroidDeviceIDRequest.h"
#include "ClientLinkAndroidDeviceIDResult.h"
#include "ClientLinkAppleRequest.h"
#include "ClientLinkCustomIDRequest.h"
#include "ClientLinkCustomIDResult.h"
#include "ClientLinkFacebookAccountRequest.h"
#include "ClientLinkFacebookAccountResult.h"
#include "ClientLinkFacebookInstantGamesIdRequest.h"
#include "ClientLinkFacebookInstantGamesIdResult.h"
#include "ClientLinkGameCenterAccountRequest.h"
#include "ClientLinkGameCenterAccountResult.h"
#include "ClientLinkGoogleAccountRequest.h"
#include "ClientLinkGoogleAccountResult.h"
#include "ClientLinkIOSDeviceIDRequest.h"
#include "ClientLinkIOSDeviceIDResult.h"
#include "ClientLinkKongregateAccountRequest.h"
#include "ClientLinkKongregateAccountResult.h"
#include "ClientLinkNintendoServiceAccountRequest.h"
#include "ClientLinkNintendoSwitchDeviceIdRequest.h"
#include "ClientLinkNintendoSwitchDeviceIdResult.h"
#include "ClientLinkOpenIdConnectRequest.h"
#include "ClientLinkPSNAccountRequest.h"
#include "ClientLinkPSNAccountResult.h"
#include "ClientLinkSteamAccountRequest.h"
#include "ClientLinkSteamAccountResult.h"
#include "ClientLinkTwitchAccountRequest.h"
#include "ClientLinkTwitchAccountResult.h"
#include "ClientLinkXboxAccountRequest.h"
#include "ClientLinkXboxAccountResult.h"
#include "ClientListUsersCharactersRequest.h"
#include "ClientListUsersCharactersResult.h"
#include "ClientLoginResult.h"
#include "ClientLoginWithAndroidDeviceIDRequest.h"
#include "ClientLoginWithAppleRequest.h"
#include "ClientLoginWithCustomIDRequest.h"
#include "ClientLoginWithEmailAddressRequest.h"
#include "ClientLoginWithFacebookInstantGamesIdRequest.h"
#include "ClientLoginWithFacebookRequest.h"
#include "ClientLoginWithGameCenterRequest.h"
#include "ClientLoginWithGoogleAccountRequest.h"
#include "ClientLoginWithIOSDeviceIDRequest.h"
#include "ClientLoginWithKongregateRequest.h"
#include "ClientLoginWithNintendoServiceAccountRequest.h"
#include "ClientLoginWithNintendoSwitchDeviceIdRequest.h"
#include "ClientLoginWithOpenIdConnectRequest.h"
#include "ClientLoginWithPSNRequest.h"
#include "ClientLoginWithPlayFabRequest.h"
#include "ClientLoginWithSteamRequest.h"
#include "ClientLoginWithTwitchRequest.h"
#include "ClientLoginWithXboxRequest.h"
#include "ClientMatchmakeRequest.h"
#include "ClientMatchmakeResult.h"
#include "ClientModifyUserVirtualCurrencyResult.h"
#include "ClientOpenTradeRequest.h"
#include "ClientOpenTradeResponse.h"
#include "ClientPayForPurchaseRequest.h"
#include "ClientPayForPurchaseResult.h"
#include "ClientPurchaseItemRequest.h"
#include "ClientPurchaseItemResult.h"
#include "ClientRedeemCouponRequest.h"
#include "ClientRedeemCouponResult.h"
#include "ClientRefreshPSNAuthTokenRequest.h"
#include "ClientRegisterForIOSPushNotificationRequest.h"
#include "ClientRegisterForIOSPushNotificationResult.h"
#include "ClientRegisterPlayFabUserRequest.h"
#include "ClientRegisterPlayFabUserResult.h"
#include "ClientRemoveContactEmailRequest.h"
#include "ClientRemoveContactEmailResult.h"
#include "ClientRemoveFriendRequest.h"
#include "ClientRemoveFriendResult.h"
#include "ClientRemoveGenericIDRequest.h"
#include "ClientRemoveGenericIDResult.h"
#include "ClientRemoveSharedGroupMembersRequest.h"
#include "ClientRemoveSharedGroupMembersResult.h"
#include "ClientReportAdActivityRequest.h"
#include "ClientReportAdActivityResult.h"
#include "ClientReportPlayerClientRequest.h"
#include "ClientReportPlayerClientResult.h"
#include "ClientRestoreIOSPurchasesRequest.h"
#include "ClientRestoreIOSPurchasesResult.h"
#include "ClientRewardAdActivityRequest.h"
#include "ClientRewardAdActivityResult.h"
#include "ClientSendAccountRecoveryEmailRequest.h"
#include "ClientSendAccountRecoveryEmailResult.h"
#include "ClientSetFriendTagsRequest.h"
#include "ClientSetFriendTagsResult.h"
#include "ClientSetPlayerSecretRequest.h"
#include "ClientSetPlayerSecretResult.h"
#include "ClientStartPurchaseRequest.h"
#include "ClientStartPurchaseResult.h"
#include "ClientSubtractUserVirtualCurrencyRequest.h"
#include "ClientUnlinkAndroidDeviceIDRequest.h"
#include "ClientUnlinkAndroidDeviceIDResult.h"
#include "ClientUnlinkAppleRequest.h"
#include "ClientUnlinkCustomIDRequest.h"
#include "ClientUnlinkCustomIDResult.h"
#include "ClientUnlinkFacebookAccountRequest.h"
#include "ClientUnlinkFacebookAccountResult.h"
#include "ClientUnlinkFacebookInstantGamesIdRequest.h"
#include "ClientUnlinkFacebookInstantGamesIdResult.h"
#include "ClientUnlinkGameCenterAccountRequest.h"
#include "ClientUnlinkGameCenterAccountResult.h"
#include "ClientUnlinkGoogleAccountRequest.h"
#include "ClientUnlinkGoogleAccountResult.h"
#include "ClientUnlinkIOSDeviceIDRequest.h"
#include "ClientUnlinkIOSDeviceIDResult.h"
#include "ClientUnlinkKongregateAccountRequest.h"
#include "ClientUnlinkKongregateAccountResult.h"
#include "ClientUnlinkNintendoServiceAccountRequest.h"
#include "ClientUnlinkNintendoSwitchDeviceIdRequest.h"
#include "ClientUnlinkNintendoSwitchDeviceIdResult.h"
#include "ClientUnlinkOpenIdConnectRequest.h"
#include "ClientUnlinkPSNAccountRequest.h"
#include "ClientUnlinkPSNAccountResult.h"
#include "ClientUnlinkSteamAccountRequest.h"
#include "ClientUnlinkSteamAccountResult.h"
#include "ClientUnlinkTwitchAccountRequest.h"
#include "ClientUnlinkTwitchAccountResult.h"
#include "ClientUnlinkXboxAccountRequest.h"
#include "ClientUnlinkXboxAccountResult.h"
#include "ClientUnlockContainerInstanceRequest.h"
#include "ClientUnlockContainerItemRequest.h"
#include "ClientUnlockContainerItemResult.h"
#include "ClientUpdateAvatarUrlRequest.h"
#include "ClientUpdateCharacterDataRequest.h"
#include "ClientUpdateCharacterDataResult.h"
#include "ClientUpdateCharacterStatisticsRequest.h"
#include "ClientUpdateCharacterStatisticsResult.h"
#include "ClientUpdatePlayerStatisticsRequest.h"
#include "ClientUpdatePlayerStatisticsResult.h"
#include "ClientUpdateSharedGroupDataRequest.h"
#include "ClientUpdateSharedGroupDataResult.h"
#include "ClientUpdateUserDataRequest.h"
#include "ClientUpdateUserDataResult.h"
#include "ClientUpdateUserTitleDisplayNameRequest.h"
#include "ClientUpdateUserTitleDisplayNameResult.h"
#include "ClientValidateAmazonReceiptRequest.h"
#include "ClientValidateAmazonReceiptResult.h"
#include "ClientValidateGooglePlayPurchaseRequest.h"
#include "ClientValidateGooglePlayPurchaseResult.h"
#include "ClientValidateIOSReceiptRequest.h"
#include "ClientValidateIOSReceiptResult.h"
#include "ClientValidateWindowsReceiptRequest.h"
#include "ClientValidateWindowsReceiptResult.h"
#include "ClientWriteClientCharacterEventRequest.h"
#include "ClientWriteClientPlayerEventRequest.h"
#include "ClientWriteEventResponse.h"
#include "ClientWriteTitleEventRequest.h"
#include "OnPlayFabClientRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "PlayFabClientAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabClientAPI;
class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabClientAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWriteTitleEvent, FClientWriteEventResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWritePlayerEvent, FClientWriteEventResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWriteCharacterEvent, FClientWriteEventResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessValidateWindowsStoreReceipt, FClientValidateWindowsReceiptResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessValidateIOSReceipt, FClientValidateIOSReceiptResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessValidateGooglePlayPurchase, FClientValidateGooglePlayPurchaseResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessValidateAmazonIAPReceipt, FClientValidateAmazonReceiptResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserTitleDisplayName, FClientUpdateUserTitleDisplayNameResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherData, FClientUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserData, FClientUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateSharedGroupData, FClientUpdateSharedGroupDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdatePlayerStatistics, FClientUpdatePlayerStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCharacterStatistics, FClientUpdateCharacterStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCharacterData, FClientUpdateCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateAvatarUrl, FClientEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlockContainerItem, FClientUnlockContainerItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlockContainerInstance, FClientUnlockContainerItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkXboxAccount, FClientUnlinkXboxAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkTwitch, FClientUnlinkTwitchAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkSteamAccount, FClientUnlinkSteamAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkPSNAccount, FClientUnlinkPSNAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkOpenIdConnect, FClientEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkNintendoSwitchDeviceId, FClientUnlinkNintendoSwitchDeviceIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkNintendoServiceAccount, FClientEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkKongregate, FClientUnlinkKongregateAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkIOSDeviceID, FClientUnlinkIOSDeviceIDResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkGoogleAccount, FClientUnlinkGoogleAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkGameCenterAccount, FClientUnlinkGameCenterAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkFacebookInstantGamesId, FClientUnlinkFacebookInstantGamesIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkFacebookAccount, FClientUnlinkFacebookAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkCustomID, FClientUnlinkCustomIDResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkApple, FClientEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkAndroidDeviceID, FClientUnlinkAndroidDeviceIDResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubtractUserVirtualCurrency, FClientModifyUserVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessStartPurchase, FClientStartPurchaseResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetPlayerSecret, FClientSetPlayerSecretResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetFriendTags, FClientSetFriendTagsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSendAccountRecoveryEmail, FClientSendAccountRecoveryEmailResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRewardAdActivity, FClientRewardAdActivityResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRestoreIOSPurchases, FClientRestoreIOSPurchasesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReportPlayer, FClientReportPlayerClientResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReportDeviceInfo, FClientEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReportAdActivity, FClientReportAdActivityResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveSharedGroupMembers, FClientRemoveSharedGroupMembersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveGenericID, FClientRemoveGenericIDResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveFriend, FClientRemoveFriendResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveContactEmail, FClientRemoveContactEmailResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRegisterPlayFabUser, FClientRegisterPlayFabUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRegisterForIOSPushNotification, FClientRegisterForIOSPushNotificationResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRefreshPSNAuthToken, FClientEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRedeemCoupon, FClientRedeemCouponResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPurchaseItem, FClientPurchaseItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPayForPurchase, FClientPayForPurchaseResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessOpenTrade, FClientOpenTradeResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessMatchmake, FClientMatchmakeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithXbox, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithTwitch, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithSteam, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithPSN, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithPlayFab, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithOpenIdConnect, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithNintendoSwitchDeviceId, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithNintendoServiceAccount, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithKongregate, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithIOSDeviceID, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithGoogleAccount, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithGameCenter, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithFacebookInstantGamesId, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithFacebook, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithEmailAddress, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithCustomID, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithApple, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithAndroidDeviceID, FClientLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkXboxAccount, FClientLinkXboxAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkTwitch, FClientLinkTwitchAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkSteamAccount, FClientLinkSteamAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkPSNAccount, FClientLinkPSNAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkOpenIdConnect, FClientEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkNintendoSwitchDeviceId, FClientLinkNintendoSwitchDeviceIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkNintendoServiceAccount, FClientEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkKongregate, FClientLinkKongregateAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkIOSDeviceID, FClientLinkIOSDeviceIDResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkGoogleAccount, FClientLinkGoogleAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkGameCenterAccount, FClientLinkGameCenterAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkFacebookInstantGamesId, FClientLinkFacebookInstantGamesIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkFacebookAccount, FClientLinkFacebookAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkCustomID, FClientLinkCustomIDResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkApple, FClientEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkAndroidDeviceID, FClientLinkAndroidDeviceIDResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantCharacterToUser, FClientGrantCharacterToUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserReadOnlyData, FClientGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherReadOnlyData, FClientGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherData, FClientGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserInventory, FClientGetUserInventoryResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserData, FClientGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTradeStatus, FClientGetTradeStatusResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitlePublicKey, FClientGetTitlePublicKeyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleNews, FClientGetTitleNewsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleData, FClientGetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTime, FClientGetTimeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetStoreItems, FClientGetStoreItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetSharedGroupData, FClientGetSharedGroupDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPurchase, FClientGetPurchaseResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPublisherData, FClientGetPublisherDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs, FClientGetPlayFabIDsFromXboxLiveIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromTwitchIDs, FClientGetPlayFabIDsFromTwitchIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromSteamIDs, FClientGetPlayFabIDsFromSteamIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs, FClientGetPlayFabIDsFromPSNAccountIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds, FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromKongregateIDs, FClientGetPlayFabIDsFromKongregateIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromGoogleIDs, FClientGetPlayFabIDsFromGoogleIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromGenericIDs, FClientGetPlayFabIDsFromGenericIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromGameCenterIDs, FClientGetPlayFabIDsFromGameCenterIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds, FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromFacebookIDs, FClientGetPlayFabIDsFromFacebookIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerTrades, FClientGetPlayerTradesResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerTags, FClientGetPlayerTagsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerStatisticVersions, FClientGetPlayerStatisticVersionsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerStatistics, FClientGetPlayerStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerSegments, FClientGetPlayerSegmentsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerProfile, FClientGetPlayerProfileResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerCombinedInfo, FClientGetPlayerCombinedInfoResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPhotonAuthenticationToken, FClientGetPhotonAuthenticationTokenResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPaymentToken, FClientGetPaymentTokenResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboardForUserCharacters, FClientGetLeaderboardForUsersCharactersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboardAroundPlayer, FClientGetLeaderboardAroundPlayerResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboardAroundCharacter, FClientGetLeaderboardAroundCharacterResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboard, FClientGetLeaderboardResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetGameServerRegions, FClientGameServerRegionsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetFriendsList, FClientGetFriendsListResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetFriendLeaderboardAroundPlayer, FClientGetFriendLeaderboardAroundPlayerResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetFriendLeaderboard, FClientGetLeaderboardResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCurrentGames, FClientCurrentGamesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetContentDownloadUrl, FClientGetContentDownloadUrlResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterStatistics, FClientGetCharacterStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterReadOnlyData, FClientGetCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterLeaderboard, FClientGetCharacterLeaderboardResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterInventory, FClientGetCharacterInventoryResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterData, FClientGetCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCatalogItems, FClientGetCatalogItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetAllUsersCharacters, FClientListUsersCharactersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetAdPlacements, FClientGetAdPlacementsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetAccountInfo, FClientGetAccountInfoResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessExecuteCloudScript, FClientExecuteCloudScriptResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateSharedGroup, FClientCreateSharedGroupResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessConsumeXboxEntitlements, FClientConsumeXboxEntitlementsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessConsumePSNEntitlements, FClientConsumePSNEntitlementsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessConsumePS5Entitlements, FClientConsumePS5EntitlementsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessConsumeMicrosoftStoreEntitlements, FClientConsumeMicrosoftStoreEntitlementsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessConsumeItem, FClientConsumeItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessConfirmPurchase, FClientConfirmPurchaseResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCancelTrade, FClientCancelTradeResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAttributeInstall, FClientAttributeInstallResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAndroidDevicePushNotificationRegistration, FClientAndroidDevicePushNotificationRegistrationResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddUserVirtualCurrency, FClientModifyUserVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddUsernamePassword, FClientAddUsernamePasswordResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddSharedGroupMembers, FClientAddSharedGroupMembersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddOrUpdateContactEmail, FClientAddOrUpdateContactEmailResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddGenericID, FClientAddGenericIDResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddFriend, FClientAddFriendResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAcceptTrade, FClientAcceptTradeResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabClientRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabClientAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* WriteTitleEvent(FClientWriteTitleEventRequest Request, UPlayFabClientAPI::FDelegateOnSuccessWriteTitleEvent onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* WritePlayerEvent(FClientWriteClientPlayerEventRequest Request, UPlayFabClientAPI::FDelegateOnSuccessWritePlayerEvent onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* WriteCharacterEvent(FClientWriteClientCharacterEventRequest Request, UPlayFabClientAPI::FDelegateOnSuccessWriteCharacterEvent onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ValidateWindowsStoreReceipt(FClientValidateWindowsReceiptRequest Request, UPlayFabClientAPI::FDelegateOnSuccessValidateWindowsStoreReceipt onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ValidateIOSReceipt(FClientValidateIOSReceiptRequest Request, UPlayFabClientAPI::FDelegateOnSuccessValidateIOSReceipt onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ValidateGooglePlayPurchase(FClientValidateGooglePlayPurchaseRequest Request, UPlayFabClientAPI::FDelegateOnSuccessValidateGooglePlayPurchase onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ValidateAmazonIAPReceipt(FClientValidateAmazonReceiptRequest Request, UPlayFabClientAPI::FDelegateOnSuccessValidateAmazonIAPReceipt onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UpdateUserTitleDisplayName(FClientUpdateUserTitleDisplayNameRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUpdateUserTitleDisplayName onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UpdateUserPublisherData(FClientUpdateUserDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUpdateUserPublisherData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UpdateUserData(FClientUpdateUserDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUpdateUserData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UpdateSharedGroupData(FClientUpdateSharedGroupDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUpdateSharedGroupData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UpdatePlayerStatistics(FClientUpdatePlayerStatisticsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUpdatePlayerStatistics onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UpdateCharacterStatistics(FClientUpdateCharacterStatisticsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUpdateCharacterStatistics onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UpdateCharacterData(FClientUpdateCharacterDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUpdateCharacterData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UpdateAvatarUrl(FClientUpdateAvatarUrlRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUpdateAvatarUrl onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlockContainerItem(FClientUnlockContainerItemRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlockContainerItem onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlockContainerInstance(FClientUnlockContainerInstanceRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlockContainerInstance onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkXboxAccount(FClientUnlinkXboxAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkXboxAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkTwitch(FClientUnlinkTwitchAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkTwitch onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkSteamAccount(FClientUnlinkSteamAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkSteamAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkPSNAccount(FClientUnlinkPSNAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkPSNAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkOpenIdConnect(FClientUnlinkOpenIdConnectRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkOpenIdConnect onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkNintendoSwitchDeviceId(FClientUnlinkNintendoSwitchDeviceIdRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkNintendoSwitchDeviceId onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkNintendoServiceAccount(FClientUnlinkNintendoServiceAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkNintendoServiceAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkKongregate(FClientUnlinkKongregateAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkKongregate onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkIOSDeviceID(FClientUnlinkIOSDeviceIDRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkIOSDeviceID onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkGoogleAccount(FClientUnlinkGoogleAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkGoogleAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkGameCenterAccount(FClientUnlinkGameCenterAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkGameCenterAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkFacebookInstantGamesId(FClientUnlinkFacebookInstantGamesIdRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkFacebookInstantGamesId onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkFacebookAccount(FClientUnlinkFacebookAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkFacebookAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkCustomID(FClientUnlinkCustomIDRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkCustomID onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkApple(FClientUnlinkAppleRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkApple onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* UnlinkAndroidDeviceID(FClientUnlinkAndroidDeviceIDRequest Request, UPlayFabClientAPI::FDelegateOnSuccessUnlinkAndroidDeviceID onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* SubtractUserVirtualCurrency(FClientSubtractUserVirtualCurrencyRequest Request, UPlayFabClientAPI::FDelegateOnSuccessSubtractUserVirtualCurrency onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* StartPurchase(FClientStartPurchaseRequest Request, UPlayFabClientAPI::FDelegateOnSuccessStartPurchase onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* SetPlayerSecret(FClientSetPlayerSecretRequest Request, UPlayFabClientAPI::FDelegateOnSuccessSetPlayerSecret onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* SetFriendTags(FClientSetFriendTagsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessSetFriendTags onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* SendAccountRecoveryEmail(FClientSendAccountRecoveryEmailRequest Request, UPlayFabClientAPI::FDelegateOnSuccessSendAccountRecoveryEmail onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* RewardAdActivity(FClientRewardAdActivityRequest Request, UPlayFabClientAPI::FDelegateOnSuccessRewardAdActivity onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* RestoreIOSPurchases(FClientRestoreIOSPurchasesRequest Request, UPlayFabClientAPI::FDelegateOnSuccessRestoreIOSPurchases onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ReportPlayer(FClientReportPlayerClientRequest Request, UPlayFabClientAPI::FDelegateOnSuccessReportPlayer onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ReportDeviceInfo(FClientDeviceInfoRequest Request, UPlayFabClientAPI::FDelegateOnSuccessReportDeviceInfo onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ReportAdActivity(FClientReportAdActivityRequest Request, UPlayFabClientAPI::FDelegateOnSuccessReportAdActivity onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* RemoveSharedGroupMembers(FClientRemoveSharedGroupMembersRequest Request, UPlayFabClientAPI::FDelegateOnSuccessRemoveSharedGroupMembers onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* RemoveGenericID(FClientRemoveGenericIDRequest Request, UPlayFabClientAPI::FDelegateOnSuccessRemoveGenericID onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* RemoveFriend(FClientRemoveFriendRequest Request, UPlayFabClientAPI::FDelegateOnSuccessRemoveFriend onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* RemoveContactEmail(FClientRemoveContactEmailRequest Request, UPlayFabClientAPI::FDelegateOnSuccessRemoveContactEmail onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* RegisterPlayFabUser(FClientRegisterPlayFabUserRequest Request, UPlayFabClientAPI::FDelegateOnSuccessRegisterPlayFabUser onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* RegisterForIOSPushNotification(FClientRegisterForIOSPushNotificationRequest Request, UPlayFabClientAPI::FDelegateOnSuccessRegisterForIOSPushNotification onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* RefreshPSNAuthToken(FClientRefreshPSNAuthTokenRequest Request, UPlayFabClientAPI::FDelegateOnSuccessRefreshPSNAuthToken onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* RedeemCoupon(FClientRedeemCouponRequest Request, UPlayFabClientAPI::FDelegateOnSuccessRedeemCoupon onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* PurchaseItem(FClientPurchaseItemRequest Request, UPlayFabClientAPI::FDelegateOnSuccessPurchaseItem onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* PayForPurchase(FClientPayForPurchaseRequest Request, UPlayFabClientAPI::FDelegateOnSuccessPayForPurchase onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* OpenTrade(FClientOpenTradeRequest Request, UPlayFabClientAPI::FDelegateOnSuccessOpenTrade onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* Matchmake(FClientMatchmakeRequest Request, UPlayFabClientAPI::FDelegateOnSuccessMatchmake onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithXbox(FClientLoginWithXboxRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithXbox onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithTwitch(FClientLoginWithTwitchRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithTwitch onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithSteam(FClientLoginWithSteamRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithSteam onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithPSN(FClientLoginWithPSNRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithPSN onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithPlayFab(FClientLoginWithPlayFabRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithPlayFab onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithOpenIdConnect(FClientLoginWithOpenIdConnectRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithOpenIdConnect onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithNintendoSwitchDeviceId(FClientLoginWithNintendoSwitchDeviceIdRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithNintendoSwitchDeviceId onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithNintendoServiceAccount(FClientLoginWithNintendoServiceAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithNintendoServiceAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithKongregate(FClientLoginWithKongregateRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithKongregate onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithIOSDeviceID(FClientLoginWithIOSDeviceIDRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithIOSDeviceID onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithGoogleAccount(FClientLoginWithGoogleAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithGoogleAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithGameCenter(FClientLoginWithGameCenterRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithGameCenter onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithFacebookInstantGamesId(FClientLoginWithFacebookInstantGamesIdRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithFacebookInstantGamesId onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithFacebook(FClientLoginWithFacebookRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithFacebook onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithEmailAddress(FClientLoginWithEmailAddressRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithEmailAddress onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithCustomID(FClientLoginWithCustomIDRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithCustomID onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithApple(FClientLoginWithAppleRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithApple onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LoginWithAndroidDeviceID(FClientLoginWithAndroidDeviceIDRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLoginWithAndroidDeviceID onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkXboxAccount(FClientLinkXboxAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkXboxAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkTwitch(FClientLinkTwitchAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkTwitch onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkSteamAccount(FClientLinkSteamAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkSteamAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkPSNAccount(FClientLinkPSNAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkPSNAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkOpenIdConnect(FClientLinkOpenIdConnectRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkOpenIdConnect onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkNintendoSwitchDeviceId(FClientLinkNintendoSwitchDeviceIdRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkNintendoSwitchDeviceId onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkNintendoServiceAccount(FClientLinkNintendoServiceAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkNintendoServiceAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkKongregate(FClientLinkKongregateAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkKongregate onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkIOSDeviceID(FClientLinkIOSDeviceIDRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkIOSDeviceID onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkGoogleAccount(FClientLinkGoogleAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkGoogleAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkGameCenterAccount(FClientLinkGameCenterAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkGameCenterAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkFacebookInstantGamesId(FClientLinkFacebookInstantGamesIdRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkFacebookInstantGamesId onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkFacebookAccount(FClientLinkFacebookAccountRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkFacebookAccount onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkCustomID(FClientLinkCustomIDRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkCustomID onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkApple(FClientLinkAppleRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkApple onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* LinkAndroidDeviceID(FClientLinkAndroidDeviceIDRequest Request, UPlayFabClientAPI::FDelegateOnSuccessLinkAndroidDeviceID onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperWriteTitleEvent(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperWritePlayerEvent(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperWriteCharacterEvent(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperValidateWindowsStoreReceipt(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperValidateIOSReceipt(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperValidateGooglePlayPurchase(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperValidateAmazonIAPReceipt(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserTitleDisplayName(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateSharedGroupData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdatePlayerStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCharacterStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCharacterData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateAvatarUrl(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlockContainerItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlockContainerInstance(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkXboxAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkTwitch(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkSteamAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkPSNAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkOpenIdConnect(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkNintendoSwitchDeviceId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkNintendoServiceAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkKongregate(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkIOSDeviceID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkGoogleAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkGameCenterAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkFacebookInstantGamesId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkFacebookAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkCustomID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkApple(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkAndroidDeviceID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSubtractUserVirtualCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperStartPurchase(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetPlayerSecret(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetFriendTags(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSendAccountRecoveryEmail(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRewardAdActivity(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRestoreIOSPurchases(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReportPlayer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReportDeviceInfo(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReportAdActivity(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveSharedGroupMembers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveGenericID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveFriend(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveContactEmail(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRegisterPlayFabUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRegisterForIOSPushNotification(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRefreshPSNAuthToken(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRedeemCoupon(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPurchaseItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPayForPurchase(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperOpenTrade(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperMatchmake(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithXbox(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithTwitch(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithSteam(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithPSN(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithPlayFab(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithOpenIdConnect(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithNintendoSwitchDeviceId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithNintendoServiceAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithKongregate(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithIOSDeviceID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithGoogleAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithGameCenter(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithFacebookInstantGamesId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithFacebook(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithEmailAddress(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithCustomID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithApple(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithAndroidDeviceID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkXboxAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkTwitch(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkSteamAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkPSNAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkOpenIdConnect(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkNintendoSwitchDeviceId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkNintendoServiceAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkKongregate(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkIOSDeviceID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkGoogleAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkGameCenterAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkFacebookInstantGamesId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkFacebookAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkCustomID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkApple(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkAndroidDeviceID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGrantCharacterToUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserPublisherReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserInventory(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTradeStatus(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitlePublicKey(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleNews(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTime(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetStoreItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetSharedGroupData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPurchase(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromXboxLiveIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromTwitchIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromSteamIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromPSNAccountIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromKongregateIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromGoogleIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromGenericIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromGameCenterIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromFacebookInstantGamesIds(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromFacebookIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerTrades(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerTags(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerStatisticVersions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerSegments(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerProfile(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerCombinedInfo(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPhotonAuthenticationToken(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPaymentToken(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboardForUserCharacters(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboardAroundPlayer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboardAroundCharacter(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboard(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetGameServerRegions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetFriendsList(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetFriendLeaderboardAroundPlayer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetFriendLeaderboard(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCurrentGames(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetContentDownloadUrl(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterLeaderboard(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterInventory(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCatalogItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetAllUsersCharacters(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetAdPlacements(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetAccountInfo(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperExecuteCloudScript(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateSharedGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperConsumeXboxEntitlements(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperConsumePSNEntitlements(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperConsumePS5Entitlements(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperConsumeMicrosoftStoreEntitlements(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperConsumeItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperConfirmPurchase(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCancelTrade(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAttributeInstall(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAndroidDevicePushNotificationRegistration(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddUserVirtualCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddUsernamePassword(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddSharedGroupMembers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddOrUpdateContactEmail(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddGenericID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddFriend(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAcceptTrade(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GrantCharacterToUser(FClientGrantCharacterToUserRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGrantCharacterToUser onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetUserReadOnlyData(FClientGetUserDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetUserReadOnlyData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetUserPublisherReadOnlyData(FClientGetUserDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetUserPublisherReadOnlyData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetUserPublisherData(FClientGetUserDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetUserPublisherData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetUserInventory(FClientGetUserInventoryRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetUserInventory onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetUserData(FClientGetUserDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetUserData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetTradeStatus(FClientGetTradeStatusRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetTradeStatus onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetTitlePublicKey(FClientGetTitlePublicKeyRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetTitlePublicKey onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetTitleNews(FClientGetTitleNewsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetTitleNews onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetTitleData(FClientGetTitleDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetTitleData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetTime(FClientGetTimeRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetTime onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetStoreItems(FClientGetStoreItemsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetStoreItems onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetSharedGroupData(FClientGetSharedGroupDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetSharedGroupData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPurchase(FClientGetPurchaseRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPurchase onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPublisherData(FClientGetPublisherDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPublisherData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayFabIDsFromXboxLiveIDs(FClientGetPlayFabIDsFromXboxLiveIDsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayFabIDsFromTwitchIDs(FClientGetPlayFabIDsFromTwitchIDsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayFabIDsFromTwitchIDs onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayFabIDsFromSteamIDs(FClientGetPlayFabIDsFromSteamIDsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayFabIDsFromSteamIDs onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayFabIDsFromPSNAccountIDs(FClientGetPlayFabIDsFromPSNAccountIDsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayFabIDsFromNintendoSwitchDeviceIds(FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayFabIDsFromKongregateIDs(FClientGetPlayFabIDsFromKongregateIDsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayFabIDsFromKongregateIDs onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayFabIDsFromGoogleIDs(FClientGetPlayFabIDsFromGoogleIDsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayFabIDsFromGoogleIDs onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayFabIDsFromGenericIDs(FClientGetPlayFabIDsFromGenericIDsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayFabIDsFromGenericIDs onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayFabIDsFromGameCenterIDs(FClientGetPlayFabIDsFromGameCenterIDsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayFabIDsFromGameCenterIDs onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayFabIDsFromFacebookInstantGamesIds(FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayFabIDsFromFacebookIDs(FClientGetPlayFabIDsFromFacebookIDsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayFabIDsFromFacebookIDs onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayerTrades(FClientGetPlayerTradesRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayerTrades onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayerTags(FClientGetPlayerTagsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayerTags onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayerStatisticVersions(FClientGetPlayerStatisticVersionsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayerStatisticVersions onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayerStatistics(FClientGetPlayerStatisticsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayerStatistics onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayerSegments(FClientGetPlayerSegmentsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayerSegments onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayerProfile(FClientGetPlayerProfileRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayerProfile onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPlayerCombinedInfo(FClientGetPlayerCombinedInfoRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPlayerCombinedInfo onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPhotonAuthenticationToken(FClientGetPhotonAuthenticationTokenRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPhotonAuthenticationToken onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetPaymentToken(FClientGetPaymentTokenRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetPaymentToken onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetLeaderboardForUserCharacters(FClientGetLeaderboardForUsersCharactersRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetLeaderboardForUserCharacters onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetLeaderboardAroundPlayer(FClientGetLeaderboardAroundPlayerRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetLeaderboardAroundPlayer onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetLeaderboardAroundCharacter(FClientGetLeaderboardAroundCharacterRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetLeaderboardAroundCharacter onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetLeaderboard(FClientGetLeaderboardRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetLeaderboard onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetGameServerRegions(FClientGameServerRegionsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetGameServerRegions onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetFriendsList(FClientGetFriendsListRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetFriendsList onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetFriendLeaderboardAroundPlayer(FClientGetFriendLeaderboardAroundPlayerRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetFriendLeaderboardAroundPlayer onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetFriendLeaderboard(FClientGetFriendLeaderboardRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetFriendLeaderboard onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetCurrentGames(FClientCurrentGamesRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetCurrentGames onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetContentDownloadUrl(FClientGetContentDownloadUrlRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetContentDownloadUrl onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetCharacterStatistics(FClientGetCharacterStatisticsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetCharacterStatistics onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetCharacterReadOnlyData(FClientGetCharacterDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetCharacterReadOnlyData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetCharacterLeaderboard(FClientGetCharacterLeaderboardRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetCharacterLeaderboard onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetCharacterInventory(FClientGetCharacterInventoryRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetCharacterInventory onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetCharacterData(FClientGetCharacterDataRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetCharacterData onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetCatalogItems(FClientGetCatalogItemsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetCatalogItems onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetAllUsersCharacters(FClientListUsersCharactersRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetAllUsersCharacters onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetAdPlacements(FClientGetAdPlacementsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetAdPlacements onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* GetAccountInfo(FClientGetAccountInfoRequest Request, UPlayFabClientAPI::FDelegateOnSuccessGetAccountInfo onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ExecuteCloudScript(FClientExecuteCloudScriptRequest Request, UPlayFabClientAPI::FDelegateOnSuccessExecuteCloudScript onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* CreateSharedGroup(FClientCreateSharedGroupRequest Request, UPlayFabClientAPI::FDelegateOnSuccessCreateSharedGroup onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ConsumeXboxEntitlements(FClientConsumeXboxEntitlementsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessConsumeXboxEntitlements onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ConsumePSNEntitlements(FClientConsumePSNEntitlementsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessConsumePSNEntitlements onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ConsumePS5Entitlements(FClientConsumePS5EntitlementsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessConsumePS5Entitlements onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ConsumeMicrosoftStoreEntitlements(FClientConsumeMicrosoftStoreEntitlementsRequest Request, UPlayFabClientAPI::FDelegateOnSuccessConsumeMicrosoftStoreEntitlements onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ConsumeItem(FClientConsumeItemRequest Request, UPlayFabClientAPI::FDelegateOnSuccessConsumeItem onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* ConfirmPurchase(FClientConfirmPurchaseRequest Request, UPlayFabClientAPI::FDelegateOnSuccessConfirmPurchase onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* CancelTrade(FClientCancelTradeRequest Request, UPlayFabClientAPI::FDelegateOnSuccessCancelTrade onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* AttributeInstall(FClientAttributeInstallRequest Request, UPlayFabClientAPI::FDelegateOnSuccessAttributeInstall onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* AndroidDevicePushNotificationRegistration(FClientAndroidDevicePushNotificationRegistrationRequest Request, UPlayFabClientAPI::FDelegateOnSuccessAndroidDevicePushNotificationRegistration onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* AddUserVirtualCurrency(FClientAddUserVirtualCurrencyRequest Request, UPlayFabClientAPI::FDelegateOnSuccessAddUserVirtualCurrency onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* AddUsernamePassword(FClientAddUsernamePasswordRequest Request, UPlayFabClientAPI::FDelegateOnSuccessAddUsernamePassword onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* AddSharedGroupMembers(FClientAddSharedGroupMembersRequest Request, UPlayFabClientAPI::FDelegateOnSuccessAddSharedGroupMembers onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* AddOrUpdateContactEmail(FClientAddOrUpdateContactEmailRequest Request, UPlayFabClientAPI::FDelegateOnSuccessAddOrUpdateContactEmail onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* AddGenericID(FClientAddGenericIDRequest Request, UPlayFabClientAPI::FDelegateOnSuccessAddGenericID onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* AddFriend(FClientAddFriendRequest Request, UPlayFabClientAPI::FDelegateOnSuccessAddFriend onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabClientAPI* AcceptTrade(FClientAcceptTradeRequest Request, UPlayFabClientAPI::FDelegateOnSuccessAcceptTrade onSuccess, UPlayFabClientAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

