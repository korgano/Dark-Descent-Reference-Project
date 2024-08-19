#include "CutsceneCharacter.h"

ACutsceneCharacter::ACutsceneCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewMeshCollection = NULL;
    this->CurrentPreviewMeshCollection = NULL;
    this->CurrentIsBodypartedMesh = false;
    this->CurrentAnimClass = NULL;
    this->PostProcessAnimInstance = NULL;
}

bool ACutsceneCharacter::NeedARebuild() const {
    return false;
}

void ACutsceneCharacter::InitPostProcessAnimInstance(USkeletalMeshComponent* Mesh) {
}

USceneComponent* ACutsceneCharacter::GetRootSceneComponent_Implementation() const {
    return NULL;
}

bool ACutsceneCharacter::GetIsBodyparted_Implementation() const {
    return false;
}

USkeletalMeshComponent* ACutsceneCharacter::GetCharacterMesh_Implementation() const {
    return NULL;
}

USkeletalMesh* ACutsceneCharacter::GetCharacterMainMesh_Implementation() const {
    return NULL;
}

UClass* ACutsceneCharacter::GetAnimClass_Implementation() const {
    return NULL;
}

void ACutsceneCharacter::FinishConstruction_Implementation() {
}

void ACutsceneCharacter::BuildMesh() {
}


