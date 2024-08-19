#include "FOVDepthAnalysis.h"

FFOVDepthAnalysis::FFOVDepthAnalysis() {
    this->BeginIdx = 0;
    this->EndIdx = 0;
    this->NumberIdx = 0;
    this->portionDepthAverage = 0.00f;
    this->IncludeOpenningPath = false;
    this->CanBeRecomputed = false;
}

