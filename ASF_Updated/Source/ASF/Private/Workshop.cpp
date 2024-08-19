#include "Workshop.h"

AWorkshop::AWorkshop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseEngineerCount = 1;
    this->MaxEngineerCount = 5;
    this->Engineers = 1;
    this->AssignedEngineers = 0;
    this->BaseMaterialsProduction = 0;
    this->MaterialsProduction = 0;
}

void AWorkshop::SortMarinesByUpgradesAvailable(TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines) {
}

void AWorkshop::RemoveEngineers(int32 _Count) {
}

void AWorkshop::PurchaseMarineUpgrade(UUpgradeDataAssets* _Asset, AHumanoid* _Marine) {
}

bool AWorkshop::HasAvailableEngineers(int32 _Count) const {
    return false;
}

int32 AWorkshop::GetAvailableEngineers() const {
    return 0;
}

bool AWorkshop::CanPurchaseMarineUpgrade(UUpgradeDataAssets* _Asset, AHumanoid* _Marine) const {
    return false;
}

bool AWorkshop::CanAffordMarineUpgrade(UUpgradeDataAssets* _Asset) const {
    return false;
}

void AWorkshop::AddEngineers(int32 _Count) {
}

void AWorkshop::AddEngineer() {
}


