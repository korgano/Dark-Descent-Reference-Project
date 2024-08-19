#include "DamageReceiver_Drone.h"
#include "KillModule.h"

UDamageReceiver_Drone::UDamageReceiver_Drone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KillModuleClass = UKillModule::StaticClass();
}


