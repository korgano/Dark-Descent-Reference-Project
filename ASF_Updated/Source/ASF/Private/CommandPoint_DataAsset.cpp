#include "CommandPoint_DataAsset.h"

UCommandPoint_DataAsset::UCommandPoint_DataAsset() {
    this->InitialCommandPointCapacityMax = 3;
    this->DurationToRefillCommandPoint = 60.00f;
    this->InitialCommandPointCapacityMin = 1;
    this->InitialCommandPointCapacityMax_Bonus_ApcFeature = 1;
}


