#include "AIController_GunShip.h"
#include "AIStateManager.h"

AAIController_GunShip::AAIController_GunShip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIStateManager = CreateDefaultSubobject<UAIStateManager>(TEXT("AIStateManagerComp"));
    this->AIActionComponent = NULL;
    this->Gunship = NULL;
    this->CurrentRoamArea = NULL;
    this->CurrentRoamingSpline = NULL;
}

void AAIController_GunShip::UnpauseRoamTransitionTimer() {
}

void AAIController_GunShip::StopRoamTransitionTimer() {
}

void AAIController_GunShip::StartRoamTransitionTimer() {
}

void AAIController_GunShip::SetRoamAreas(const TArray<AGunshipRoamArea*>& InRoamAreas) {
}

void AAIController_GunShip::SetGunShipTarget(UObject* NewTarget) {
}

void AAIController_GunShip::SetCurrentRoamingSpline(AGunshipRoamingSpline* NewRoamingSpline) {
}

void AAIController_GunShip::SetCurrentRoamArea(AGunshipRoamArea* NewRoamArea) {
}

void AAIController_GunShip::PauseRoamTransitionTimer() {
}

void AAIController_GunShip::OnTargetChange(UPOITargetingComponent* _EnnemyTargetingComponent, AActor* _OldTarget, AActor* _NewTarget) {
}

void AAIController_GunShip::OnStateShiftingEneded(UAIStateManager* _AIStateManager, UAIState* _CurrentState, UAIState* _OldState) {
}

void AAIController_GunShip::OnRoamTransitionTimerExpired() {
}

void AAIController_GunShip::OnRoamAreaTriggered(AGunshipRoamArea* TriggeredArea) {
}

void AAIController_GunShip::InitController_Implementation(AGunship* NewGunship) {
}

UObject* AAIController_GunShip::GetTarget() {
    return NULL;
}

UAIState* AAIController_GunShip::GetStateClass(EnumAiGunshipState _State) const {
    return NULL;
}

EnumAiGunshipState AAIController_GunShip::GetGunShipState() {
    return EnumAiGunshipState::NONE;
}

AGunshipRoamingSpline* AAIController_GunShip::GetCurrentRoamingSpline() const {
    return NULL;
}

AGunshipRoamArea* AAIController_GunShip::GetCurrentRoamArea() const {
    return NULL;
}

void AAIController_GunShip::ChangeStateInternal(EnumAiGunshipState _OldState, EnumAiGunshipState _NewState) {
}

bool AAIController_GunShip::ChangeGunShipState(EnumAiGunshipState NewState, EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode) {
    return false;
}


