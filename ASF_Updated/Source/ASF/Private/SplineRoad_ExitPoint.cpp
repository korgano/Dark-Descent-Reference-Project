#include "SplineRoad_ExitPoint.h"
#include "Tinda_EffectHandlerComponent.h"

ASplineRoad_ExitPoint::ASplineRoad_ExitPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
}

void ASplineRoad_ExitPoint::AskAPCMovement_Implementation(const FString& _APCName, EMovementOrderFrom MovementOrderFrom) {
}


