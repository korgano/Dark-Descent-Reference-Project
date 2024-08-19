#include "MapTexture_Generator.h"

AMapTexture_Generator::AMapTexture_Generator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CaptureHeight = 10000.00f;
    this->GroundHeight = 0.00f;
}

void AMapTexture_Generator::Set_AllActors_VisibleInSceneCapture() {
}

void AMapTexture_Generator::Set_AllActors_Visible() {
}

void AMapTexture_Generator::Set_Actors_HiddenToSceneCapture_WithinRangeOfGroundZ(const float Height, const float MinDist, const float MaxDist) {
}

void AMapTexture_Generator::Set_ActorMeshsHiddenToSceneCapture(AActor* Actor, bool Hidden) {
}

void AMapTexture_Generator::GuessLVLExtent_Implementation() {
}


