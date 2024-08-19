#include "Activity_LeaveMission.h"
#include "EActivityAnimationType.h"
#include "EnumActivityType.h"

UActivity_LeaveMission::UActivity_LeaveMission() {
    this->ActivityType = EnumActivityType::INTERACTION;
    this->bUseAnimationReady = true;
    this->AnimationType = EActivityAnimationType::APC_ENTER;
    this->ExtractionTransport = NULL;
}

void UActivity_LeaveMission::SetExtractionTransport(AExtractionTransport* _ExtractionTransport) {
}


