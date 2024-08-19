#include "DynamicTutorial.h"

UDynamicTutorial::UDynamicTutorial() {
    this->GameState = NULL;
    this->MediaSource = NULL;
    this->MovieUrl = TEXT("./Movies/Tutorial/PlaceHolderVideo.bk2");
    this->DataAsset = NULL;
}

void UDynamicTutorial::UnInit_Implementation() {
}

void UDynamicTutorial::Trigger_Implementation() {
}

void UDynamicTutorial::Init_Implementation() {
}


