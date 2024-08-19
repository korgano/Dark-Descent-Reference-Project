#include "Cmp_MapTexture_ScenePreparation.h"

UCmp_MapTexture_ScenePreparation::UCmp_MapTexture_ScenePreparation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroundHeight = 0.00f;
}

void UCmp_MapTexture_ScenePreparation::Set_Actors_HiddenToSceneCapture_WithinRangeOfGroundZ(const float Height, const float MinDist, const float MaxDist) {
}

void UCmp_MapTexture_ScenePreparation::Set_ActorMeshsHiddenToSceneCapture(AActor* Actor, bool Hidden) {
}

void UCmp_MapTexture_ScenePreparation::PrepareScene_Implementation() {
}


