#include "TriggerObjectiveActor.h"
#include "CommonSaveLoadComponent.h"

ATriggerObjectiveActor::ATriggerObjectiveActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CommonSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->bIsActive = false;
    this->bStartActive = true;
    this->bCanBeTriggeredByDrone = false;
}

void ATriggerObjectiveActor::SetTriggerObjectiveActive_Implementation(bool _bNewActive) {
}

void ATriggerObjectiveActor::SetDelayOnItemSpawned(AASFGameState_TacticalMode* GameState, AItemSpawned* Item) {
}

void ATriggerObjectiveActor::SetDelayOnCharacterSpawned(AASFGameStateBase* GameState, AASFCharacter* Character) {
}

void ATriggerObjectiveActor::RemoveBinding(int32 BindingID) {
}

void ATriggerObjectiveActor::RemoveActorForBinding(int32 BindingID, AActor* Actor) {
}

void ATriggerObjectiveActor::ProcessActorLeave(AActor* _LeavingActor) {
}

void ATriggerObjectiveActor::ProcessActorEnter(AActor* _EnteringActor) {
}

void ATriggerObjectiveActor::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void ATriggerObjectiveActor::OnSubLevelHandlerLoad(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

void ATriggerObjectiveActor::OnGameStateItemSpawned(AASFGameState_TacticalMode* GameState, AItemSpawned* Item) {
}

void ATriggerObjectiveActor::OnGameStateCharacterSpawned(AASFGameStateBase* GameState, AASFCharacter* Character) {
}

void ATriggerObjectiveActor::OnAttachedActorDestroyed(AActor* DestroyedActor) {
}

bool ATriggerObjectiveActor::NeedToBeAttached() const {
    return false;
}

void ATriggerObjectiveActor::CheckToAttach() {
}

int32 ATriggerObjectiveActor::BindForActorWithLeave(AActor* ActorToBind, FEvent_NoMulti_TriggerObjective_Actor _EnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LeaveDelegate, FEvent_NoMulti_TriggerObjective_Actor _FirstEnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LastLeaveDelegate, bool bForceActivation) {
    return 0;
}

int32 ATriggerObjectiveActor::BindForActorsWithLeave(TArray<AActor*> ActorsToBind, FEvent_NoMulti_TriggerObjective_Actor _EnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LeaveDelegate, FEvent_NoMulti_TriggerObjective_Actor _FirstEnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LastLeaveDelegate, bool bForceActivation) {
    return 0;
}

int32 ATriggerObjectiveActor::BindForActorsIDsWithLeave(TArray<FCharacterIDName> ActorsToBind, FEvent_NoMulti_TriggerObjective_Actor _EnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LeaveDelegate, FEvent_NoMulti_TriggerObjective_Actor _FirstEnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LastLeaveDelegate, bool bForceActivation) {
    return 0;
}

int32 ATriggerObjectiveActor::BindForActorsID(TArray<FCharacterIDName> ActorsToBind, FEvent_NoMulti_TriggerObjective_Actor _Delegate, int32 MaxTrigger, bool bForceActivation) {
    return 0;
}

int32 ATriggerObjectiveActor::BindForActors(TArray<AActor*> ActorsToBind, FEvent_NoMulti_TriggerObjective_Actor _Delegate, int32 MaxTrigger, bool bForceActivation) {
    return 0;
}

int32 ATriggerObjectiveActor::BindForActor(AActor* ActorToBind, FEvent_NoMulti_TriggerObjective_Actor _Delegate, int32 MaxTrigger, bool bForceActivation) {
    return 0;
}

void ATriggerObjectiveActor::AttachToActorCharacterID(AActor* Actor) {
}

void ATriggerObjectiveActor::AddActorForBinding(int32 BindingID, AActor* Actor) {
}


