#include "Action_ExtractCarriedCharacter.h"
#include "Templates/SubclassOf.h"

UAction_ExtractCarriedCharacter::UAction_ExtractCarriedCharacter() {
    this->ExtractionTransport = NULL;
    this->InteractingEffect = NULL;
}

UAction_ExtractCarriedCharacter* UAction_ExtractCarriedCharacter::Create_Action_ExtractCarriedCharacter(AActor* _Context, TSubclassOf<UAction_ExtractCarriedCharacter> _ActionClass, FDataMove _DataMove, AExtractionTransport* _ExtractionTransport) {
    return NULL;
}


