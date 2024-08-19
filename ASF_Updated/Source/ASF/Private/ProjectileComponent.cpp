#include "ProjectileComponent.h"
#include "GenericPool.h"

UProjectileComponent::UProjectileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BulletPool = CreateDefaultSubobject<UGenericPool>(TEXT("Pool"));
}


