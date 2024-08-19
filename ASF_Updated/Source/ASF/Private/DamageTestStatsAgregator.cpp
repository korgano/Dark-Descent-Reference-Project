#include "DamageTestStatsAgregator.h"

ADamageTestStatsAgregator::ADamageTestStatsAgregator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveAllDuration = false;
}

void ADamageTestStatsAgregator::StartTest() {
}

UDamageTestStat* ADamageTestStatsAgregator::GetOrCreateDamageTestStat(int32 _Id) {
    return NULL;
}

void ADamageTestStatsAgregator::AddWeapon(ARangeWeapon* _Weapon, int32 _Id) {
}

void ADamageTestStatsAgregator::AddHumanoid(AHumanoid* _Humanoid, int32 _Id) {
}

void ADamageTestStatsAgregator::AddAlien(AAlien* _Alien, int32 _Id) {
}


