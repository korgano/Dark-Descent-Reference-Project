#include "EnemyPoolComponent.h"

UEnemyPoolComponent::UEnemyPoolComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UEnemyPoolComponent::RemoveEnemy(AASFCharacter* EnemyToRemove) {
}

void UEnemyPoolComponent::OnDeathStateChangedOnEnemy(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

bool UEnemyPoolComponent::HasLivingEnemies() const {
    return false;
}

bool UEnemyPoolComponent::HasDeadEnemies() const {
    return false;
}

bool UEnemyPoolComponent::HasAnyEnemies() const {
    return false;
}

int32 UEnemyPoolComponent::GetLivingEnemiesCount() const {
    return 0;
}

TArray<AASFCharacter*> UEnemyPoolComponent::GetLivingEnemies() const {
    return TArray<AASFCharacter*>();
}

int32 UEnemyPoolComponent::GetEnemiesCount() const {
    return 0;
}

int32 UEnemyPoolComponent::GetDeadEnemiesCount() const {
    return 0;
}

TArray<AASFCharacter*> UEnemyPoolComponent::GetDeadEnemies() const {
    return TArray<AASFCharacter*>();
}

TArray<AASFCharacter*> UEnemyPoolComponent::GetAllEnemies() const {
    return TArray<AASFCharacter*>();
}

void UEnemyPoolComponent::AddEnemy(AASFCharacter* NewEnemy) {
}


