#include "HumanSystemic.h"

UHumanSystemic::UHumanSystemic() {
    this->SquadClassDataAsset = NULL;
    this->DefaultSquadBehavior = EnumAiEnemyMarineState::PATROL;
}

void UHumanSystemic::GetHumanPDAGroupForBudget(int32 _Budget, TArray<UMarineClassDataAssets*>& OutHumanPDAGroup) {
}


