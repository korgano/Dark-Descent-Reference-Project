#include "ASM_MovableSplineTarget.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTask.h"

//AASM_MovableSplineTarget::AASM_MovableSplineTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
AASM_MovableSplineTarget::AASM_MovableSplineTarget() : Super() {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->DebugMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DebugMeshComponent"));
    this->bEnableVisibility = false;
    this->DebugMesh = NULL;
    this->DebugMeshMaterial = NULL;
    this->DebugMeshComponent->SetupAttachment(RootComponent);
}


