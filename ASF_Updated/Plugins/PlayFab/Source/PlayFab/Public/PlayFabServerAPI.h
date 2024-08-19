#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "OnPlayFabServerRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "ServerAddCharacterVirtualCurrencyRequest.h"
#include "ServerAddFriendRequest.h"
#include "ServerAddGenericIDRequest.h"
#include "ServerAddPlayerTagRequest.h"
#include "ServerAddPlayerTagResult.h"
#include "ServerAddSharedGroupMembersRequest.h"
#include "ServerAddSharedGroupMembersResult.h"
#include "ServerAddUserVirtualCurrencyRequest.h"
#include "ServerAuthenticateSessionTicketRequest.h"
#include "ServerAuthenticateSessionTicketResult.h"
#include "ServerAwardSteamAchievementRequest.h"
#include "ServerAwardSteamAchievementResult.h"
#include "ServerBanUsersRequest.h"
#include "ServerBanUsersResult.h"
#include "ServerConsumeItemRequest.h"
#include "ServerConsumeItemResult.h"
#include "ServerCreateSharedGroupRequest.h"
#include "ServerCreateSharedGroupResult.h"
#include "ServerDeleteCharacterFromUserRequest.h"
#include "ServerDeleteCharacterFromUserResult.h"
#include "ServerDeletePlayerRequest.h"
#include "ServerDeletePlayerResult.h"
#include "ServerDeletePushNotificationTemplateRequest.h"
#include "ServerDeletePushNotificationTemplateResult.h"
#include "ServerDeleteSharedGroupRequest.h"
#include "ServerDeregisterGameRequest.h"
#include "ServerDeregisterGameResponse.h"
#include "ServerEmptyResponse.h"
#include "ServerEmptyResult.h"
#include "ServerEvaluateRandomResultTableRequest.h"
#include "ServerEvaluateRandomResultTableResult.h"
#include "ServerExecuteCloudScriptResult.h"
#include "ServerExecuteCloudScriptServerRequest.h"
#include "ServerGetAllSegmentsRequest.h"
#include "ServerGetAllSegmentsResult.h"
#include "ServerGetCatalogItemsRequest.h"
#include "ServerGetCatalogItemsResult.h"
#include "ServerGetCharacterDataRequest.h"
#include "ServerGetCharacterDataResult.h"
#include "ServerGetCharacterInventoryRequest.h"
#include "ServerGetCharacterInventoryResult.h"
#include "ServerGetCharacterLeaderboardRequest.h"
#include "ServerGetCharacterLeaderboardResult.h"
#include "ServerGetCharacterStatisticsRequest.h"
#include "ServerGetCharacterStatisticsResult.h"
#include "ServerGetContentDownloadUrlRequest.h"
#include "ServerGetContentDownloadUrlResult.h"
#include "ServerGetFriendLeaderboardRequest.h"
#include "ServerGetFriendsListRequest.h"
#include "ServerGetFriendsListResult.h"
#include "ServerGetLeaderboardAroundCharacterRequest.h"
#include "ServerGetLeaderboardAroundCharacterResult.h"
#include "ServerGetLeaderboardAroundUserRequest.h"
#include "ServerGetLeaderboardAroundUserResult.h"
#include "ServerGetLeaderboardForUsersCharactersRequest.h"
#include "ServerGetLeaderboardForUsersCharactersResult.h"
#include "ServerGetLeaderboardRequest.h"
#include "ServerGetLeaderboardResult.h"
#include "ServerGetPlayFabIDsFromFacebookIDsRequest.h"
#include "ServerGetPlayFabIDsFromFacebookIDsResult.h"
#include "ServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest.h"
#include "ServerGetPlayFabIDsFromFacebookInstantGamesIdsResult.h"
#include "ServerGetPlayFabIDsFromGenericIDsRequest.h"
#include "ServerGetPlayFabIDsFromGenericIDsResult.h"
#include "ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h"
#include "ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult.h"
#include "ServerGetPlayFabIDsFromPSNAccountIDsRequest.h"
#include "ServerGetPlayFabIDsFromPSNAccountIDsResult.h"
#include "ServerGetPlayFabIDsFromSteamIDsRequest.h"
#include "ServerGetPlayFabIDsFromSteamIDsResult.h"
#include "ServerGetPlayFabIDsFromXboxLiveIDsRequest.h"
#include "ServerGetPlayFabIDsFromXboxLiveIDsResult.h"
#include "ServerGetPlayerCombinedInfoRequest.h"
#include "ServerGetPlayerCombinedInfoResult.h"
#include "ServerGetPlayerProfileRequest.h"
#include "ServerGetPlayerProfileResult.h"
#include "ServerGetPlayerSegmentsResult.h"
#include "ServerGetPlayerStatisticVersionsRequest.h"
#include "ServerGetPlayerStatisticVersionsResult.h"
#include "ServerGetPlayerStatisticsRequest.h"
#include "ServerGetPlayerStatisticsResult.h"
#include "ServerGetPlayerTagsRequest.h"
#include "ServerGetPlayerTagsResult.h"
#include "ServerGetPlayersInSegmentRequest.h"
#include "ServerGetPlayersInSegmentResult.h"
#include "ServerGetPlayersSegmentsRequest.h"
#include "ServerGetPublisherDataRequest.h"
#include "ServerGetPublisherDataResult.h"
#include "ServerGetRandomResultTablesRequest.h"
#include "ServerGetRandomResultTablesResult.h"
#include "ServerGetServerCustomIDsFromPlayFabIDsRequest.h"
#include "ServerGetServerCustomIDsFromPlayFabIDsResult.h"
#include "ServerGetSharedGroupDataRequest.h"
#include "ServerGetSharedGroupDataResult.h"
#include "ServerGetStoreItemsResult.h"
#include "ServerGetStoreItemsServerRequest.h"
#include "ServerGetTimeRequest.h"
#include "ServerGetTimeResult.h"
#include "ServerGetTitleDataRequest.h"
#include "ServerGetTitleDataResult.h"
#include "ServerGetTitleNewsRequest.h"
#include "ServerGetTitleNewsResult.h"
#include "ServerGetUserAccountInfoRequest.h"
#include "ServerGetUserAccountInfoResult.h"
#include "ServerGetUserBansRequest.h"
#include "ServerGetUserBansResult.h"
#include "ServerGetUserDataRequest.h"
#include "ServerGetUserDataResult.h"
#include "ServerGetUserInventoryRequest.h"
#include "ServerGetUserInventoryResult.h"
#include "ServerGrantCharacterToUserRequest.h"
#include "ServerGrantCharacterToUserResult.h"
#include "ServerGrantItemsToCharacterRequest.h"
#include "ServerGrantItemsToCharacterResult.h"
#include "ServerGrantItemsToUserRequest.h"
#include "ServerGrantItemsToUserResult.h"
#include "ServerGrantItemsToUsersRequest.h"
#include "ServerGrantItemsToUsersResult.h"
#include "ServerLinkPSNAccountRequest.h"
#include "ServerLinkPSNAccountResult.h"
#include "ServerLinkServerCustomIdRequest.h"
#include "ServerLinkServerCustomIdResult.h"
#include "ServerLinkXboxAccountRequest.h"
#include "ServerLinkXboxAccountResult.h"
#include "ServerListUsersCharactersRequest.h"
#include "ServerListUsersCharactersResult.h"
#include "ServerLoginWithServerCustomIdRequest.h"
#include "ServerLoginWithSteamIdRequest.h"
#include "ServerLoginWithXboxIdRequest.h"
#include "ServerLoginWithXboxRequest.h"
#include "ServerModifyCharacterVirtualCurrencyResult.h"
#include "ServerModifyItemUsesRequest.h"
#include "ServerModifyItemUsesResult.h"
#include "ServerModifyUserVirtualCurrencyResult.h"
#include "ServerMoveItemToCharacterFromCharacterRequest.h"
#include "ServerMoveItemToCharacterFromCharacterResult.h"
#include "ServerMoveItemToCharacterFromUserRequest.h"
#include "ServerMoveItemToCharacterFromUserResult.h"
#include "ServerMoveItemToUserFromCharacterRequest.h"
#include "ServerMoveItemToUserFromCharacterResult.h"
#include "ServerNotifyMatchmakerPlayerLeftRequest.h"
#include "ServerNotifyMatchmakerPlayerLeftResult.h"
#include "ServerRedeemCouponRequest.h"
#include "ServerRedeemCouponResult.h"
#include "ServerRedeemMatchmakerTicketRequest.h"
#include "ServerRedeemMatchmakerTicketResult.h"
#include "ServerRefreshGameServerInstanceHeartbeatRequest.h"
#include "ServerRefreshGameServerInstanceHeartbeatResult.h"
#include "ServerRegisterGameRequest.h"
#include "ServerRegisterGameResponse.h"
#include "ServerRemoveFriendRequest.h"
#include "ServerRemoveGenericIDRequest.h"
#include "ServerRemovePlayerTagRequest.h"
#include "ServerRemovePlayerTagResult.h"
#include "ServerRemoveSharedGroupMembersRequest.h"
#include "ServerRemoveSharedGroupMembersResult.h"
#include "ServerReportPlayerServerRequest.h"
#include "ServerReportPlayerServerResult.h"
#include "ServerRevokeAllBansForUserRequest.h"
#include "ServerRevokeAllBansForUserResult.h"
#include "ServerRevokeBansRequest.h"
#include "ServerRevokeBansResult.h"
#include "ServerRevokeInventoryItemRequest.h"
#include "ServerRevokeInventoryItemsRequest.h"
#include "ServerRevokeInventoryItemsResult.h"
#include "ServerRevokeInventoryResult.h"
#include "ServerSavePushNotificationTemplateRequest.h"
#include "ServerSavePushNotificationTemplateResult.h"
#include "ServerSendCustomAccountRecoveryEmailRequest.h"
#include "ServerSendCustomAccountRecoveryEmailResult.h"
#include "ServerSendEmailFromTemplateRequest.h"
#include "ServerSendEmailFromTemplateResult.h"
#include "ServerSendPushNotificationFromTemplateRequest.h"
#include "ServerSendPushNotificationRequest.h"
#include "ServerSendPushNotificationResult.h"
#include "ServerServerLoginResult.h"
#include "ServerSetFriendTagsRequest.h"
#include "ServerSetGameServerInstanceDataRequest.h"
#include "ServerSetGameServerInstanceDataResult.h"
#include "ServerSetGameServerInstanceStateRequest.h"
#include "ServerSetGameServerInstanceStateResult.h"
#include "ServerSetGameServerInstanceTagsRequest.h"
#include "ServerSetGameServerInstanceTagsResult.h"
#include "ServerSetPlayerSecretRequest.h"
#include "ServerSetPlayerSecretResult.h"
#include "ServerSetPublisherDataRequest.h"
#include "ServerSetPublisherDataResult.h"
#include "ServerSetTitleDataRequest.h"
#include "ServerSetTitleDataResult.h"
#include "ServerSubtractCharacterVirtualCurrencyRequest.h"
#include "ServerSubtractUserVirtualCurrencyRequest.h"
#include "ServerUnlinkPSNAccountRequest.h"
#include "ServerUnlinkPSNAccountResult.h"
#include "ServerUnlinkServerCustomIdRequest.h"
#include "ServerUnlinkServerCustomIdResult.h"
#include "ServerUnlinkXboxAccountRequest.h"
#include "ServerUnlinkXboxAccountResult.h"
#include "ServerUnlockContainerInstanceRequest.h"
#include "ServerUnlockContainerItemRequest.h"
#include "ServerUnlockContainerItemResult.h"
#include "ServerUpdateAvatarUrlRequest.h"
#include "ServerUpdateBansRequest.h"
#include "ServerUpdateBansResult.h"
#include "ServerUpdateCharacterDataRequest.h"
#include "ServerUpdateCharacterDataResult.h"
#include "ServerUpdateCharacterStatisticsRequest.h"
#include "ServerUpdateCharacterStatisticsResult.h"
#include "ServerUpdatePlayerStatisticsRequest.h"
#include "ServerUpdatePlayerStatisticsResult.h"
#include "ServerUpdateSharedGroupDataRequest.h"
#include "ServerUpdateSharedGroupDataResult.h"
#include "ServerUpdateUserDataRequest.h"
#include "ServerUpdateUserDataResult.h"
#include "ServerUpdateUserInternalDataRequest.h"
#include "ServerUpdateUserInventoryItemDataRequest.h"
#include "ServerWriteEventResponse.h"
#include "ServerWriteServerCharacterEventRequest.h"
#include "ServerWriteServerPlayerEventRequest.h"
#include "ServerWriteTitleEventRequest.h"
#include "PlayFabServerAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabJsonObject;
class UPlayFabServerAPI;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabServerAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWriteTitleEvent, FServerWriteEventResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWritePlayerEvent, FServerWriteEventResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWriteCharacterEvent, FServerWriteEventResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserReadOnlyData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherReadOnlyData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherInternalData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserInventoryItemCustomData, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserInternalData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateSharedGroupData, FServerUpdateSharedGroupDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdatePlayerStatistics, FServerUpdatePlayerStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCharacterStatistics, FServerUpdateCharacterStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCharacterReadOnlyData, FServerUpdateCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCharacterInternalData, FServerUpdateCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCharacterData, FServerUpdateCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateBans, FServerUpdateBansResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateAvatarUrl, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlockContainerItem, FServerUnlockContainerItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlockContainerInstance, FServerUnlockContainerItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkXboxAccount, FServerUnlinkXboxAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkServerCustomId, FServerUnlinkServerCustomIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkPSNAccount, FServerUnlinkPSNAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubtractUserVirtualCurrency, FServerModifyUserVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubtractCharacterVirtualCurrency, FServerModifyCharacterVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetTitleInternalData, FServerSetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetTitleData, FServerSetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetPublisherData, FServerSetPublisherDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetPlayerSecret, FServerSetPlayerSecretResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetGameServerInstanceTags, FServerSetGameServerInstanceTagsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetGameServerInstanceState, FServerSetGameServerInstanceStateResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetGameServerInstanceData, FServerSetGameServerInstanceDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetFriendTags, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSendPushNotificationFromTemplate, FServerSendPushNotificationResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSendPushNotification, FServerSendPushNotificationResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSendEmailFromTemplate, FServerSendEmailFromTemplateResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSendCustomAccountRecoveryEmail, FServerSendCustomAccountRecoveryEmailResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSavePushNotificationTemplate, FServerSavePushNotificationTemplateResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeInventoryItems, FServerRevokeInventoryItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeInventoryItem, FServerRevokeInventoryResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeBans, FServerRevokeBansResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeAllBansForUser, FServerRevokeAllBansForUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReportPlayer, FServerReportPlayerServerResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveSharedGroupMembers, FServerRemoveSharedGroupMembersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemovePlayerTag, FServerRemovePlayerTagResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveGenericID, FServerEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveFriend, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRegisterGame, FServerRegisterGameResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRefreshGameServerInstanceHeartbeat, FServerRefreshGameServerInstanceHeartbeatResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRedeemMatchmakerTicket, FServerRedeemMatchmakerTicketResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRedeemCoupon, FServerRedeemCouponResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessNotifyMatchmakerPlayerLeft, FServerNotifyMatchmakerPlayerLeftResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessMoveItemToUserFromCharacter, FServerMoveItemToUserFromCharacterResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessMoveItemToCharacterFromUser, FServerMoveItemToCharacterFromUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessMoveItemToCharacterFromCharacter, FServerMoveItemToCharacterFromCharacterResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessModifyItemUses, FServerModifyItemUsesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithXboxId, FServerServerLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithXbox, FServerServerLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithSteamId, FServerServerLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithServerCustomId, FServerServerLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkXboxAccount, FServerLinkXboxAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkServerCustomId, FServerLinkServerCustomIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkPSNAccount, FServerLinkPSNAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantItemsToUsers, FServerGrantItemsToUsersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantItemsToUser, FServerGrantItemsToUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantItemsToCharacter, FServerGrantItemsToCharacterResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantCharacterToUser, FServerGrantCharacterToUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserReadOnlyData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherReadOnlyData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherInternalData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserInventory, FServerGetUserInventoryResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserInternalData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserBans, FServerGetUserBansResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserAccountInfo, FServerGetUserAccountInfoResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleNews, FServerGetTitleNewsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleInternalData, FServerGetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleData, FServerGetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTime, FServerGetTimeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetStoreItems, FServerGetStoreItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetSharedGroupData, FServerGetSharedGroupDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetServerCustomIDsFromPlayFabIDs, FServerGetServerCustomIDsFromPlayFabIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetRandomResultTables, FServerGetRandomResultTablesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPublisherData, FServerGetPublisherDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs, FServerGetPlayFabIDsFromXboxLiveIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromSteamIDs, FServerGetPlayFabIDsFromSteamIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs, FServerGetPlayFabIDsFromPSNAccountIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds, FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromGenericIDs, FServerGetPlayFabIDsFromGenericIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds, FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromFacebookIDs, FServerGetPlayFabIDsFromFacebookIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerTags, FServerGetPlayerTagsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerStatisticVersions, FServerGetPlayerStatisticVersionsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerStatistics, FServerGetPlayerStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayersInSegment, FServerGetPlayersInSegmentResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerSegments, FServerGetPlayerSegmentsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerProfile, FServerGetPlayerProfileResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerCombinedInfo, FServerGetPlayerCombinedInfoResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboardForUserCharacters, FServerGetLeaderboardForUsersCharactersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboardAroundUser, FServerGetLeaderboardAroundUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboardAroundCharacter, FServerGetLeaderboardAroundCharacterResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboard, FServerGetLeaderboardResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetFriendsList, FServerGetFriendsListResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetFriendLeaderboard, FServerGetLeaderboardResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetContentDownloadUrl, FServerGetContentDownloadUrlResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterStatistics, FServerGetCharacterStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterReadOnlyData, FServerGetCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterLeaderboard, FServerGetCharacterLeaderboardResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterInventory, FServerGetCharacterInventoryResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterInternalData, FServerGetCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterData, FServerGetCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCatalogItems, FServerGetCatalogItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetAllUsersCharacters, FServerListUsersCharactersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetAllSegments, FServerGetAllSegmentsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessExecuteCloudScript, FServerExecuteCloudScriptResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessEvaluateRandomResultTable, FServerEvaluateRandomResultTableResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeregisterGame, FServerDeregisterGameResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteSharedGroup, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeletePushNotificationTemplate, FServerDeletePushNotificationTemplateResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeletePlayer, FServerDeletePlayerResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteCharacterFromUser, FServerDeleteCharacterFromUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateSharedGroup, FServerCreateSharedGroupResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessConsumeItem, FServerConsumeItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessBanUsers, FServerBanUsersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAwardSteamAchievement, FServerAwardSteamAchievementResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAuthenticateSessionTicket, FServerAuthenticateSessionTicketResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddUserVirtualCurrency, FServerModifyUserVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddSharedGroupMembers, FServerAddSharedGroupMembersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddPlayerTag, FServerAddPlayerTagResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddGenericID, FServerEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddFriend, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddCharacterVirtualCurrency, FServerModifyCharacterVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabServerRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabServerAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* WriteTitleEvent(FServerWriteTitleEventRequest Request, UPlayFabServerAPI::FDelegateOnSuccessWriteTitleEvent onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* WritePlayerEvent(FServerWriteServerPlayerEventRequest Request, UPlayFabServerAPI::FDelegateOnSuccessWritePlayerEvent onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* WriteCharacterEvent(FServerWriteServerCharacterEventRequest Request, UPlayFabServerAPI::FDelegateOnSuccessWriteCharacterEvent onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserReadOnlyData(FServerUpdateUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserPublisherReadOnlyData(FServerUpdateUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserPublisherReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserPublisherInternalData(FServerUpdateUserInternalDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserPublisherInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserPublisherData(FServerUpdateUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserPublisherData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserInventoryItemCustomData(FServerUpdateUserInventoryItemDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserInventoryItemCustomData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserInternalData(FServerUpdateUserInternalDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserData(FServerUpdateUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateSharedGroupData(FServerUpdateSharedGroupDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateSharedGroupData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdatePlayerStatistics(FServerUpdatePlayerStatisticsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdatePlayerStatistics onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateCharacterStatistics(FServerUpdateCharacterStatisticsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateCharacterStatistics onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateCharacterReadOnlyData(FServerUpdateCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateCharacterReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateCharacterInternalData(FServerUpdateCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateCharacterInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateCharacterData(FServerUpdateCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateCharacterData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateBans(FServerUpdateBansRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateBans onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateAvatarUrl(FServerUpdateAvatarUrlRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateAvatarUrl onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlockContainerItem(FServerUnlockContainerItemRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlockContainerItem onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlockContainerInstance(FServerUnlockContainerInstanceRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlockContainerInstance onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlinkXboxAccount(FServerUnlinkXboxAccountRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlinkXboxAccount onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlinkServerCustomId(FServerUnlinkServerCustomIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlinkServerCustomId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlinkPSNAccount(FServerUnlinkPSNAccountRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlinkPSNAccount onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SubtractUserVirtualCurrency(FServerSubtractUserVirtualCurrencyRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSubtractUserVirtualCurrency onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SubtractCharacterVirtualCurrency(FServerSubtractCharacterVirtualCurrencyRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSubtractCharacterVirtualCurrency onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetTitleInternalData(FServerSetTitleDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetTitleInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetTitleData(FServerSetTitleDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetTitleData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetPublisherData(FServerSetPublisherDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetPublisherData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetPlayerSecret(FServerSetPlayerSecretRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetPlayerSecret onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetGameServerInstanceTags(FServerSetGameServerInstanceTagsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetGameServerInstanceTags onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetGameServerInstanceState(FServerSetGameServerInstanceStateRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetGameServerInstanceState onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetGameServerInstanceData(FServerSetGameServerInstanceDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetGameServerInstanceData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetFriendTags(FServerSetFriendTagsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetFriendTags onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SendPushNotificationFromTemplate(FServerSendPushNotificationFromTemplateRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSendPushNotificationFromTemplate onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SendPushNotification(FServerSendPushNotificationRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSendPushNotification onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SendEmailFromTemplate(FServerSendEmailFromTemplateRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSendEmailFromTemplate onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SendCustomAccountRecoveryEmail(FServerSendCustomAccountRecoveryEmailRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSendCustomAccountRecoveryEmail onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SavePushNotificationTemplate(FServerSavePushNotificationTemplateRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSavePushNotificationTemplate onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RevokeInventoryItems(FServerRevokeInventoryItemsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRevokeInventoryItems onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RevokeInventoryItem(FServerRevokeInventoryItemRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRevokeInventoryItem onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RevokeBans(FServerRevokeBansRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRevokeBans onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RevokeAllBansForUser(FServerRevokeAllBansForUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRevokeAllBansForUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* ReportPlayer(FServerReportPlayerServerRequest Request, UPlayFabServerAPI::FDelegateOnSuccessReportPlayer onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RemoveSharedGroupMembers(FServerRemoveSharedGroupMembersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRemoveSharedGroupMembers onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RemovePlayerTag(FServerRemovePlayerTagRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRemovePlayerTag onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RemoveGenericID(FServerRemoveGenericIDRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRemoveGenericID onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RemoveFriend(FServerRemoveFriendRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRemoveFriend onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RegisterGame(FServerRegisterGameRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRegisterGame onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RefreshGameServerInstanceHeartbeat(FServerRefreshGameServerInstanceHeartbeatRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRefreshGameServerInstanceHeartbeat onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RedeemMatchmakerTicket(FServerRedeemMatchmakerTicketRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRedeemMatchmakerTicket onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RedeemCoupon(FServerRedeemCouponRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRedeemCoupon onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* NotifyMatchmakerPlayerLeft(FServerNotifyMatchmakerPlayerLeftRequest Request, UPlayFabServerAPI::FDelegateOnSuccessNotifyMatchmakerPlayerLeft onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* MoveItemToUserFromCharacter(FServerMoveItemToUserFromCharacterRequest Request, UPlayFabServerAPI::FDelegateOnSuccessMoveItemToUserFromCharacter onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* MoveItemToCharacterFromUser(FServerMoveItemToCharacterFromUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessMoveItemToCharacterFromUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* MoveItemToCharacterFromCharacter(FServerMoveItemToCharacterFromCharacterRequest Request, UPlayFabServerAPI::FDelegateOnSuccessMoveItemToCharacterFromCharacter onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* ModifyItemUses(FServerModifyItemUsesRequest Request, UPlayFabServerAPI::FDelegateOnSuccessModifyItemUses onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LoginWithXboxId(FServerLoginWithXboxIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLoginWithXboxId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LoginWithXbox(FServerLoginWithXboxRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLoginWithXbox onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LoginWithSteamId(FServerLoginWithSteamIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLoginWithSteamId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LoginWithServerCustomId(FServerLoginWithServerCustomIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLoginWithServerCustomId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LinkXboxAccount(FServerLinkXboxAccountRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLinkXboxAccount onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LinkServerCustomId(FServerLinkServerCustomIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLinkServerCustomId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LinkPSNAccount(FServerLinkPSNAccountRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLinkPSNAccount onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperWriteTitleEvent(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperWritePlayerEvent(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperWriteCharacterEvent(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserPublisherReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserPublisherInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserInventoryItemCustomData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateSharedGroupData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdatePlayerStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCharacterStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCharacterReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCharacterInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCharacterData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateBans(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateAvatarUrl(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlockContainerItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlockContainerInstance(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkXboxAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkServerCustomId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkPSNAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSubtractUserVirtualCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSubtractCharacterVirtualCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetTitleInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetTitleData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetPlayerSecret(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetGameServerInstanceTags(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetGameServerInstanceState(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetGameServerInstanceData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetFriendTags(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSendPushNotificationFromTemplate(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSendPushNotification(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSendEmailFromTemplate(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSendCustomAccountRecoveryEmail(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSavePushNotificationTemplate(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeInventoryItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeInventoryItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeBans(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeAllBansForUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReportPlayer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveSharedGroupMembers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemovePlayerTag(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveGenericID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveFriend(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRegisterGame(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRefreshGameServerInstanceHeartbeat(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRedeemMatchmakerTicket(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRedeemCoupon(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperNotifyMatchmakerPlayerLeft(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperMoveItemToUserFromCharacter(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperMoveItemToCharacterFromUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperMoveItemToCharacterFromCharacter(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperModifyItemUses(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithXboxId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithXbox(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithSteamId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithServerCustomId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkXboxAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkServerCustomId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkPSNAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGrantItemsToUsers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGrantItemsToUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGrantItemsToCharacter(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGrantCharacterToUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserPublisherReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserPublisherInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserInventory(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserBans(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserAccountInfo(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleNews(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTime(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetStoreItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetSharedGroupData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetServerCustomIDsFromPlayFabIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetRandomResultTables(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromXboxLiveIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromSteamIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromPSNAccountIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromGenericIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromFacebookInstantGamesIds(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromFacebookIDs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerTags(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerStatisticVersions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayersInSegment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerSegments(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerProfile(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerCombinedInfo(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboardForUserCharacters(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboardAroundUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboardAroundCharacter(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboard(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetFriendsList(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetFriendLeaderboard(FPlayFabBaseModel response, UObject* customData, bool successful);
    
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
    void HelperGetCharacterInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCatalogItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetAllUsersCharacters(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetAllSegments(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperExecuteCloudScript(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperEvaluateRandomResultTable(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeregisterGame(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteSharedGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeletePushNotificationTemplate(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeletePlayer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteCharacterFromUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateSharedGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperConsumeItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperBanUsers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAwardSteamAchievement(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAuthenticateSessionTicket(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddUserVirtualCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddSharedGroupMembers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddPlayerTag(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddGenericID(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddFriend(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddCharacterVirtualCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GrantItemsToUsers(FServerGrantItemsToUsersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGrantItemsToUsers onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GrantItemsToUser(FServerGrantItemsToUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGrantItemsToUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GrantItemsToCharacter(FServerGrantItemsToCharacterRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGrantItemsToCharacter onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GrantCharacterToUser(FServerGrantCharacterToUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGrantCharacterToUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserReadOnlyData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserPublisherReadOnlyData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserPublisherReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserPublisherInternalData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserPublisherInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserPublisherData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserPublisherData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserInventory(FServerGetUserInventoryRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserInventory onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserInternalData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserBans(FServerGetUserBansRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserBans onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserAccountInfo(FServerGetUserAccountInfoRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserAccountInfo onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetTitleNews(FServerGetTitleNewsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetTitleNews onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetTitleInternalData(FServerGetTitleDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetTitleInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetTitleData(FServerGetTitleDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetTitleData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetTime(FServerGetTimeRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetTime onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetStoreItems(FServerGetStoreItemsServerRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetStoreItems onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetSharedGroupData(FServerGetSharedGroupDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetSharedGroupData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetServerCustomIDsFromPlayFabIDs(FServerGetServerCustomIDsFromPlayFabIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetServerCustomIDsFromPlayFabIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetRandomResultTables(FServerGetRandomResultTablesRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetRandomResultTables onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPublisherData(FServerGetPublisherDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPublisherData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromXboxLiveIDs(FServerGetPlayFabIDsFromXboxLiveIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromSteamIDs(FServerGetPlayFabIDsFromSteamIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromSteamIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromPSNAccountIDs(FServerGetPlayFabIDsFromPSNAccountIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromNintendoSwitchDeviceIds(FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromGenericIDs(FServerGetPlayFabIDsFromGenericIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromGenericIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromFacebookInstantGamesIds(FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromFacebookIDs(FServerGetPlayFabIDsFromFacebookIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromFacebookIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerTags(FServerGetPlayerTagsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerTags onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerStatisticVersions(FServerGetPlayerStatisticVersionsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerStatisticVersions onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerStatistics(FServerGetPlayerStatisticsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerStatistics onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayersInSegment(FServerGetPlayersInSegmentRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayersInSegment onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerSegments(FServerGetPlayersSegmentsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerSegments onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerProfile(FServerGetPlayerProfileRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerProfile onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerCombinedInfo(FServerGetPlayerCombinedInfoRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerCombinedInfo onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetLeaderboardForUserCharacters(FServerGetLeaderboardForUsersCharactersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetLeaderboardForUserCharacters onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetLeaderboardAroundUser(FServerGetLeaderboardAroundUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetLeaderboardAroundUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetLeaderboardAroundCharacter(FServerGetLeaderboardAroundCharacterRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetLeaderboardAroundCharacter onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetLeaderboard(FServerGetLeaderboardRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetLeaderboard onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetFriendsList(FServerGetFriendsListRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetFriendsList onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetFriendLeaderboard(FServerGetFriendLeaderboardRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetFriendLeaderboard onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetContentDownloadUrl(FServerGetContentDownloadUrlRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetContentDownloadUrl onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterStatistics(FServerGetCharacterStatisticsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterStatistics onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterReadOnlyData(FServerGetCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterLeaderboard(FServerGetCharacterLeaderboardRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterLeaderboard onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterInventory(FServerGetCharacterInventoryRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterInventory onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterInternalData(FServerGetCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterData(FServerGetCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCatalogItems(FServerGetCatalogItemsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCatalogItems onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetAllUsersCharacters(FServerListUsersCharactersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetAllUsersCharacters onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetAllSegments(FServerGetAllSegmentsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetAllSegments onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* ExecuteCloudScript(FServerExecuteCloudScriptServerRequest Request, UPlayFabServerAPI::FDelegateOnSuccessExecuteCloudScript onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* EvaluateRandomResultTable(FServerEvaluateRandomResultTableRequest Request, UPlayFabServerAPI::FDelegateOnSuccessEvaluateRandomResultTable onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* DeregisterGame(FServerDeregisterGameRequest Request, UPlayFabServerAPI::FDelegateOnSuccessDeregisterGame onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* DeleteSharedGroup(FServerDeleteSharedGroupRequest Request, UPlayFabServerAPI::FDelegateOnSuccessDeleteSharedGroup onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* DeletePushNotificationTemplate(FServerDeletePushNotificationTemplateRequest Request, UPlayFabServerAPI::FDelegateOnSuccessDeletePushNotificationTemplate onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* DeletePlayer(FServerDeletePlayerRequest Request, UPlayFabServerAPI::FDelegateOnSuccessDeletePlayer onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* DeleteCharacterFromUser(FServerDeleteCharacterFromUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessDeleteCharacterFromUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* CreateSharedGroup(FServerCreateSharedGroupRequest Request, UPlayFabServerAPI::FDelegateOnSuccessCreateSharedGroup onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* ConsumeItem(FServerConsumeItemRequest Request, UPlayFabServerAPI::FDelegateOnSuccessConsumeItem onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* BanUsers(FServerBanUsersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessBanUsers onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AwardSteamAchievement(FServerAwardSteamAchievementRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAwardSteamAchievement onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AuthenticateSessionTicket(FServerAuthenticateSessionTicketRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAuthenticateSessionTicket onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddUserVirtualCurrency(FServerAddUserVirtualCurrencyRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddUserVirtualCurrency onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddSharedGroupMembers(FServerAddSharedGroupMembersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddSharedGroupMembers onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddPlayerTag(FServerAddPlayerTagRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddPlayerTag onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddGenericID(FServerAddGenericIDRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddGenericID onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddFriend(FServerAddFriendRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddFriend onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddCharacterVirtualCurrency(FServerAddCharacterVirtualCurrencyRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddCharacterVirtualCurrency onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

