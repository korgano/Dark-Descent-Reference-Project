#include "BMStart_DataAsset.h"

UBMStart_DataAsset::UBMStart_DataAsset() {
    this->bRandomizeVisualCustomization = true;
    this->Materials = 0;
    this->XenoTechActivationCost = 2;
    this->MinBravery = 0;
    this->MaxBravery = 20;
    this->BraveryModulo = 5;
    this->AvaliableTraits = NULL;
    this->OtagoLastStandDeploymentCount = 3;
}

UTrait_DataAsset* UBMStart_DataAsset::ComputeInitialTrait(const FDataCarrierMarine& _Marine, const TArray<UTrait_DataAsset*> _UnusedTraits) {
    return NULL;
}

int32 UBMStart_DataAsset::ComputeInitialBravery(const FDataCarrierMarine& _Marine) {
    return 0;
}


