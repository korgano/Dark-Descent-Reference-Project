#include "MissionEndedInfosStruct.h"

FMissionEndedInfosStruct::FMissionEndedInfosStruct() {
    this->played_duration = 0.00f;
    this->time_detected = 0.00f;
    this->time_tracked = 0.00f;
    this->time_undetected = 0.00f;
    this->time_defense = 0.00f;
    this->enemy_killed = 0;
    this->datapads_gathered = 0;
    this->shelters = 0;
    this->rests = 0;
    this->deaths = 0;
    this->rescued = 0;
    this->max_aggressiveness = 0;
    this->welded_doors = 0;
}

