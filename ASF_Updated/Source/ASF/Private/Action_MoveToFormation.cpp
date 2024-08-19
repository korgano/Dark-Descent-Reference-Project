#include "Action_MoveToFormation.h"
#include "Templates/SubclassOf.h"

UAction_MoveToFormation::UAction_MoveToFormation() {
    this->FormationType = EFormationTypeEnum::TIGHT;
}

UAction_MoveToFormation* UAction_MoveToFormation::Create_Action_MoveToFormation(AActor* _Context, TSubclassOf<UAction_MoveToFormation> _ActionClass, FDataMove _DataMove, EFormationTypeEnum _FormationType, FVector _OverwatchLocation) {
    return NULL;
}


