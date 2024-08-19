#include "SafeZoneComponent.h"

USafeZoneComponent::USafeZoneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSafeZoneActive = false;
    this->bSafeShelter = true;
    this->ClusterFilter = NULL;
    this->SafeZoneEnemyContainer = NULL;
    this->SafeZoneSquadMarineOutContainer = NULL;
    this->bIsMassiveOnSlaughtOnGoing = false;
    this->bAreRoomShelterable = false;
    this->InShelterSquadEffect = NULL;
}

UPOIDefaultContainer* USafeZoneComponent::UpdateSquadPlayer() {
    return NULL;
}

UPOIDefaultContainer* USafeZoneComponent::UpdateSpawnPoint() {
    return NULL;
}

void USafeZoneComponent::UpdateSafeZone_Full() {
}

void USafeZoneComponent::UpdateSafeZone() {
}

UPOIDefaultContainer* USafeZoneComponent::UpdateEnemies() {
    return NULL;
}

bool USafeZoneComponent::ResolveShelterStatus(ATMEventSystem* EventSystem) {
    return false;
}

void USafeZoneComponent::RequestNextTickUpdate() {
}

void USafeZoneComponent::RemoveRoomShelters(ARoomShelter* _RoomShelter) {
}

void USafeZoneComponent::OnSubLevelIsLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void USafeZoneComponent::OnSpawnPointUpdated(ATMEventSystem* _EventSystem) {
}

void USafeZoneComponent::OnPlayerSquadUpdated(ASquad* _Squad) {
}

void USafeZoneComponent::OnPerceptionAddedOrRemoved(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig) {
}

void USafeZoneComponent::OnMissionLoaded(AASFGameModeBase_TacticalMode* GameMode) {
}

void USafeZoneComponent::OnMassiveOnSlaughtUpdated(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void USafeZoneComponent::NextTickUpdate() {
}

bool USafeZoneComponent::IsLocationShelterable(const FVector& _Location) {
    return false;
}

bool USafeZoneComponent::IsGIDShelterable(int64 GID) {
    return false;
}

void USafeZoneComponent::InitializeSafeComponent_Implementation() {
}

ARoomShelter* USafeZoneComponent::GetRoomShelterForLocation(const FVector& _Location) {
    return NULL;
}

ARoomShelter* USafeZoneComponent::GetRoomShelterForGID(int64 GID) {
    return NULL;
}

TArray<AActorWithGameplayTag*> USafeZoneComponent::GetRemainingDoorToWeldForGID(int32 roomGID) {
    return TArray<AActorWithGameplayTag*>();
}

TArray<AActorWithGameplayTag*> USafeZoneComponent::GetRemainingDoorToWeldAtLocation(FVector _Location) {
    return TArray<AActorWithGameplayTag*>();
}

bool USafeZoneComponent::GetRemainingDoorForShleterAtLocation(FVector _Location, const FGameplayTagContainer& _InInvalidTags, const FGameplayTagQuery& _InLockedTags, int32& _OutDoorClosedNbr, int32& _OutTotalDoorNbr, int32& _OutDoorIgnored, TArray<AActorWithGameplayTag*>& _OutDoorToWeld) {
    return false;
}

void USafeZoneComponent::EnableSafeZone_Implementation() {
}

void USafeZoneComponent::DisableSafeZone_Implementation() {
}

void USafeZoneComponent::BindToPlayerSquadUpdate(bool _Bind) {
}

void USafeZoneComponent::BindToMassiveOnSlaughtUpdate(bool _Bind) {
}

void USafeZoneComponent::BindToGamePerceptionUpdate(bool _Bind) {
}

bool USafeZoneComponent::AreRoomsShelterable() {
    return false;
}

void USafeZoneComponent::AddRoomShelters(ARoomShelter* _RoomShelter) {
}


