#include "CosmeticCorpseActor.h"
#include "Components/PoseableMeshComponent.h"

ACosmeticCorpseActor::ACosmeticCorpseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PoseableMesh = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("mesh comp"));
}

void ACosmeticCorpseActor::SetupDeadPoseOnPoseableMesh(UPoseableMeshComponent* PMesh, USkeletalMeshComponent* OriginalMesh) {
}

void ACosmeticCorpseActor::SetSkeletalMesh(USkeletalMeshComponent* OriginalMesh) {
}

void ACosmeticCorpseActor::BeginSubLevelUnLoad(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}


