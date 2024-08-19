#include "SentryDamageReceiverComponent.h"
#include "KillModule.h"

USentryDamageReceiverComponent::USentryDamageReceiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KillModuleClass = UKillModule::StaticClass();
}


