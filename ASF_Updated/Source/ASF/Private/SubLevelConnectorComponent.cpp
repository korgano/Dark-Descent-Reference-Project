#include "SubLevelConnectorComponent.h"

USubLevelConnectorComponent::USubLevelConnectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsMoving = false;
}

FTransform USubLevelConnectorComponent::UpdateConnectorTransform(const FString& _ConnectorName) {
    return FTransform{};
}

void USubLevelConnectorComponent::UpdateConnectorSubLevelName(const FString& _ConnectorName, const FString& _SubLevelName) {
}

void USubLevelConnectorComponent::TwinActor_OnConnectorDeparture(USubLevelConnectorComponent* _Comp, const FString& _Connector) {
}

void USubLevelConnectorComponent::TwinActor_OnConnectorClosingDoor(USubLevelConnectorComponent* _Comp, const FString& _Connector) {
}

void USubLevelConnectorComponent::TwinActor_OnConnectorArrived(USubLevelConnectorComponent* _Comp, const FString& _Connector) {
}

bool USubLevelConnectorComponent::SublevelIsHidden(const FString& SubLevelName) const {
    return false;
}

void USubLevelConnectorComponent::RemoveConnector(const FString& _ConnectorName) {
}

void USubLevelConnectorComponent::OnConnectorTransitionEnded() {
}

void USubLevelConnectorComponent::OnConnectorSelected(const FString& _ConnectorName) {
}

bool USubLevelConnectorComponent::IsMoving() const {
    return false;
}

FString USubLevelConnectorComponent::GetCurrentSubLevel() {
    return TEXT("");
}

FString USubLevelConnectorComponent::GetCurrentConnector() const {
    return TEXT("");
}

FSubLevelConnectorComponentStruct USubLevelConnectorComponent::GetConnector_ByTransform(FTransform _Transform) {
    return FSubLevelConnectorComponentStruct{};
}

FSubLevelConnectorComponentStruct USubLevelConnectorComponent::GetConnector_BySubLevelName(const FString& _SubLevelName) {
    return FSubLevelConnectorComponentStruct{};
}

FSubLevelConnectorComponentStruct USubLevelConnectorComponent::GetConnector(const FString& _ConnectorName) {
    return FSubLevelConnectorComponentStruct{};
}

TArray<AActor*> USubLevelConnectorComponent::GetCharacterInConnector() const {
    return TArray<AActor*>();
}

TArray<FString> USubLevelConnectorComponent::GetAllConnectorsName() {
    return TArray<FString>();
}

int32 USubLevelConnectorComponent::FindConnectorBySubLevelName(const FString& _SubLevelName) {
    return 0;
}

int32 USubLevelConnectorComponent::FindConnector(const FString& _ConnectorName) {
    return 0;
}

void USubLevelConnectorComponent::ConnectorDeparture_Implementation(bool _bIsCalled) {
}

void USubLevelConnectorComponent::ConnectorClosingDoor_Implementation() {
}

void USubLevelConnectorComponent::ConnectorArrival_Implementation(const FString& _NewConnector, bool _bIsCalled) {
}

bool USubLevelConnectorComponent::CanCallConnector(const FString& _ConnectorName) {
    return false;
}

void USubLevelConnectorComponent::CallConnector(const FString& _ConnectorName) {
}

void USubLevelConnectorComponent::AddConnectorPossibility(const FString& _ConnectorName) {
}


