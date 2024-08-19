#include "NavAreaClassDetection.h"

UNavAreaClassDetection::UNavAreaClassDetection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentNavAreaClass = NULL;
    this->bIsRoomClusterReady = false;
    this->bSubLevelReady = false;
    this->bIsEnable = true;
}

void UNavAreaClassDetection::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void UNavAreaClassDetection::OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

void UNavAreaClassDetection::OnSubLevelBeginUnload(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void UNavAreaClassDetection::OnRoomClusterSet(ARoomCluster* RoomCluster) {
}

void UNavAreaClassDetection::OnRoomClusterFirstGeneration(ARoomCluster* RoomCluster) {
}

void UNavAreaClassDetection::OnOwnerRemovedFromSquad(USquadMember* SquadMember, ASquad* Squad) {
}

void UNavAreaClassDetection::OnOwnerAddedToSquad(USquadMember* SquadMember, ASquad* Squad) {
}

void UNavAreaClassDetection::OnCharacterDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult) {
}

FNavNodeRefCarrier UNavAreaClassDetection::GetNavNodeRefCarrier() const {
    return FNavNodeRefCarrier{};
}

int32 UNavAreaClassDetection::GetGraphID() {
    return 0;
}


