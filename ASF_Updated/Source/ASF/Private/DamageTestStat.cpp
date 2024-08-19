#include "DamageTestStat.h"

UDamageTestStat::UDamageTestStat() {
    this->ID = 0;
    this->NbDeath = 0;
    this->NbAlive = 0;
    this->NbMiss = 0;
    this->NbTouch = 0;
    this->NbLegHit = 0;
    this->NbArmHit = 0;
    this->NbTorsoHit = 0;
    this->NbHeadHit = 0;
    this->NbArmor = 0;
    this->NbScratch = 0;
    this->NbLightWound = 0;
    this->NbHeavyWound = 0;
    this->NbTest = 0;
    this->TimeOfStart = 0.00f;
    this->SumDuration = 0.00f;
}

void UDamageTestStat::StartTest(bool _bSaveAllDuration) {
}

void UDamageTestStat::HumanoidKilled(AASFCharacter* _Humanoid, const FDamageResultStruct& _DamageResult) {
}

float UDamageTestStat::GetStandardDeviation() const {
    return 0.0f;
}

float UDamageTestStat::GetPercentTorso() const {
    return 0.0f;
}

float UDamageTestStat::GetPercentScratch() const {
    return 0.0f;
}

float UDamageTestStat::GetPercentMiss() const {
    return 0.0f;
}

float UDamageTestStat::GetPercentLightWound() const {
    return 0.0f;
}

float UDamageTestStat::GetPercentLeg() const {
    return 0.0f;
}

float UDamageTestStat::GetPercentHeavyWound() const {
    return 0.0f;
}

float UDamageTestStat::GetPercentHead() const {
    return 0.0f;
}

float UDamageTestStat::GetPercentDeath() const {
    return 0.0f;
}

float UDamageTestStat::GetPercentArmor() const {
    return 0.0f;
}

float UDamageTestStat::GetPercentArm() const {
    return 0.0f;
}

float UDamageTestStat::GetMinDuration() const {
    return 0.0f;
}

float UDamageTestStat::GetMaxDuration() const {
    return 0.0f;
}

float UDamageTestStat::GetAverageDuration() const {
    return 0.0f;
}

void UDamageTestStat::DamageResult(AWeapon* _Weapon, bool _bResult, const FDamageStruct& _DamageStruct, const FDamageResultStruct& _DamageResultStruct) {
}

void UDamageTestStat::AlienKilled(AASFCharacter* _Alien, const FDamageResultStruct& _DamageResult) {
}


