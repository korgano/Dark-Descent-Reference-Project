#include "InteractionPrimaryDataAsset.h"

UInteractionPrimaryDataAsset::UInteractionPrimaryDataAsset() {
    this->InteractionDuration = 0.00f;
    this->NbResourceNeeded = 1;
    this->NbResourceGiven = 1;
    this->AnimationType = EActivityAnimationType::NONE;
    this->ArrowName = TEXT("Interaction");
    this->bVisibleWhenAIUse = false;
    this->Sound_Interaction_Class = NULL;
    this->Sound_EndWithSuccess_Interaction_Class = NULL;
    this->DisableOrderReceivedAcknow = false;
    this->bAutoConsumeSupplyOnActionSucces = true;
}


