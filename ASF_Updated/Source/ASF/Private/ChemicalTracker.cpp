#include "ChemicalTracker.h"
#include "MarineStatComponent.h"

AChemicalTracker::AChemicalTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatComponent = CreateDefaultSubobject<UMarineStatComponent>(TEXT("ChemicalTrackerStatComponent"));
    this->DataAsset = NULL;
    this->ChemicalTrackerDataAsset = NULL;
}



