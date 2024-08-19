#include "AlienAmbushDataAsset.h"

UAlienAmbushDataAsset::UAlienAmbushDataAsset() {
    this->ArrivalDelay_AggressivenessOperandBounds.AddDefaulted(11);
    this->ArrivalDelay_HiveSizeOperandBounds.AddDefaulted(5);
    this->AlienHissReactionAcknow = NULL;
}


