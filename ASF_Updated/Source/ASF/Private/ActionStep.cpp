#include "ActionStep.h"

UActionStep::UActionStep() {
    this->Action = NULL;
    this->EffectApplied = NULL;
    this->ActionStepStatus = EnumActionStatus::CREATED;
    this->ActionCancelability = EnumActionCancelability::SOFT_CANCALABLE;
}

void UActionStep::StartActionStep_Implementation() {
}

void UActionStep::SetActionStepStatus(EnumActionStatus _ActionStepStatus) {
}

void UActionStep::SetActionCancelability(EnumActionCancelability _ActionCancelability) {
}

void UActionStep::SetAction(UAction* _Action) {
}

void UActionStep::ResumeActionStep_Implementation() {
}

void UActionStep::RemoveActionEffect(AActor* Humanoid) {
}

void UActionStep::PauseActionStep_Implementation() {
}

EnumActionStatus UActionStep::GetActionStepStatus() {
    return EnumActionStatus::CREATED;
}

EnumActionCancelability UActionStep::GetActionCancelability() {
    return EnumActionCancelability::SOFT_CANCALABLE;
}

UAction* UActionStep::GetAction() {
    return NULL;
}

void UActionStep::EndActionStep_Implementation(EnumActionStatus _ActionStepStatus) {
}

void UActionStep::AddActionEffect(UObject* _Source, AActor* Humanoid) {
}


