#include "PropsCollAndNavActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

APropsCollAndNavActor::APropsCollAndNavActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->BoxBound = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxBound"));
    this->NavModifier = NULL;
    this->NegSpaceMatToApply = NULL;
    this->MatToApply = NULL;
    this->TransluMatToApply = NULL;
    this->bIsTranslu = false;
    this->bShowOriginalShape = false;
    this->bIsAesthetic = false;
    this->bHasFOWCollider = false;
    this->bHideShape = false;
    this->bHideAssets = false;
    this->bNegSpaceBlockFOW = false;
    this->bGenerateAutoFOWCollider = false;
    this->bLastGenerateAutoFOWCollider = false;
    this->X_ScaleAutoFOWCollider = 0.60f;
    this->X_LastScaleAutoFOWCollider = 0.60f;
    this->Y_ScaleAutoFOWCollider = 0.60f;
    this->Y_LastScaleAutoFOWCollider = 0.60f;
    this->PropsCollType = EPropsCollType::ONLY_NAV_BLOCKER;
    this->HeightOnlyNavBlocker = 100.00f;
    this->bOverrideHeightHighCover = false;
    this->OverridedHeightHighCover = 200.00f;
    this->bOverrideHeightHighNegSpace = false;
    this->OverridedHeightNegSpace = 295.00f;
    this->OverridedNavArea = NULL;
    this->FOWBoxComponent = NULL;
    this->BoxBound->SetupAttachment(RootComponent);
}

void APropsCollAndNavActor::SwitchMat(bool bTranslu) {
}

void APropsCollAndNavActor::SetHideShape(bool bHide) {
}

void APropsCollAndNavActor::SetHideAsset(bool bHide) {
}

void APropsCollAndNavActor::RemoveMergedActors(const TArray<AActor*>& ActorToMerge) {
}

void APropsCollAndNavActor::InitPropsCollAndNavActor(const TArray<FVector>& _OriginalVertsCollisions, uint8 _PropsCollType) {
}

float APropsCollAndNavActor::GetHeightForCurrentType() const {
    return 0.0f;
}

FColor APropsCollAndNavActor::GetColor() const {
    return FColor{};
}

FName APropsCollAndNavActor::GetCollisionProfileForCurrentType() const {
    return NAME_None;
}

TArray<AActor*> APropsCollAndNavActor::GetActorsOverlappingThisProps() {
    return TArray<AActor*>();
}

void APropsCollAndNavActor::GenerateMesh(const TArray<FVector>& ArrayVerts, bool bIsoriginal) {
}

void APropsCollAndNavActor::ForceRerunCS() {
}

void APropsCollAndNavActor::ConvertToST() {
}

UStaticMesh* APropsCollAndNavActor::ConvertProceduralToStatic(UProceduralMeshComponent* ProceduralMesh) {
    return NULL;
}

void APropsCollAndNavActor::AddMergedActors(const TArray<AActor*>& ActorToMerge, bool bForce) {
}


