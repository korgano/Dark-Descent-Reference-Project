#include "TacticalDrone.h"
#include "DroneActionManager.h"
#include "MarineStatComponent.h"
//#include "Components/SpotLightComponent.h"

ATacticalDrone::ATacticalDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatComponent = CreateDefaultSubobject<UMarineStatComponent>(TEXT("DroneStatComponent"));
    this->HumanoidActionManagerClass = UDroneActionManager::StaticClass();
    this->bFollowFormation = false;
    this->CombatComponent = NULL;
    this->TacticalDroneState = ETacticalDroneState::Follow;
//    this->OverheadSpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("OverheadSpotLight"));
//    this->OverheadSpotLight->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

bool ATacticalDrone::SetTacticalDroneState_Implementation(ETacticalDroneState newTacticalDroneState) {
    return false;
}

void ATacticalDrone::OnStateDeadChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void ATacticalDrone::OnLiftDepartedOrArrived(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

TSoftClassPtr<UMapFeedbackDataProperties> ATacticalDrone::GetOpenDataProperties_Implementation() const {
    return NULL;
}

/*USpotLightComponent* ATacticalDrone::GetOverheadSpotLight() const {
    return NULL;
}*/