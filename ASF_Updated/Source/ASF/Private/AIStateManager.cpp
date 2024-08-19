#include "AIStateManager.h"

UAIStateManager::UAIStateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Owner = NULL;
    this->bIsAnimationReady = true;
    this->bIsActionReady = true;
    this->bIsShifting = false;
    this->bForceNextState = false;
    this->CurrentState = NULL;
    this->NextState = NULL;
    this->AIActionComponent = NULL;
}

UAIState* UAIStateManager::UnstackRollbackState(UAIState* _StackState) {
    return NULL;
}

EnumStateShifting UAIStateManager::UnauthorizedShifting() {
    return EnumStateShifting::AUTHORIZED;
}

EnumStateShifting UAIStateManager::Shifting(UAIState* _NewState) {
    return EnumStateShifting::AUTHORIZED;
}

void UAIStateManager::SetCurrentState(UAIState* _NewState) {
}

EnumStateShifting UAIStateManager::Rollback(UAIState*& _NewState, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode) {
    return EnumStateShifting::AUTHORIZED;
}

void UAIStateManager::OnShiftingEndUObject(UObject* bindedObject) {
}

bool UAIStateManager::IsShifting() const {
    return false;
}

UAIState* UAIStateManager::GetPerceptionStateObject() const {
    return NULL;
}

uint8 UAIStateManager::GetPerceptionState() const {
    return 0;
}

UAIState* UAIStateManager::GetNextState() const {
    return NULL;
}

UAIState* UAIStateManager::GetCurrentState() const {
    return NULL;
}

void UAIStateManager::ForceNextState() {
}

void UAIStateManager::ForceEndShifting(UObject* _BindedObject) {
}

void UAIStateManager::DisableForcedNextState() {
}

void UAIStateManager::CheckAnimationAuthorization() {
}

void UAIStateManager::CheckActionAuthorization() {
}

EnumStateShifting UAIStateManager::ChangeState(UAIState* _NewState, EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode) {
    return EnumStateShifting::AUTHORIZED;
}

EnumStateShifting UAIStateManager::AuthorizedShifting(UAIState* _NewState) {
    return EnumStateShifting::AUTHORIZED;
}


