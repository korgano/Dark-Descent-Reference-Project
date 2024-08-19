#include "BoxIntersection.h"

FBoxIntersection::FBoxIntersection() {
    this->CollisionPointer = NULL;
    this->NbSegments = 0;
    this->CanGenerateOcclusion = false;
}

