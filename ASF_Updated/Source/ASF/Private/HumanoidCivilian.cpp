#include "HumanoidCivilian.h"

AHumanoidCivilian::AHumanoidCivilian(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssociatedSpawner = NULL;
}

void AHumanoidCivilian::ToDataCarrierCivilian(FDataCarrierCivilian& _DataCarrierCivilian) {
}

void AHumanoidCivilian::OnLiftDepartedOrArrived(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void AHumanoidCivilian::LoadDataCarrierCivilian(const FDataCarrierCivilian& _DataCarrierCivilian) {
}


