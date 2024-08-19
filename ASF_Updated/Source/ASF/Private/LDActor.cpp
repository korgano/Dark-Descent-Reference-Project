#include "LDActor.h"
#include "Components/SceneComponent.h"

ALDActor::ALDActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bOverrideLDType = false;
    this->LDType = EnumLDActorType::WALL;
    this->bIsCover = false;
    this->CoverType = EnumLDActorCoverType::COVER_SMALL;
    this->bIsCrossable = false;
    this->CrossableType = EnumLDActorCrossableType::CROSSABLE_JUMP_SMALL;
    this->Root = (USceneComponent*)RootComponent;
    this->bActorOrComponentsNeedsTick = false;
}

void ALDActor::SwitchMesh() {
}

void ALDActor::ForceTrueMesh() {
}

void ALDActor::ForceblockMesh() {
}


