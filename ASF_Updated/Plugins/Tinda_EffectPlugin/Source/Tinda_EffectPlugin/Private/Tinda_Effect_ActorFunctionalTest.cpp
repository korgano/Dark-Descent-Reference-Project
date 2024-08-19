#include "Tinda_Effect_ActorFunctionalTest.h"
#include "Tinda_EffectHandlerComponent.h"

ATinda_Effect_ActorFunctionalTest::ATinda_Effect_ActorFunctionalTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponentTest"));
}


