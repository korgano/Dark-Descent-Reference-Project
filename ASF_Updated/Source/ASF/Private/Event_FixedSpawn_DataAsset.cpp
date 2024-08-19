#include "Event_FixedSpawn_DataAsset.h"
#include "EnumSpawnPickRule.h"

UEvent_FixedSpawn_DataAsset::UEvent_FixedSpawn_DataAsset() {
    this->SpawnPickRule = EnumSpawnPickRule::RANDOM;
}


