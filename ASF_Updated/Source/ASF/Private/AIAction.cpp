#include "AIAction.h"
#include "Templates/SubclassOf.h"

UAIAction::UAIAction() {
    this->World = NULL;
    this->bActionOngoing = false;
    this->AIActionComponent = NULL;
    this->Target = NULL;
    this->ActionPOIConfig = NULL;
    this->BindedPOI = NULL;
    this->ActionType = EnumAIActionType::STRAIGHT;
    this->ActionStatus = EnumAIActionStatus::FAIL;
    this->DeferredTree = NULL;
    this->bUseCustomNavFilter = false;
    this->bStopMovement = false;
    this->bForceShifting = false;
    this->bCanForceAbort = true;
    this->bRestoreDestination = true;
    this->ActionPOIConfig_DataAsset = NULL;
    this->ActionEffect = NULL;
    this->ActionReadyStatus = EnumActionReadyStatus::UPDATE;
    this->bIndependantAction = false;
    this->CurrentState = NULL;
    this->NextState = NULL;
}

bool UAIAction::UseCustomNavFilter() const {
    return false;
}

void UAIAction::UpdateActionReadyStatus(EnumActionReadyStatus _UpdateMode) {
}

void UAIAction::StartIndependentAction(AActor* _Target) {
}

void UAIAction::StartAction_Implementation(UObject* _Target) {
}

void UAIAction::SetAICondition_Implementation(FGameplayTag _ConditionTag, bool _IsValid) {
}

void UAIAction::SetAIActionComponent(UAIActionComponent* _AIActionComponent) {
}

void UAIAction::SetActionStatus(EnumAIActionStatus _EnumAIActionStatus) {
}

void UAIAction::SetActionOwnerAndController(AActor* _Owner, AAIController* _Controller) {
}

void UAIAction::PreInitAction_Implementation() {
}

bool UAIAction::PerformAITask_Implementation(FGameplayTag _ConditionTag, UObject* _Target, bool& _Delayed) {
    return false;
}

bool UAIAction::PerformAICondition_Implementation(FGameplayTag _ConditionTag, UObject* _Target) {
    return false;
}

bool UAIAction::OverrideSight() const {
    return false;
}

bool UAIAction::IsActionOngoing() const {
    return false;
}

bool UAIAction::GetRestoreDestination() const {
    return false;
}

FGameplayTagContainer UAIAction::GetPerceptionEnabled() const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UAIAction::GetPerceptionDisabled() const {
    return FGameplayTagContainer{};
}

APawn* UAIAction::GetOwner() const {
    return NULL;
}

TSubclassOf<UNavigationQueryFilter> UAIAction::GetNavFilter_Implementation() {
    return NULL;
}

UAIPointOfInterestVolatile* UAIAction::GetBindedPOI() {
    return NULL;
}

AAIController* UAIAction::GetAIController() const {
    return NULL;
}

UAIActionComponent* UAIAction::GetAIActionComponent() const {
    return NULL;
}

EnumAIActionType UAIAction::GetActionType() const {
    return EnumAIActionType::STRAIGHT;
}

FGameplayTag UAIAction::GetActionTagName() const {
    return FGameplayTag{};
}

EnumAIActionStatus UAIAction::GetActionStatus() {
    return EnumAIActionStatus::SUCCESS;
}

TArray<FCharacterSightProperties> UAIAction::GetActionSight() const {
    return TArray<FCharacterSightProperties>();
}

EnumStateShifting UAIAction::GetActionShiftingAuthorization_Int_Implementation(UAIState* _CurrentState, UAIState* _NextState) {
    return EnumStateShifting::AUTHORIZED;
}

EnumStateShifting UAIAction::GetActionShiftingAuthorization(UAIState* _CurrentState, UAIState* _NextState) {
    return EnumStateShifting::AUTHORIZED;
}

UAIPointOfInterestConfig* UAIAction::GetActionPOIConfig() const {
    return NULL;
}

TSoftClassPtr<UTinda_Effect> UAIAction::GetActionEffectClass() const {
    return NULL;
}

UBehaviorTree* UAIAction::GetActionDeferredTree() const {
    return NULL;
}

void UAIAction::EndAction_Implementation(EnumAIActionStatus _AIActionStatus) {
}

bool UAIAction::CanExecuteAction_Implementation(UObject* _Target, bool _FromPosition, bool _AllowAcceptanceRadius, bool _UseProbability) {
    return false;
}

void UAIAction::BindPoiToAction(UAIPointOfInterestVolatile* _BindedPOI) {
}

void UAIAction::AbortAITask_Implementation(FGameplayTag _ConditionTag, UObject* _Target) {
}


