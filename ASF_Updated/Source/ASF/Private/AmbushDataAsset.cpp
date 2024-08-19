#include "AmbushDataAsset.h"

UAmbushDataAsset::UAmbushDataAsset() {
    this->ArrivalDelay_AggressivenessOperandBounds.AddDefaulted(11);
    this->ArrivalDelay_HiveSizeOperandBounds.AddDefaulted(5);
    this->WidePerimeter = 1000.00f;
    this->DetectionTime_Walking = 9.00f;
    this->DetectionTime_Running = 1.00f;
    this->DecreaseDetectionTime = 5.00f;
    this->EmptyDelay_AfterDetection = 20.00f;
    this->SpawnAcknow = NULL;
}


