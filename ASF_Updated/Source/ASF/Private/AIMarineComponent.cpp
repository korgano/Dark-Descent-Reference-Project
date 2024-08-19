#include "AIMarineComponent.h"

UAIMarineComponent::UAIMarineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Marine = NULL;
    this->MarineController = NULL;
    this->StateEffect = NULL;
    this->bEnemyBleep = false;
    this->bTargetPresent = false;
    this->CurrentAttitude = EnumCharacterAnimAttitude::RELAXED;
}

void UAIMarineComponent::UpdateCurrentAttitude(EnumCharacterAnimAttitude _NewAttitude, float _TimeDelayed) {
}

void UAIMarineComponent::SetAttitudeAfterDelay() {
}

void UAIMarineComponent::ResolveState() {
}

void UAIMarineComponent::OnTrackingSystemUpdated(UTrackingSystemComponent* TrackingSystemComponent) {
}

void UAIMarineComponent::OnTargetChanged(UPOITargetingComponent* POITargetingComponent, AActor* _OldTarget, AActor* _NewTarget) {
}

void UAIMarineComponent::OnSquadInit(ASquad* _Squad) {
}

void UAIMarineComponent::OnNewState(AAiController_Humanoid* AIController, EnumAiEnemyMarineState OldState, EnumAiEnemyMarineState NewState) {
}

void UAIMarineComponent::OnForcedAimingChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UAIMarineComponent::OnActionStart(UHumanoidActionManager* HumanoidActionManager, UAction* _Action) {
}

void UAIMarineComponent::OnActionManagerInit(AHumanoid* _Character, UHumanoidActionManager* _HumanoidActionManager) {
}

void UAIMarineComponent::OnActionEnded(UAction* _Action, EnumActionStatus _ActionStatus) {
}

void UAIMarineComponent::Init() {
}

EnumCharacterAnimAttitude UAIMarineComponent::GetCurrentAttitude() {
    return EnumCharacterAnimAttitude::RELAXED;
}

EnumAiEnemyMarineState UAIMarineComponent::GetAiState() const {
    return EnumAiEnemyMarineState::GUARD;
}

void UAIMarineComponent::ChangeCommandState(EnumAiMarineCommand _NewState) {
}

void UAIMarineComponent::BindOnSquad(AASFPlayerState* _PS, ASquad* _Squad) {
}


