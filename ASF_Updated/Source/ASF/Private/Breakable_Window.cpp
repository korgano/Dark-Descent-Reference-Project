#include "Breakable_Window.h"
#include "Tinda_EffectHandlerComponent.h"

ABreakable_Window::ABreakable_Window(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
}


