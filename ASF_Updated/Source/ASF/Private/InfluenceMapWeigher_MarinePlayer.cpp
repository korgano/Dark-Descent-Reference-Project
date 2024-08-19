#include "InfluenceMapWeigher_MarinePlayer.h"

UInfluenceMapWeigher_MarinePlayer::UInfluenceMapWeigher_MarinePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoAdd = true;
    this->VisionPolygonRadius = 1500.00f;
    this->Humanoid = NULL;
}

void UInfluenceMapWeigher_MarinePlayer::OnVisibleElementRebuilt(ARoomCluster* _RoomCluster) {
}

void UInfluenceMapWeigher_MarinePlayer::OnSquadLeaderChanged(ASquad* Squad, AHumanoidMarine* Character) {
}

void UInfluenceMapWeigher_MarinePlayer::OnSquadInit(ASquad* _Squad) {
}

void UInfluenceMapWeigher_MarinePlayer::OnInfluenceMapManagerSet(AASFGameModeBase_TacticalMode* _GameMode, AInfluenceMapManager* _InfluenceMapManager) {
}

void UInfluenceMapWeigher_MarinePlayer::OnInfluenceMapManagerDeleted(AInfluenceMapManager* _InfluenceMapManager) {
}

void UInfluenceMapWeigher_MarinePlayer::OnCharacterDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult) {
}


