#include "PlayFabAuthenticationContext.h"

UPlayFabAuthenticationContext::UPlayFabAuthenticationContext() {
}

void UPlayFabAuthenticationContext::SetPlayFabId(const FString& InKey) {
}

void UPlayFabAuthenticationContext::SetEntityToken(const FString& InToken) {
}

void UPlayFabAuthenticationContext::SetDeveloperSecretKey(const FString& InKey) {
}

void UPlayFabAuthenticationContext::SetClientSessionTicket(const FString& InTicket) {
}

FString UPlayFabAuthenticationContext::GetPlayFabId() {
    return TEXT("");
}

FString UPlayFabAuthenticationContext::GetEntityToken() {
    return TEXT("");
}

FString UPlayFabAuthenticationContext::GetDeveloperSecretKey() {
    return TEXT("");
}

FString UPlayFabAuthenticationContext::GetClientSessionTicket() {
    return TEXT("");
}

void UPlayFabAuthenticationContext::ForgetAllCredentials() {
}

void UPlayFabAuthenticationContext::ClientAdminSecurityCheck() const {
}


