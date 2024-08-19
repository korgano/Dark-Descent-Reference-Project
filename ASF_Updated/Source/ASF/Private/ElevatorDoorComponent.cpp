#include "ElevatorDoorComponent.h"

UElevatorDoorComponent::UElevatorDoorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LinkedSubLevelConnector = NULL;
}

void UElevatorDoorComponent::OnConnectorDeparture_Event(USubLevelConnectorComponent* _SubLevelConnector, const FString& _ConnectorName) {
}

void UElevatorDoorComponent::OnConnectorArrived_Event(USubLevelConnectorComponent* _SubLevelConnector, const FString& _ConnectorName) {
}

void UElevatorDoorComponent::InitElevatorDoorComponent() {
}


