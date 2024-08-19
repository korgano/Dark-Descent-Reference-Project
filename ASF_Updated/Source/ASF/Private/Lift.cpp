#include "Lift.h"

ALift::ALift(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSquadMustReachArrowsLocations = false;
}

void ALift::UpdateLiftVisibility_Implementation(const FString& Level) {
}

void ALift::SetNextTransofrmLiftForSave_Implementation(const FTransform& NextTrans) {
}

void ALift::SetEnableOtherLifts(bool newEnable) {
}

bool ALift::GetSquadMustReachArrowsLocations() const {
    return false;
}

TArray<AASFCharacter*> ALift::FilterAlliesAvailable(TArray<AASFCharacter*> Allies) {
    return TArray<AASFCharacter*>();
}

FString ALift::ComputeConnectorName(const FString& ConnectorName, USubLevelConnectorComponent* SubLevelConnectorComponent) {
    return TEXT("");
}


