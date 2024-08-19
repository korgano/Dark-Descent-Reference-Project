#include "MarineCustomizationPreset.h"

FMarineCustomizationPreset::FMarineCustomizationPreset() {
    this->bUseJson = false;
    this->Gender = EGender::NEUTRAL;
    this->VoiceIndex = 0;
    this->FaceMeshIndex = 0;
    this->SkinIndex = 0;
    this->HairIndex = 0;
    this->FacialHairIndex = 0;
    this->HairColorIndex = 0;
    this->HeadScarIndex = 0;
    this->BodyScarIndex = 0;
    this->TattooIndex = 0;
    this->CamoIndex = 0;
    this->bHideHelmet = false;
}

