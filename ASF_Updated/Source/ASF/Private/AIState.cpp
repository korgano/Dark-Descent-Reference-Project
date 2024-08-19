#include "AIState.h"
#include "Templates/SubclassOf.h"

UAIState::UAIState() {
    this->EnumValue = 0;
    this->Owner = NULL;
    this->ASFController = NULL;
    this->StateEffect = NULL;
    this->bCanRollback = false;
    this->bCanBeRollbacked = false;
    this->bOverridePerceptionOnShifting = true;
}

void UAIState::UpdateAIService_Implementation(FGameplayTag _ConditionTag, UObject* _Target) {
}

void UAIState::StartState_Implementation() {
}

void UAIState::StartAIService_Implementation(FGameplayTag _ConditionTag, UObject* _Target) {
}

void UAIState::ShiftingOver_Implementation(UObject* _Owner) {
}

void UAIState::Shifting_Implementation(UObject* _Owner) {
}

void UAIState::SetAICondition_Implementation(FGameplayTag _ConditionTag, bool _IsValid) {
}

bool UAIState::PerformAITask_Implementation(FGameplayTag _ConditionTag, UObject* _Target, bool& _Delayed) {
    return false;
}

bool UAIState::PerformAICondition_Implementation(FGameplayTag _ConditionTag, UObject* _Target) {
    return false;
}

void UAIState::InitAIState_Implementation(uint8 _EnumValue, AASFCharacter* _Owner) {
}

TSubclassOf<UTinda_Effect> UAIState::GetStateEffect() const {
    return NULL;
}

bool UAIState::GetOverridePerceptionOnShifting() const {
    return false;
}

uint8 UAIState::GetEnumValue() const {
    return 0;
}

void UAIState::EndState_Implementation() {
}

void UAIState::EndAIService_Implementation(FGameplayTag _ConditionTag, UObject* _Target) {
}

bool UAIState::CanRollback() const {
    return false;
}

EnumStateShifting UAIState::CanChangeState_Implementation(FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode, bool _bIsCurrentState) {
    return EnumStateShifting::AUTHORIZED;
}

bool UAIState::CanBeRollbacked() const {
    return false;
}

void UAIState::AbortAITask_Implementation(FGameplayTag _ConditionTag, UObject* _Target) {
}


