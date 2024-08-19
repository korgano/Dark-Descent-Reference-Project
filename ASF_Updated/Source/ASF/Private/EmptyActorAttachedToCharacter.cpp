#include "EmptyActorAttachedToCharacter.h"
#include "Components/BillboardComponent.h"

AEmptyActorAttachedToCharacter::AEmptyActorAttachedToCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard Comp"));
}

void AEmptyActorAttachedToCharacter::BindEventToCharacter(AASFGameStateBase* _GameState, AASFCharacter* _Character) {
}


