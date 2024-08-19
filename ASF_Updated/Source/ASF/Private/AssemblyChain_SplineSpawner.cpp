#include "AssemblyChain_SplineSpawner.h"

AAssemblyChain_SplineSpawner::AAssemblyChain_SplineSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TreeOriginIndex = -1;
}

void AAssemblyChain_SplineSpawner::RemoveMovableObject(AAssemblyChain_Movable* _AssemblyChain_Movable, bool _DuringUpdate) {
}

void AAssemblyChain_SplineSpawner::GenerateInsertionTree() {
}

void AAssemblyChain_SplineSpawner::FindRobotSplineLocation(USplineComponent* Spline) {
}

AAssemblyChain_Robot* AAssemblyChain_SplineSpawner::FindOverlapingRobotForAlpha(float SplineAlpha) {
    return NULL;
}

void AAssemblyChain_SplineSpawner::FindAssemblyChainRobot(USplineComponent* Spline, const TArray<AAssemblyChain_Robot*>& AvaillableRobot) {
}


