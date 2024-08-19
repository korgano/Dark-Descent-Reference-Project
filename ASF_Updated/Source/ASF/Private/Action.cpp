#include "Action.h"
#include "Templates/SubclassOf.h"

UAction::UAction() {
    this->CurrentActionStatus = EnumActionStatus::CREATED;
    this->bNotAffectedByDirectiveStop = false;
    this->bUseActorHitAsDesinationLocation = false;
    this->ActionStepIndex = 0;
    this->CurrentActionStep = NULL;
    this->Character = NULL;
    this->bHasToKeepMovementIfEnded = false;
    this->DisableDirectiveStopEffect = NULL;
    this->ActionType = EnumActionType::UNDEFINED;
    this->bShouldBeDisplayed = true;
    this->bRequestedByPlayer = true;
}

void UAction::StartAction_Implementation() {
}

bool UAction::ShouldBeDisplayed_Implementation() {
    return false;
}

void UAction::SetHasToKeepMovementIfEnded(bool _bHasToKeepMovementIfEnded) {
}

void UAction::SetDataMove(FDataMove _DataMove) {
}

void UAction::SetCurrentActionStep(UActionStep* _NewActionStep) {
}

void UAction::SetCharacter(AASFCharacter* _Character) {
}

void UAction::SetActionStepIndex(int32 _ActionStepIndex) {
}

void UAction::ResumeAction_Implementation() {
}

void UAction::PauseAction_Implementation() {
}

void UAction::OnActionStepPaused(UActionStep* ActionStep, EnumActionStatus Status) {
}

void UAction::OnActionStepEnded(UActionStep* ActionStep, EnumActionStatus Status) {
}

EnumActionStatus UAction::NextActionStep() {
    return EnumActionStatus::CREATED;
}

void UAction::LastActionStepEnded_Implementation(EnumActionStatus Status) {
}

bool UAction::IsFinished_Implementation() {
    return false;
}

void UAction::InitAction() {
}

bool UAction::HasToKeepMovementIfEnded() {
    return false;
}

int32 UAction::GetNbActionAlive() {
    return 0;
}

FDataMove UAction::GetDataMove() {
    return FDataMove{};
}

UActionStep* UAction::GetCurrentActionStep() {
    return NULL;
}

AASFCharacter* UAction::GetCharacter() {
    return NULL;
}

AASFCharacter* UAction::GetBestToExecuteAction_Implementation(const TArray<AASFCharacter*>& _Character) {
    return NULL;
}

EnumActionType UAction::GetActionType() const {
    return EnumActionType::UNDEFINED;
}

TArray<TSoftClassPtr<UActionStep>> UAction::GetActionSteps() {
    return TArray<TSoftClassPtr<UActionStep>>();
}

int32 UAction::GetActionStepIndex() {
    return 0;
}

FVector UAction::GetActionDestination_Implementation() {
    return FVector{};
}

EnumActionCancelability UAction::GetActionCancelability() {
    return EnumActionCancelability::SOFT_CANCALABLE;
}

void UAction::EndAction_Implementation(EnumActionStatus ActionStatus) {
}

UAction* UAction::Create_Action_Of_Type_BP(AActor* _Context, TSubclassOf<UAction> _ActionType, FDataMove _DataMove, bool _bRequestedByPlayer) {
    return NULL;
}


