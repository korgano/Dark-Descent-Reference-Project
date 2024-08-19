#include "AIState_Harass.h"
#include "Templates/SubclassOf.h"

UAIState_Harass::UAIState_Harass() {
    this->DisabledTime = 0.00f;
    this->DisabledAttackNumber = 0.00f;
}

void UAIState_Harass::OnAttackEnded_Implementation(UAttackComponent* AttackComponent, UAttack* UsedAttack) {
}

TArray<FVector> UAIState_Harass::GetVisibleBoundPositions(TSubclassOf<URoomClusterFilter> _PositionValidationClusterFilter, const TArray<int64>& _RefusedGraphID) {
    return TArray<FVector>();
}

TArray<FVector> UAIState_Harass::GetSortedVisibleBoundPositions(TSubclassOf<URoomClusterFilter> _PositionValidationClusterFilter, const TArray<int64>& _RefusedGraphID) {
    return TArray<FVector>();
}

void UAIState_Harass::DisableHarassByTag(FGameplayTag DisablingTag) {
}


