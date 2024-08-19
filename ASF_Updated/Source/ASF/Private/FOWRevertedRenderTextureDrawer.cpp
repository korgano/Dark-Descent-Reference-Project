#include "FOWRevertedRenderTextureDrawer.h"
#include "Templates/SubclassOf.h"

UFOWRevertedRenderTextureDrawer::UFOWRevertedRenderTextureDrawer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FOWManager = NULL;
    this->Actor = NULL;
    this->CollisionChannel = ECC_WorldStatic;
    this->TraceTypeQuery = TraceTypeQuery1;
    this->FOVRadius = 0.00f;
    this->isEnable = true;
    this->isActivate = false;
    this->isStatic = false;
    this->bLockDrawLocation = false;
    this->AllowRaySnapping = false;
    this->bNeedRedrawing = false;
    this->AllowDynamicResizing = false;
    this->RemoveFogOnly = false;
    this->DrawFog = false;
    this->DumpBinaryTexture = false;
    this->FOVRayCastNumber = 300;
    this->FOVAdditionnalRayCast = 0;
    this->OcclusionNbr = 0;
}

void UFOWRevertedRenderTextureDrawer::RemoveDrawerFromManager() {
}

void UFOWRevertedRenderTextureDrawer::RegenerateMask() {
}

FVector UFOWRevertedRenderTextureDrawer::RaycastOnDrawer(FVector Begin, FVector End, bool VisibleIsLimite) {
    return FVector{};
}

void UFOWRevertedRenderTextureDrawer::OnViewDistanceUpdated(UTinda_Attribute* _Attribute, float _OldValue, float _NewValue) {
}

void UFOWRevertedRenderTextureDrawer::MaskRegenerated() {
}

void UFOWRevertedRenderTextureDrawer::LockDrawLocation(bool _IsLocked) {
}

TArray<AActor*> UFOWRevertedRenderTextureDrawer::GetObjectOfClass(TSubclassOf<AActor> ObjectType) {
    return TArray<AActor*>();
}

FVector UFOWRevertedRenderTextureDrawer::GetDrawLocation() const {
    return FVector{};
}

int32 UFOWRevertedRenderTextureDrawer::GetDrawerStateAt(FVector ActorPosition) {
    return 0;
}

FVector UFOWRevertedRenderTextureDrawer::GetDrawerCenter() const {
    return FVector{};
}

void UFOWRevertedRenderTextureDrawer::EnableDrawer() {
}

void UFOWRevertedRenderTextureDrawer::DumpTextureDrawer(const FString& SaveDirectory, const FString& Filename) {
}

void UFOWRevertedRenderTextureDrawer::AddDrawerToManager() {
}


