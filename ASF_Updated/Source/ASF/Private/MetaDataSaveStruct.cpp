#include "MetaDataSaveStruct.h"

FMetaDataSaveStruct::FMetaDataSaveStruct() {
    this->SaveGameType = ESaveGameType::MANUAL;
    this->CampaignTurn = 0;
    this->CampaignProgress = 0.00f;
}

