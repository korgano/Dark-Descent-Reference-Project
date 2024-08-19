#include "GA_LoadMission.h"

UGA_LoadMission::UGA_LoadMission() {
    this->ActionLabel = TEXT("Load Mission");
    this->bIsUsableClass = true;
    this->DisplayName = TEXT("Load Mission");
    this->LevelDataAsset = NULL;
}

void UGA_LoadMission::OnSaveGameUncompressed(bool _Success) {
}

void UGA_LoadMission::OnSaveGameCompressed(bool _Success) {
}

void UGA_LoadMission::CompressCurrentMissionSaveGame() {
}


