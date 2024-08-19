#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AdminAddLocalizedNewsResult.h"
#include "AdminAddNewsResult.h"
#include "AdminAddPlayerTagResult.h"
#include "AdminBanUsersResult.h"
#include "AdminBlankResult.h"
#include "AdminCheckLimitedEditionItemAvailabilityResult.h"
#include "AdminCreatePlayerSharedSecretResult.h"
#include "AdminCreatePlayerStatisticDefinitionResult.h"
#include "AdminCreateSegmentResponse.h"
#include "AdminCreateTaskResult.h"
#include "AdminDeleteMasterPlayerAccountResult.h"
#include "AdminDeleteMembershipSubscriptionResult.h"
#include "AdminDeletePlayerResult.h"
#include "AdminDeletePlayerSharedSecretResult.h"
#include "AdminDeleteSegmentsResponse.h"
#include "AdminDeleteStoreResult.h"
#include "AdminDeleteTitleDataOverrideResult.h"
#include "AdminDeleteTitleResult.h"
#include "AdminEmptyResponse.h"
#include "AdminExportMasterPlayerDataResult.h"
#include "AdminGetActionsOnPlayersInSegmentTaskInstanceResult.h"
#include "AdminGetAllSegmentsResult.h"
#include "AdminGetCatalogItemsResult.h"
#include "AdminGetCloudScriptRevisionResult.h"
#include "AdminGetCloudScriptTaskInstanceResult.h"
#include "AdminGetCloudScriptVersionsResult.h"
#include "AdminGetContentListResult.h"
#include "AdminGetContentUploadUrlResult.h"
#include "AdminGetDataReportResult.h"
#include "AdminGetMatchmakerGameInfoResult.h"
#include "AdminGetMatchmakerGameModesResult.h"
#include "AdminGetPlayedTitleListResult.h"
#include "AdminGetPlayerIdFromAuthTokenResult.h"
#include "AdminGetPlayerProfileResult.h"
#include "AdminGetPlayerSegmentsResult.h"
#include "AdminGetPlayerSharedSecretsResult.h"
#include "AdminGetPlayerStatisticDefinitionsResult.h"
#include "AdminGetPlayerStatisticVersionsResult.h"
#include "AdminGetPlayerTagsResult.h"
#include "AdminGetPlayersInSegmentResult.h"
#include "AdminGetPolicyResponse.h"
#include "AdminGetPublisherDataResult.h"
#include "AdminGetRandomResultTablesResult.h"
#include "AdminGetSegmentsResponse.h"
#include "AdminGetStoreItemsResult.h"
#include "AdminGetTaskInstancesResult.h"
#include "AdminGetTasksResult.h"
#include "AdminGetTitleDataResult.h"
#include "AdminGetUserBansResult.h"
#include "AdminGetUserDataResult.h"
#include "AdminGetUserInventoryResult.h"
#include "AdminGrantItemsToUsersResult.h"
#include "AdminIncrementLimitedEditionItemAvailabilityResult.h"
#include "AdminIncrementPlayerStatisticVersionResult.h"
#include "AdminListOpenIdConnectionResponse.h"
#include "AdminListVirtualCurrencyTypesResult.h"
#include "AdminLookupUserAccountInfoResult.h"
#include "AdminModifyServerBuildResult.h"
#include "AdminModifyUserVirtualCurrencyResult.h"
#include "AdminRefundPurchaseResponse.h"
#include "AdminRemovePlayerTagResult.h"
#include "AdminResetCharacterStatisticsResult.h"
#include "AdminResetPasswordResult.h"
#include "AdminResetUserStatisticsResult.h"
#include "AdminResolvePurchaseDisputeResponse.h"
#include "AdminRevokeAllBansForUserResult.h"
#include "AdminRevokeBansResult.h"
#include "AdminRevokeInventoryItemsResult.h"
#include "AdminRevokeInventoryResult.h"
#include "AdminRunTaskResult.h"
#include "AdminSendAccountRecoveryEmailResult.h"
#include "AdminSetMembershipOverrideResult.h"
#include "AdminSetPlayerSecretResult.h"
#include "AdminSetPublishedRevisionResult.h"
#include "AdminSetPublisherDataResult.h"
#include "AdminSetTitleDataAndOverridesResult.h"
#include "AdminSetTitleDataResult.h"
#include "AdminSetupPushNotificationResult.h"
#include "AdminUpdateBansResult.h"
#include "AdminUpdateCatalogItemsResult.h"
#include "AdminUpdateCloudScriptResult.h"
#include "AdminUpdatePlayerSharedSecretResult.h"
#include "AdminUpdatePlayerStatisticDefinitionResult.h"
#include "AdminUpdatePolicyResponse.h"
#include "AdminUpdateRandomResultTablesResult.h"
#include "AdminUpdateSegmentResponse.h"
#include "AdminUpdateStoreItemsResult.h"
#include "AdminUpdateUserDataResult.h"
#include "AdminUpdateUserTitleDisplayNameResult.h"
#include "PlayFabAdminModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabAdminModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabAdminModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FAdminUpdateUserTitleDisplayNameResult decodeUpdateUserTitleDisplayNameResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateUserDataResult decodeUpdateUserDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateStoreItemsResult decodeUpdateStoreItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateSegmentResponse decodeUpdateSegmentResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateRandomResultTablesResult decodeUpdateRandomResultTablesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdatePolicyResponse decodeUpdatePolicyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdatePlayerStatisticDefinitionResult decodeUpdatePlayerStatisticDefinitionResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdatePlayerSharedSecretResult decodeUpdatePlayerSharedSecretResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateCloudScriptResult decodeUpdateCloudScriptResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateCatalogItemsResult decodeUpdateCatalogItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateBansResult decodeUpdateBansResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetupPushNotificationResult decodeSetupPushNotificationResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetTitleDataResult decodeSetTitleDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetTitleDataAndOverridesResult decodeSetTitleDataAndOverridesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetPublisherDataResult decodeSetPublisherDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetPublishedRevisionResult decodeSetPublishedRevisionResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetPlayerSecretResult decodeSetPlayerSecretResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetMembershipOverrideResult decodeSetMembershipOverrideResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSendAccountRecoveryEmailResult decodeSendAccountRecoveryEmailResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRunTaskResult decodeRunTaskResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRevokeInventoryResult decodeRevokeInventoryResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRevokeInventoryItemsResult decodeRevokeInventoryItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRevokeBansResult decodeRevokeBansResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRevokeAllBansForUserResult decodeRevokeAllBansForUserResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminResolvePurchaseDisputeResponse decodeResolvePurchaseDisputeResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminResetUserStatisticsResult decodeResetUserStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminResetPasswordResult decodeResetPasswordResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminResetCharacterStatisticsResult decodeResetCharacterStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRemovePlayerTagResult decodeRemovePlayerTagResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRefundPurchaseResponse decodeRefundPurchaseResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminModifyServerBuildResult decodeModifyServerBuildResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminLookupUserAccountInfoResult decodeLookupUserAccountInfoResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminListVirtualCurrencyTypesResult decodeListVirtualCurrencyTypesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminListOpenIdConnectionResponse decodeListOpenIdConnectionResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminIncrementPlayerStatisticVersionResult decodeIncrementPlayerStatisticVersionResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminIncrementLimitedEditionItemAvailabilityResult decodeIncrementLimitedEditionItemAvailabilityResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGrantItemsToUsersResult decodeGrantItemsToUsersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetUserInventoryResult decodeGetUserInventoryResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetUserDataResult decodeGetUserDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetUserBansResult decodeGetUserBansResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetTitleDataResult decodeGetTitleDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetTasksResult decodeGetTasksResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetTaskInstancesResult decodeGetTaskInstancesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetStoreItemsResult decodeGetStoreItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetSegmentsResponse decodeGetSegmentsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetRandomResultTablesResult decodeGetRandomResultTablesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPublisherDataResult decodeGetPublisherDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPolicyResponse decodeGetPolicyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerTagsResult decodeGetPlayerTagsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerStatisticVersionsResult decodeGetPlayerStatisticVersionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerStatisticDefinitionsResult decodeGetPlayerStatisticDefinitionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayersInSegmentResult decodeGetPlayersInSegmentResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerSharedSecretsResult decodeGetPlayerSharedSecretsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerSegmentsResult decodeGetPlayerSegmentsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerProfileResult decodeGetPlayerProfileResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerIdFromAuthTokenResult decodeGetPlayerIdFromAuthTokenResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayedTitleListResult decodeGetPlayedTitleListResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetMatchmakerGameModesResult decodeGetMatchmakerGameModesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetMatchmakerGameInfoResult decodeGetMatchmakerGameInfoResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetDataReportResult decodeGetDataReportResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetContentUploadUrlResult decodeGetContentUploadUrlResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetContentListResult decodeGetContentListResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetCloudScriptVersionsResult decodeGetCloudScriptVersionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetCloudScriptTaskInstanceResult decodeGetCloudScriptTaskInstanceResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetCloudScriptRevisionResult decodeGetCloudScriptRevisionResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetCatalogItemsResult decodeGetCatalogItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetAllSegmentsResult decodeGetAllSegmentsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetActionsOnPlayersInSegmentTaskInstanceResult decodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminExportMasterPlayerDataResult decodeExportMasterPlayerDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteTitleResult decodeDeleteTitleResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteTitleDataOverrideResult decodeDeleteTitleDataOverrideResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteStoreResult decodeDeleteStoreResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteSegmentsResponse decodeDeleteSegmentsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeletePlayerSharedSecretResult decodeDeletePlayerSharedSecretResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeletePlayerResult decodeDeletePlayerResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteMembershipSubscriptionResult decodeDeleteMembershipSubscriptionResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteMasterPlayerAccountResult decodeDeleteMasterPlayerAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminCreateTaskResult decodeCreateTaskResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminCreateSegmentResponse decodeCreateSegmentResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminCreatePlayerStatisticDefinitionResult decodeCreatePlayerStatisticDefinitionResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminCreatePlayerSharedSecretResult decodeCreatePlayerSharedSecretResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminCheckLimitedEditionItemAvailabilityResult decodeCheckLimitedEditionItemAvailabilityResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminBlankResult decodeBlankResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminBanUsersResult decodeBanUsersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminAddPlayerTagResult decodeAddPlayerTagResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminAddNewsResult decodeAddNewsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminAddLocalizedNewsResult decodeAddLocalizedNewsResultResponse(UPlayFabJsonObject* response);
    
};

