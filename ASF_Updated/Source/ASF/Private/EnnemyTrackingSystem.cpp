#include "EnnemyTrackingSystem.h"

UEnnemyTrackingSystem::UEnnemyTrackingSystem() {
}

void UEnnemyTrackingSystem::UnRegisterEnemy(AASFCharacter* _EnemyTracking, FGameplayTag TrackingType) {
}

void UEnnemyTrackingSystem::RemoveTrackingEnemy(AASFCharacter* _EnemyTracking, FGameplayTag TrackingType) {
}

void UEnnemyTrackingSystem::RegisterEnemy(AASFCharacter* _EnemyTracking, FGameplayTag TrackingType) {
}

bool UEnnemyTrackingSystem::HisEnemyRegister(AASFCharacter* _EnemyTracking, FGameplayTag TrackingType) {
    return false;
}

int32 UEnnemyTrackingSystem::GetEnemyOnTrackNum() const {
    return 0;
}

int32 UEnnemyTrackingSystem::GetEnemyOnTrackForTagNum(FGameplayTag TrackTag) const {
    return 0;
}

bool UEnnemyTrackingSystem::AddTrackingEnemy(AASFCharacter* _EnemyTracking, AASFCharacter* _Target, FGameplayTag TrackingType, bool _Force) {
    return false;
}


