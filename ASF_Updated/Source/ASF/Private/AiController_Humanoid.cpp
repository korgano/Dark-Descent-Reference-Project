#include "AiController_Humanoid.h"
#include "AIStateManager.h"

AAiController_Humanoid::AAiController_Humanoid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HumanoidTactical = NULL;
    this->AIStateManager = CreateDefaultSubobject<UAIStateManager>(TEXT("AIStateManagerComp"));
    this->SoftLogger = NULL;
    this->SquadMarineState = EnumAiEnemyMarineState::GUARD;
    this->WeaponCanFire = false;
    this->bHasTarget = false;
}

bool AAiController_Humanoid::RestorePreviousState(FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode) {
    return false;
}

void AAiController_Humanoid::ResolveState() {
}

void AAiController_Humanoid::OnWeaponDetectionChanged(UPOITargetingComponent* _EnnemyTargetingComponent, AActor* _SpotedEnemy) {
}

void AAiController_Humanoid::OnTargetChanged(UPOITargetingComponent* _EnnemyTargetingComponent, AActor* _OldTarget, AActor* _NewTarget) {
}

void AAiController_Humanoid::OnStateShiftingEnded(UAIStateManager* _AIStateManager, UAIState* _CurrentState, UAIState* _OldState) {
}

void AAiController_Humanoid::OnSquadStateUpdate(AAIController_Squad* AIController_Squad, EnumAiEnemyMarineState SquadState) {
}

void AAiController_Humanoid::OnSquadInit(ASquad* _Squad) {
}

void AAiController_Humanoid::OnScriptedActionStop(UAIActionComponent* _AIActionComponent) {
}

void AAiController_Humanoid::OnScriptedActionStart(UAIActionComponent* _AIActionComponent, bool _ForceActionAbort, bool _ForceAnimationAbort) {
}

void AAiController_Humanoid::OnExecutedActionChanged(UAIActionComponent* _AIActionComponent, UAIAction* _OldAction, UAIAction* _NewAction) {
}

void AAiController_Humanoid::OnActionStop(UAIAction* Action, EnumAIActionStatus _AIActionStatus) {
}

void AAiController_Humanoid::OnActionStart(UAIActionComponent* _AIActionComponent) {
}

void AAiController_Humanoid::InitMarine(AHumanoidTactical* _Marine) {
}

UAIState* AAiController_Humanoid::GetStateClass(EnumAiEnemyMarineState _State) const {
    return NULL;
}

EnumAiEnemyMarineState AAiController_Humanoid::GetSquadMarineState() const {
    return EnumAiEnemyMarineState::GUARD;
}

EnumAiEnemyMarineState AAiController_Humanoid::GetMarineState() {
    return EnumAiEnemyMarineState::GUARD;
}

void AAiController_Humanoid::ChangeStateInternal(EnumAiEnemyMarineState _OldState, EnumAiEnemyMarineState _NewState) {
}

bool AAiController_Humanoid::ChangeMarineState(EnumAiEnemyMarineState NewState, EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode) {
    return false;
}


