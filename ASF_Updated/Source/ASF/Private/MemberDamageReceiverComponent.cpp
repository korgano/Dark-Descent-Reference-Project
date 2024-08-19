#include "MemberDamageReceiverComponent.h"
#include "KillModule_Humanoid.h"

UMemberDamageReceiverComponent::UMemberDamageReceiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KillModuleClass = UKillModule_Humanoid::StaticClass();
    this->PercentOfInstantKill = 25.00f;
    this->PercentOfNonDismembering = 60.00f;
}


