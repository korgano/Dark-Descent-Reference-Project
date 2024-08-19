#include "POIFilter_CharacterRaycast.h"

UPOIFilter_CharacterRaycast::UPOIFilter_CharacterRaycast() {
    this->DebugSight = false;
    this->continueIfHitActor = true;
    this->ChannelForVisibility = ECC_WorldStatic;
}


