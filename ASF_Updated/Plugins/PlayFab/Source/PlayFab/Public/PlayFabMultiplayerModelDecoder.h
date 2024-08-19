#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MultiplayerBuildAliasDetailsResponse.h"
#include "MultiplayerCancelAllMatchmakingTicketsForPlayerResult.h"
#include "MultiplayerCancelAllServerBackfillTicketsForPlayerResult.h"
#include "MultiplayerCancelMatchmakingTicketResult.h"
#include "MultiplayerCancelServerBackfillTicketResult.h"
#include "MultiplayerCreateBuildWithCustomContainerResponse.h"
#include "MultiplayerCreateBuildWithManagedContainerResponse.h"
#include "MultiplayerCreateBuildWithProcessBasedServerResponse.h"
#include "MultiplayerCreateLobbyResult.h"
#include "MultiplayerCreateMatchmakingTicketResult.h"
#include "MultiplayerCreateRemoteUserResponse.h"
#include "MultiplayerCreateServerBackfillTicketResult.h"
#include "MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse.h"
#include "MultiplayerEmptyResponse.h"
#include "MultiplayerEnableMultiplayerServersForTitleResponse.h"
#include "MultiplayerFindFriendLobbiesResult.h"
#include "MultiplayerFindLobbiesResult.h"
#include "MultiplayerGetAssetDownloadUrlResponse.h"
#include "MultiplayerGetAssetUploadUrlResponse.h"
#include "MultiplayerGetBuildResponse.h"
#include "MultiplayerGetContainerRegistryCredentialsResponse.h"
#include "MultiplayerGetLobbyResult.h"
#include "MultiplayerGetMatchResult.h"
#include "MultiplayerGetMatchmakingTicketResult.h"
#include "MultiplayerGetMultiplayerServerDetailsResponse.h"
#include "MultiplayerGetMultiplayerServerLogsResponse.h"
#include "MultiplayerGetQueueStatisticsResult.h"
#include "MultiplayerGetRemoteLoginEndpointResponse.h"
#include "MultiplayerGetServerBackfillTicketResult.h"
#include "MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse.h"
#include "MultiplayerGetTitleMultiplayerServersQuotaChangeResponse.h"
#include "MultiplayerGetTitleMultiplayerServersQuotasResponse.h"
#include "MultiplayerJoinLobbyResult.h"
#include "MultiplayerJoinMatchmakingTicketResult.h"
#include "MultiplayerListAssetSummariesResponse.h"
#include "MultiplayerListBuildAliasesResponse.h"
#include "MultiplayerListBuildSummariesResponse.h"
#include "MultiplayerListCertificateSummariesResponse.h"
#include "MultiplayerListContainerImageTagsResponse.h"
#include "MultiplayerListContainerImagesResponse.h"
#include "MultiplayerListMatchmakingTicketsForPlayerResult.h"
#include "MultiplayerListMultiplayerServersResponse.h"
#include "MultiplayerListPartyQosServersResponse.h"
#include "MultiplayerListQosServersForTitleResponse.h"
#include "MultiplayerListServerBackfillTicketsForPlayerResult.h"
#include "MultiplayerListTitleMultiplayerServersQuotaChangesResponse.h"
#include "MultiplayerListVirtualMachineSummariesResponse.h"
#include "MultiplayerLobbyEmptyResult.h"
#include "MultiplayerRequestMultiplayerServerResponse.h"
#include "MultiplayerRolloverContainerRegistryCredentialsResponse.h"
#include "MultiplayerSubscribeToLobbyResourceResult.h"
#include "PlayFabMultiplayerModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabMultiplayerModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabMultiplayerModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FMultiplayerSubscribeToLobbyResourceResult decodeSubscribeToLobbyResourceResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerRolloverContainerRegistryCredentialsResponse decodeRolloverContainerRegistryCredentialsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerRequestMultiplayerServerResponse decodeRequestMultiplayerServerResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerLobbyEmptyResult decodeLobbyEmptyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListVirtualMachineSummariesResponse decodeListVirtualMachineSummariesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListTitleMultiplayerServersQuotaChangesResponse decodeListTitleMultiplayerServersQuotaChangesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListServerBackfillTicketsForPlayerResult decodeListServerBackfillTicketsForPlayerResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListQosServersForTitleResponse decodeListQosServersForTitleResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListPartyQosServersResponse decodeListPartyQosServersResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListMultiplayerServersResponse decodeListMultiplayerServersResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListMatchmakingTicketsForPlayerResult decodeListMatchmakingTicketsForPlayerResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListContainerImageTagsResponse decodeListContainerImageTagsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListContainerImagesResponse decodeListContainerImagesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListCertificateSummariesResponse decodeListCertificateSummariesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListBuildSummariesResponse decodeListBuildSummariesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListBuildAliasesResponse decodeListBuildAliasesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListAssetSummariesResponse decodeListAssetSummariesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerJoinMatchmakingTicketResult decodeJoinMatchmakingTicketResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerJoinLobbyResult decodeJoinLobbyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetTitleMultiplayerServersQuotasResponse decodeGetTitleMultiplayerServersQuotasResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse decodeGetTitleMultiplayerServersQuotaChangeResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse decodeGetTitleEnabledForMultiplayerServersStatusResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetServerBackfillTicketResult decodeGetServerBackfillTicketResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetRemoteLoginEndpointResponse decodeGetRemoteLoginEndpointResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetQueueStatisticsResult decodeGetQueueStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetMultiplayerServerLogsResponse decodeGetMultiplayerServerLogsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetMultiplayerServerDetailsResponse decodeGetMultiplayerServerDetailsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetMatchResult decodeGetMatchResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetMatchmakingTicketResult decodeGetMatchmakingTicketResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetLobbyResult decodeGetLobbyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetContainerRegistryCredentialsResponse decodeGetContainerRegistryCredentialsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetBuildResponse decodeGetBuildResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetAssetUploadUrlResponse decodeGetAssetUploadUrlResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetAssetDownloadUrlResponse decodeGetAssetDownloadUrlResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerFindLobbiesResult decodeFindLobbiesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerFindFriendLobbiesResult decodeFindFriendLobbiesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerEnableMultiplayerServersForTitleResponse decodeEnableMultiplayerServersForTitleResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse decodeCreateTitleMultiplayerServersQuotaChangeResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateServerBackfillTicketResult decodeCreateServerBackfillTicketResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateRemoteUserResponse decodeCreateRemoteUserResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateMatchmakingTicketResult decodeCreateMatchmakingTicketResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateLobbyResult decodeCreateLobbyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateBuildWithProcessBasedServerResponse decodeCreateBuildWithProcessBasedServerResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateBuildWithManagedContainerResponse decodeCreateBuildWithManagedContainerResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateBuildWithCustomContainerResponse decodeCreateBuildWithCustomContainerResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCancelServerBackfillTicketResult decodeCancelServerBackfillTicketResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCancelMatchmakingTicketResult decodeCancelMatchmakingTicketResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCancelAllServerBackfillTicketsForPlayerResult decodeCancelAllServerBackfillTicketsForPlayerResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCancelAllMatchmakingTicketsForPlayerResult decodeCancelAllMatchmakingTicketsForPlayerResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerBuildAliasDetailsResponse decodeBuildAliasDetailsResponseResponse(UPlayFabJsonObject* response);
    
};

