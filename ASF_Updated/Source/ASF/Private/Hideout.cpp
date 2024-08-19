#include "Hideout.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "NavModifierComponent.h"
#include "Tinda_EffectHandlerComponent.h"
#include "CommonSaveLoadComponent.h"
#include "FOWActorVisibilityComponent.h"

AHideout::AHideout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComponent"));
    this->bOccupied = false;
    this->bReserved = false;
    this->bLock = false;
    this->bDiscovered = false;
    this->FOWActorVisibilityComponent = CreateDefaultSubobject<UFOWActorVisibilityComponent>(TEXT("FOWActorVisibilityComponent"));
    this->CommonSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->SaveMarinesLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("SaveMarinesLocation"));
    this->GetInsideLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("GetInsideLocation"));
    this->NavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifierComponent"));
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->HiddenCharacter = NULL;
    this->SaveMarinesLocation->SetupAttachment(RootComponent);
    this->GetInsideLocation->SetupAttachment(RootComponent);
}

void AHideout::SetLock_Implementation(bool _bLock) {
}

void AHideout::Reserve_Implementation() {
}

void AHideout::OpenDoor_Implementation() {
}

void AHideout::OnUpdateVisibility(AActor* _Owner, bool _Visibilityk) {
}

bool AHideout::IsOccupied_Implementation() {
    return false;
}

bool AHideout::IsAvailable() const {
    return false;
}

void AHideout::HideInside_Implementation(AASFCharacter* ActorToHide) {
}

void AHideout::GetOut_Implementation() {
}

void AHideout::CloseDoor_Implementation(bool _bLock) {
}

void AHideout::CancelReserve_Implementation() {
}


