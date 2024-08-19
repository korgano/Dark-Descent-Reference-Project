#include "AnimInstanceHumanoidMelee.h"

UAnimInstanceHumanoidMelee::UAnimInstanceHumanoidMelee() {
    this->CharaAttacked = NULL;
    this->DataAssetAttack = NULL;
    this->AnimAttack = NULL;
    this->fDashTimeInAttack = 0.00f;
    this->bIsFirstAttack = false;
}

void UAnimInstanceHumanoidMelee::SetDataAssetAttack_Implementation(FGameplayTag AttackTag) {
}

void UAnimInstanceHumanoidMelee::LaunchAttack(AActor* ThingAttacked, FGameplayTag AttackTag) {
}


