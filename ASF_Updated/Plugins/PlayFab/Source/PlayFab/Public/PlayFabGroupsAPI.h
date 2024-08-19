#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "GroupsAcceptGroupApplicationRequest.h"
#include "GroupsAcceptGroupInvitationRequest.h"
#include "GroupsAddMembersRequest.h"
#include "GroupsApplyToGroupRequest.h"
#include "GroupsApplyToGroupResponse.h"
#include "GroupsBlockEntityRequest.h"
#include "GroupsChangeMemberRoleRequest.h"
#include "GroupsCreateGroupRequest.h"
#include "GroupsCreateGroupResponse.h"
#include "GroupsCreateGroupRoleRequest.h"
#include "GroupsCreateGroupRoleResponse.h"
#include "GroupsDeleteGroupRequest.h"
#include "GroupsDeleteRoleRequest.h"
#include "GroupsEmptyResponse.h"
#include "GroupsGetGroupRequest.h"
#include "GroupsGetGroupResponse.h"
#include "GroupsInviteToGroupRequest.h"
#include "GroupsInviteToGroupResponse.h"
#include "GroupsIsMemberRequest.h"
#include "GroupsIsMemberResponse.h"
#include "GroupsListGroupApplicationsRequest.h"
#include "GroupsListGroupApplicationsResponse.h"
#include "GroupsListGroupBlocksRequest.h"
#include "GroupsListGroupBlocksResponse.h"
#include "GroupsListGroupInvitationsRequest.h"
#include "GroupsListGroupInvitationsResponse.h"
#include "GroupsListGroupMembersRequest.h"
#include "GroupsListGroupMembersResponse.h"
#include "GroupsListMembershipOpportunitiesRequest.h"
#include "GroupsListMembershipOpportunitiesResponse.h"
#include "GroupsListMembershipRequest.h"
#include "GroupsListMembershipResponse.h"
#include "GroupsRemoveGroupApplicationRequest.h"
#include "GroupsRemoveGroupInvitationRequest.h"
#include "GroupsRemoveMembersRequest.h"
#include "GroupsUnblockEntityRequest.h"
#include "GroupsUpdateGroupRequest.h"
#include "GroupsUpdateGroupResponse.h"
#include "GroupsUpdateGroupRoleRequest.h"
#include "GroupsUpdateGroupRoleResponse.h"
#include "OnPlayFabGroupsRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "PlayFabGroupsAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabGroupsAPI;
class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabGroupsAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateRole, FGroupsUpdateGroupRoleResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateGroup, FGroupsUpdateGroupResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnblockEntity, FGroupsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveMembers, FGroupsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveGroupInvitation, FGroupsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveGroupApplication, FGroupsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListMembershipOpportunities, FGroupsListMembershipOpportunitiesResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListMembership, FGroupsListMembershipResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListGroupMembers, FGroupsListGroupMembersResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListGroupInvitations, FGroupsListGroupInvitationsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListGroupBlocks, FGroupsListGroupBlocksResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListGroupApplications, FGroupsListGroupApplicationsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessIsMember, FGroupsIsMemberResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessInviteToGroup, FGroupsInviteToGroupResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetGroup, FGroupsGetGroupResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteRole, FGroupsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteGroup, FGroupsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateRole, FGroupsCreateGroupRoleResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateGroup, FGroupsCreateGroupResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessChangeMemberRole, FGroupsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessBlockEntity, FGroupsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessApplyToGroup, FGroupsApplyToGroupResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddMembers, FGroupsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAcceptGroupInvitation, FGroupsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAcceptGroupApplication, FGroupsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabGroupsRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabGroupsAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* UpdateRole(FGroupsUpdateGroupRoleRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessUpdateRole onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* UpdateGroup(FGroupsUpdateGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessUpdateGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* UnblockEntity(FGroupsUnblockEntityRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessUnblockEntity onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* RemoveMembers(FGroupsRemoveMembersRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessRemoveMembers onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* RemoveGroupInvitation(FGroupsRemoveGroupInvitationRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessRemoveGroupInvitation onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* RemoveGroupApplication(FGroupsRemoveGroupApplicationRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessRemoveGroupApplication onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* ListMembershipOpportunities(FGroupsListMembershipOpportunitiesRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListMembershipOpportunities onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* ListMembership(FGroupsListMembershipRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListMembership onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* ListGroupMembers(FGroupsListGroupMembersRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListGroupMembers onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* ListGroupInvitations(FGroupsListGroupInvitationsRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListGroupInvitations onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* ListGroupBlocks(FGroupsListGroupBlocksRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListGroupBlocks onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* ListGroupApplications(FGroupsListGroupApplicationsRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListGroupApplications onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* IsMember(FGroupsIsMemberRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessIsMember onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* InviteToGroup(FGroupsInviteToGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessInviteToGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateRole(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnblockEntity(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveMembers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveGroupInvitation(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveGroupApplication(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListMembershipOpportunities(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListMembership(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListGroupMembers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListGroupInvitations(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListGroupBlocks(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListGroupApplications(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperIsMember(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperInviteToGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteRole(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateRole(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperChangeMemberRole(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperBlockEntity(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperApplyToGroup(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddMembers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAcceptGroupInvitation(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAcceptGroupApplication(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* GetGroup(FGroupsGetGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessGetGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* DeleteRole(FGroupsDeleteRoleRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessDeleteRole onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* DeleteGroup(FGroupsDeleteGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessDeleteGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* CreateRole(FGroupsCreateGroupRoleRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessCreateRole onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* CreateGroup(FGroupsCreateGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessCreateGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* ChangeMemberRole(FGroupsChangeMemberRoleRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessChangeMemberRole onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* BlockEntity(FGroupsBlockEntityRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessBlockEntity onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* ApplyToGroup(FGroupsApplyToGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessApplyToGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* AddMembers(FGroupsAddMembersRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessAddMembers onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* AcceptGroupInvitation(FGroupsAcceptGroupInvitationRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessAcceptGroupInvitation onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabGroupsAPI* AcceptGroupApplication(FGroupsAcceptGroupApplicationRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessAcceptGroupApplication onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

