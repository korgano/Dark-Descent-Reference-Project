#include "EnemyStatComponent.h"

UEnemyStatComponent::UEnemyStatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoiseDetectionRangeAttribute = NULL;
    this->StunDurationAttribute = NULL;
    this->OwnerPerceptionComponent = NULL;
}

void UEnemyStatComponent::OnNoiseDetectionRangeUpdated_Implementation(UTinda_Attribute* _MovementSpeedAttribute, float _OldValue, float _NewValue) {
}


