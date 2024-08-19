#include "AIController_Alien.h"
#include "AIStateManager.h"

AAIController_Alien::AAIController_Alien(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIStateManager = CreateDefaultSubobject<UAIStateManager>(TEXT("AIStateManagerComp"));
    this->AIReachStateManager = CreateDefaultSubobject<UAIStateManager>(TEXT("AIReachStateManagerComp"));
    this->AIPatrolStateManager = CreateDefaultSubobject<UAIStateManager>(TEXT("AIPatrolStateManagerComp"));
    this->SoftLogger = NULL;
    this->Alien = NULL;
    this->AttackAcceptanceRadius = 0.00f;
    this->ReachAcceptanceRadius = 0.00f;
}

bool AAIController_Alien::SetStateFromPhase(bool& AlienReconisePhase, EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode) {
    return false;
}

bool AAIController_Alien::SetStateFromAssociatedDefaultState(EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode) {
    return false;
}

void AAIController_Alien::SetReachAcceptanceRadius(float _AcceptanceRadius) {
}

void AAIController_Alien::SetAttackAcceptanceRadius(float _AcceptanceRadius) {
}

void AAIController_Alien::SetAlienTarget(UObject* NewTarget) {
}

bool AAIController_Alien::RestorePreviousState(FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode) {
    return false;
}

void AAIController_Alien::OnTargetChange(UPOITargetingComponent* _EnnemyTargetingComponent, AActor* _OldTarget, AActor* _NewTarget) {
}

void AAIController_Alien::OnStateShiftingEneded(UAIStateManager* _AIStateManager, UAIState* _CurrentState, UAIState* _OldState) {
}

void AAIController_Alien::InitAlien(AAlien* _Alien) {
}

UAIState* AAIController_Alien::GetStateClass(EnumAiState _State) const {
    return NULL;
}

EnumAiState AAIController_Alien::GetPreviousState() const {
    return EnumAiState::NONE;
}

EnumAiState AAIController_Alien::GetDefaultState(EnumAiState State) const {
    return EnumAiState::NONE;
}

UObject* AAIController_Alien::GetAlienTarget() {
    return NULL;
}

EnumAiState AAIController_Alien::GetAlienState() {
    return EnumAiState::NONE;
}

bool AAIController_Alien::FindAndSetDefaultState(EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode, bool CanKeepCurrentState) {
    return false;
}

void AAIController_Alien::ChangeStateInternal(EnumAiState _OldState, EnumAiState _NewState) {
}

bool AAIController_Alien::ChangeAlienState(EnumAiState NewState, EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode) {
    return false;
}

bool AAIController_Alien::ChangeAlienMobilityState(EnumAiMobilityState NewState) {
    return false;
}

void AAIController_Alien::CancelCurrentGameplayTask() {
}


