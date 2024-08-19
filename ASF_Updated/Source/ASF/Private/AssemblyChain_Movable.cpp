#include "AssemblyChain_Movable.h"

AAssemblyChain_Movable::AAssemblyChain_Movable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssemblyChain_SplineSpawner_Ref = NULL;
    this->SplineRef = NULL;
    this->MovementDuration = 0.00f;
    this->MovementSpeed = 0.00f;
    this->SplineLength = 340282346638528859811704183484516925440.00f;
    this->SplineAlpha = 0.00f;
}

void AAssemblyChain_Movable::UpdatePositionThroughtSpline(float _DeltaTime) {
}

float AAssemblyChain_Movable::GetSplineAlpha() const {
    return 0.0f;
}


