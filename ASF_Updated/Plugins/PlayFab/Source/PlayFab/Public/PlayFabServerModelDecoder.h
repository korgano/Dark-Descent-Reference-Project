#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ServerAddPlayerTagResult.h"
#include "ServerAddSharedGroupMembersResult.h"
#include "ServerAuthenticateSessionTicketResult.h"
#include "ServerAwardSteamAchievementResult.h"
#include "ServerBanUsersResult.h"
#include "ServerConsumeItemResult.h"
#include "ServerCreateSharedGroupResult.h"
#include "ServerDeleteCharacterFromUserResult.h"
#include "ServerDeletePlayerResult.h"
#include "ServerDeletePushNotificationTemplateResult.h"
#include "ServerDeregisterGameResponse.h"
#include "ServerEmptyResponse.h"
#include "ServerEmptyResult.h"
#include "ServerEvaluateRandomResultTableResult.h"
#include "ServerExecuteCloudScriptResult.h"
#include "ServerGetAllSegmentsResult.h"
#include "ServerGetCatalogItemsResult.h"
#include "ServerGetCharacterDataResult.h"
#include "ServerGetCharacterInventoryResult.h"
#include "ServerGetCharacterLeaderboardResult.h"
#include "ServerGetCharacterStatisticsResult.h"
#include "ServerGetContentDownloadUrlResult.h"
#include "ServerGetFriendsListResult.h"
#include "ServerGetLeaderboardAroundCharacterResult.h"
#include "ServerGetLeaderboardAroundUserResult.h"
#include "ServerGetLeaderboardForUsersCharactersResult.h"
#include "ServerGetLeaderboardResult.h"
#include "ServerGetPlayFabIDsFromFacebookIDsResult.h"
#include "ServerGetPlayFabIDsFromFacebookInstantGamesIdsResult.h"
#include "ServerGetPlayFabIDsFromGenericIDsResult.h"
#include "ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult.h"
#include "ServerGetPlayFabIDsFromPSNAccountIDsResult.h"
#include "ServerGetPlayFabIDsFromSteamIDsResult.h"
#include "ServerGetPlayFabIDsFromXboxLiveIDsResult.h"
#include "ServerGetPlayerCombinedInfoResult.h"
#include "ServerGetPlayerProfileResult.h"
#include "ServerGetPlayerSegmentsResult.h"
#include "ServerGetPlayerStatisticVersionsResult.h"
#include "ServerGetPlayerStatisticsResult.h"
#include "ServerGetPlayerTagsResult.h"
#include "ServerGetPlayersInSegmentResult.h"
#include "ServerGetPublisherDataResult.h"
#include "ServerGetRandomResultTablesResult.h"
#include "ServerGetServerCustomIDsFromPlayFabIDsResult.h"
#include "ServerGetSharedGroupDataResult.h"
#include "ServerGetStoreItemsResult.h"
#include "ServerGetTimeResult.h"
#include "ServerGetTitleDataResult.h"
#include "ServerGetTitleNewsResult.h"
#include "ServerGetUserAccountInfoResult.h"
#include "ServerGetUserBansResult.h"
#include "ServerGetUserDataResult.h"
#include "ServerGetUserInventoryResult.h"
#include "ServerGrantCharacterToUserResult.h"
#include "ServerGrantItemsToCharacterResult.h"
#include "ServerGrantItemsToUserResult.h"
#include "ServerGrantItemsToUsersResult.h"
#include "ServerLinkPSNAccountResult.h"
#include "ServerLinkServerCustomIdResult.h"
#include "ServerLinkXboxAccountResult.h"
#include "ServerListUsersCharactersResult.h"
#include "ServerModifyCharacterVirtualCurrencyResult.h"
#include "ServerModifyItemUsesResult.h"
#include "ServerModifyUserVirtualCurrencyResult.h"
#include "ServerMoveItemToCharacterFromCharacterResult.h"
#include "ServerMoveItemToCharacterFromUserResult.h"
#include "ServerMoveItemToUserFromCharacterResult.h"
#include "ServerNotifyMatchmakerPlayerLeftResult.h"
#include "ServerRedeemCouponResult.h"
#include "ServerRedeemMatchmakerTicketResult.h"
#include "ServerRefreshGameServerInstanceHeartbeatResult.h"
#include "ServerRegisterGameResponse.h"
#include "ServerRemovePlayerTagResult.h"
#include "ServerRemoveSharedGroupMembersResult.h"
#include "ServerReportPlayerServerResult.h"
#include "ServerRevokeAllBansForUserResult.h"
#include "ServerRevokeBansResult.h"
#include "ServerRevokeInventoryItemsResult.h"
#include "ServerRevokeInventoryResult.h"
#include "ServerSavePushNotificationTemplateResult.h"
#include "ServerSendCustomAccountRecoveryEmailResult.h"
#include "ServerSendEmailFromTemplateResult.h"
#include "ServerSendPushNotificationResult.h"
#include "ServerServerLoginResult.h"
#include "ServerSetGameServerInstanceDataResult.h"
#include "ServerSetGameServerInstanceStateResult.h"
#include "ServerSetGameServerInstanceTagsResult.h"
#include "ServerSetPlayerSecretResult.h"
#include "ServerSetPublisherDataResult.h"
#include "ServerSetTitleDataResult.h"
#include "ServerUnlinkPSNAccountResult.h"
#include "ServerUnlinkServerCustomIdResult.h"
#include "ServerUnlinkXboxAccountResult.h"
#include "ServerUnlockContainerItemResult.h"
#include "ServerUpdateBansResult.h"
#include "ServerUpdateCharacterDataResult.h"
#include "ServerUpdateCharacterStatisticsResult.h"
#include "ServerUpdatePlayerStatisticsResult.h"
#include "ServerUpdateSharedGroupDataResult.h"
#include "ServerUpdateUserDataResult.h"
#include "ServerWriteEventResponse.h"
#include "PlayFabServerModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabServerModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabServerModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FServerWriteEventResponse decodeWriteEventResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdateUserDataResult decodeUpdateUserDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdateSharedGroupDataResult decodeUpdateSharedGroupDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdatePlayerStatisticsResult decodeUpdatePlayerStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdateCharacterStatisticsResult decodeUpdateCharacterStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdateCharacterDataResult decodeUpdateCharacterDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdateBansResult decodeUpdateBansResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUnlockContainerItemResult decodeUnlockContainerItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUnlinkXboxAccountResult decodeUnlinkXboxAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUnlinkServerCustomIdResult decodeUnlinkServerCustomIdResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUnlinkPSNAccountResult decodeUnlinkPSNAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSetTitleDataResult decodeSetTitleDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSetPublisherDataResult decodeSetPublisherDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSetPlayerSecretResult decodeSetPlayerSecretResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSetGameServerInstanceTagsResult decodeSetGameServerInstanceTagsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSetGameServerInstanceStateResult decodeSetGameServerInstanceStateResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSetGameServerInstanceDataResult decodeSetGameServerInstanceDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerServerLoginResult decodeServerLoginResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSendPushNotificationResult decodeSendPushNotificationResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSendEmailFromTemplateResult decodeSendEmailFromTemplateResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSendCustomAccountRecoveryEmailResult decodeSendCustomAccountRecoveryEmailResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSavePushNotificationTemplateResult decodeSavePushNotificationTemplateResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRevokeInventoryResult decodeRevokeInventoryResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRevokeInventoryItemsResult decodeRevokeInventoryItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRevokeBansResult decodeRevokeBansResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRevokeAllBansForUserResult decodeRevokeAllBansForUserResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerReportPlayerServerResult decodeReportPlayerServerResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRemoveSharedGroupMembersResult decodeRemoveSharedGroupMembersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRemovePlayerTagResult decodeRemovePlayerTagResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRegisterGameResponse decodeRegisterGameResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRefreshGameServerInstanceHeartbeatResult decodeRefreshGameServerInstanceHeartbeatResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRedeemMatchmakerTicketResult decodeRedeemMatchmakerTicketResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRedeemCouponResult decodeRedeemCouponResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerNotifyMatchmakerPlayerLeftResult decodeNotifyMatchmakerPlayerLeftResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerMoveItemToUserFromCharacterResult decodeMoveItemToUserFromCharacterResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerMoveItemToCharacterFromUserResult decodeMoveItemToCharacterFromUserResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerMoveItemToCharacterFromCharacterResult decodeMoveItemToCharacterFromCharacterResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerModifyItemUsesResult decodeModifyItemUsesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerModifyCharacterVirtualCurrencyResult decodeModifyCharacterVirtualCurrencyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerListUsersCharactersResult decodeListUsersCharactersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerLinkXboxAccountResult decodeLinkXboxAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerLinkServerCustomIdResult decodeLinkServerCustomIdResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerLinkPSNAccountResult decodeLinkPSNAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGrantItemsToUsersResult decodeGrantItemsToUsersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGrantItemsToUserResult decodeGrantItemsToUserResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGrantItemsToCharacterResult decodeGrantItemsToCharacterResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGrantCharacterToUserResult decodeGrantCharacterToUserResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetUserInventoryResult decodeGetUserInventoryResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetUserDataResult decodeGetUserDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetUserBansResult decodeGetUserBansResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetUserAccountInfoResult decodeGetUserAccountInfoResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetTitleNewsResult decodeGetTitleNewsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetTitleDataResult decodeGetTitleDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetTimeResult decodeGetTimeResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetStoreItemsResult decodeGetStoreItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetSharedGroupDataResult decodeGetSharedGroupDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetServerCustomIDsFromPlayFabIDsResult decodeGetServerCustomIDsFromPlayFabIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetRandomResultTablesResult decodeGetRandomResultTablesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPublisherDataResult decodeGetPublisherDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromXboxLiveIDsResult decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromSteamIDsResult decodeGetPlayFabIDsFromSteamIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromPSNAccountIDsResult decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromGenericIDsResult decodeGetPlayFabIDsFromGenericIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromFacebookIDsResult decodeGetPlayFabIDsFromFacebookIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerTagsResult decodeGetPlayerTagsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerStatisticVersionsResult decodeGetPlayerStatisticVersionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerStatisticsResult decodeGetPlayerStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayersInSegmentResult decodeGetPlayersInSegmentResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerSegmentsResult decodeGetPlayerSegmentsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerProfileResult decodeGetPlayerProfileResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerCombinedInfoResult decodeGetPlayerCombinedInfoResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetLeaderboardResult decodeGetLeaderboardResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetLeaderboardForUsersCharactersResult decodeGetLeaderboardForUsersCharactersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetLeaderboardAroundUserResult decodeGetLeaderboardAroundUserResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetLeaderboardAroundCharacterResult decodeGetLeaderboardAroundCharacterResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetFriendsListResult decodeGetFriendsListResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetContentDownloadUrlResult decodeGetContentDownloadUrlResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetCharacterStatisticsResult decodeGetCharacterStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetCharacterLeaderboardResult decodeGetCharacterLeaderboardResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetCharacterInventoryResult decodeGetCharacterInventoryResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetCharacterDataResult decodeGetCharacterDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetCatalogItemsResult decodeGetCatalogItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetAllSegmentsResult decodeGetAllSegmentsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerExecuteCloudScriptResult decodeExecuteCloudScriptResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerEvaluateRandomResultTableResult decodeEvaluateRandomResultTableResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerEmptyResult decodeEmptyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerDeregisterGameResponse decodeDeregisterGameResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerDeletePushNotificationTemplateResult decodeDeletePushNotificationTemplateResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerDeletePlayerResult decodeDeletePlayerResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerDeleteCharacterFromUserResult decodeDeleteCharacterFromUserResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerCreateSharedGroupResult decodeCreateSharedGroupResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerConsumeItemResult decodeConsumeItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerBanUsersResult decodeBanUsersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerAwardSteamAchievementResult decodeAwardSteamAchievementResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerAuthenticateSessionTicketResult decodeAuthenticateSessionTicketResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerAddSharedGroupMembersResult decodeAddSharedGroupMembersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FServerAddPlayerTagResult decodeAddPlayerTagResultResponse(UPlayFabJsonObject* response);
    
};

