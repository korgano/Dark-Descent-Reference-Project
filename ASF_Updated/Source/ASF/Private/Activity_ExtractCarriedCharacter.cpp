#include "Activity_ExtractCarriedCharacter.h"
#include "EActivityAnimationType.h"
#include "EnumActivityType.h"

UActivity_ExtractCarriedCharacter::UActivity_ExtractCarriedCharacter() {
    this->ActivityType = EnumActivityType::INTERACTION;
    this->bUseAnimationReady = true;
    this->AnimationType = EActivityAnimationType::APC_ENTER;
    this->ExtractionTransport = NULL;
}

void UActivity_ExtractCarriedCharacter::SetExtractionTransport(AExtractionTransport* _ExtractionTransport) {
}


