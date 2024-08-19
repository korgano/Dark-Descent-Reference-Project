#include "Terminal.h"
#include "Tinda_EffectHandlerComponent.h"

ATerminal::ATerminal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->PDA_Terminal = NULL;
}

void ATerminal::UpdateInteractionTagState() {
}





void ATerminal::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void ATerminal::OnNewEffectActivated(UTinda_EffectHandlerComponent* _EffectHandler, UTinda_Effect* _Effect) {
}

void ATerminal::OnActiveInteractionChanged(UInteractiveComponent* _InteractiveComponent) {
}

TSoftClassPtr<UMapFeedbackDataProperties> ATerminal::GetOpenDataProperties_Implementation() const {
    return NULL;
}

float ATerminal::GetLinkedObjectMaxDistance() {
    return 0.0f;
}


