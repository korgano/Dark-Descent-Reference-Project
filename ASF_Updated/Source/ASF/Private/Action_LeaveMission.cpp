#include "Action_LeaveMission.h"
#include "Templates/SubclassOf.h"

UAction_LeaveMission::UAction_LeaveMission() {
    this->ExtractionTransport = NULL;
    this->InteractingEffect = NULL;
}

AExtractionTransport* UAction_LeaveMission::GetExtractionTranport() {
    return NULL;
}

UAction_LeaveMission* UAction_LeaveMission::Create_Action_LeaveMission(AActor* _Context, TSubclassOf<UAction_LeaveMission> _ActionClass, FDataMove _DataMove, AExtractionTransport* _ExtractionTransport) {
    return NULL;
}


