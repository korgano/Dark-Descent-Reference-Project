#include "PlayFabGroupsAPI.h"

UPlayFabGroupsAPI::UPlayFabGroupsAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::UpdateRole(FGroupsUpdateGroupRoleRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessUpdateRole onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::UpdateGroup(FGroupsUpdateGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessUpdateGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::UnblockEntity(FGroupsUnblockEntityRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessUnblockEntity onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::RemoveMembers(FGroupsRemoveMembersRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessRemoveMembers onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::RemoveGroupInvitation(FGroupsRemoveGroupInvitationRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessRemoveGroupInvitation onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::RemoveGroupApplication(FGroupsRemoveGroupApplicationRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessRemoveGroupApplication onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::ListMembershipOpportunities(FGroupsListMembershipOpportunitiesRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListMembershipOpportunities onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::ListMembership(FGroupsListMembershipRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListMembership onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::ListGroupMembers(FGroupsListGroupMembersRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListGroupMembers onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::ListGroupInvitations(FGroupsListGroupInvitationsRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListGroupInvitations onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::ListGroupBlocks(FGroupsListGroupBlocksRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListGroupBlocks onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::ListGroupApplications(FGroupsListGroupApplicationsRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessListGroupApplications onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::IsMember(FGroupsIsMemberRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessIsMember onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::InviteToGroup(FGroupsInviteToGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessInviteToGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabGroupsAPI::HelperUpdateRole(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperUpdateGroup(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperUnblockEntity(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperRemoveMembers(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperRemoveGroupInvitation(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperRemoveGroupApplication(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperListMembershipOpportunities(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperListMembership(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperListGroupMembers(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperListGroupInvitations(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperListGroupBlocks(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperListGroupApplications(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperIsMember(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperInviteToGroup(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperGetGroup(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperDeleteRole(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperDeleteGroup(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperCreateRole(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperCreateGroup(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperChangeMemberRole(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperBlockEntity(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperApplyToGroup(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperAddMembers(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperAcceptGroupInvitation(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabGroupsAPI::HelperAcceptGroupApplication(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::GetGroup(FGroupsGetGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessGetGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::DeleteRole(FGroupsDeleteRoleRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessDeleteRole onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::DeleteGroup(FGroupsDeleteGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessDeleteGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::CreateRole(FGroupsCreateGroupRoleRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessCreateRole onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::CreateGroup(FGroupsCreateGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessCreateGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::ChangeMemberRole(FGroupsChangeMemberRoleRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessChangeMemberRole onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::BlockEntity(FGroupsBlockEntityRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessBlockEntity onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::ApplyToGroup(FGroupsApplyToGroupRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessApplyToGroup onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::AddMembers(FGroupsAddMembersRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessAddMembers onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::AcceptGroupInvitation(FGroupsAcceptGroupInvitationRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessAcceptGroupInvitation onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabGroupsAPI* UPlayFabGroupsAPI::AcceptGroupApplication(FGroupsAcceptGroupApplicationRequest Request, UPlayFabGroupsAPI::FDelegateOnSuccessAcceptGroupApplication onSuccess, UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}


