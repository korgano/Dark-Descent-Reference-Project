#include "CombatTools.h"

UCombatTools::UCombatTools() {
}

FDamageStruct UCombatTools::SetDamageGiverInDamageStruct(const FDamageStruct& _Damage, AActor* _DamageGiver) {
    return FDamageStruct{};
}

float UCombatTools::GetZoneExplosionMaxRadius(const FExplosionDamageStruct& _Damage) {
    return 0.0f;
}

int32 UCombatTools::GetWoundCount(const TArray<FGameplayTag>& _WoundTags, EnumWound _WoundType) {
    return 0;
}

int32 UCombatTools::GetHealPointIndexForLightWound(const AASFCharacter* _Character) {
    return 0;
}

UForceFeedbackAttenuation* UCombatTools::GetForceFeedbackAttenuation(UObject* _WorldContext, EAttenuationDistanceModel DistanceAlgorithm, TEnumAsByte<EAttenuationShape::Type> AttenuationShape, float dBAttenuationAtMax, ENaturalSoundFalloffMode FalloffMode, FVector AttenuationShapeExtents, float FalloffDistance) {
    return NULL;
}

float UCombatTools::GetDataAssetZoneExplosionMaxRadius(const UZoneExplosionDataAsset* _Damage) {
    return 0.0f;
}

void UCombatTools::FindTargetIn_Rectangle(UObject* _WorldContextObject, TArray<AActor*>& Results, TArray<AActor*>& Allies, AActor* _From, FVector _Location, FVector BoxSize, FRotator _Roatation, bool _IgnoreAlly, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TEnumAsByte<ECollisionChannel> CollisionChannelVerification, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType) {
}

void UCombatTools::FindTargetForZoneExplosion_V2(UObject* _WorldContextObject, TArray<FHitResult>& Results, TArray<FHitResult>& Allies, AActor* _From, FVector _Location, FExplosionDamageStruct _ExplosionDamage, const TArray<TEnumAsByte<EObjectTypeQuery>>& MultiSphereObjectTypes, TEnumAsByte<ECollisionChannel> CollisionChannelVerification, FVector _Dir, float _Angle, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType) {
}

TArray<FDamageResultStruct> UCombatTools::DoExplosionDamage(UObject* _WorldContextObject, AActor* _From, FVector _Location, const FExplosionDamageStruct& _ExplosionDamage, const TArray<TEnumAsByte<EObjectTypeQuery>>& MultiSphereObjectTypes, TEnumAsByte<ECollisionChannel> CollisionChannelVerification, TSoftObjectPtr<UForceFeedbackEffect> _ForceFeedback_Class, FVector _Dir, float _Angle, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float _ShockWaveSpeed) {
    return TArray<FDamageResultStruct>();
}

FDamageStruct UCombatTools::DamageDataAssetToDamageStruct(const UDamagePrimaryDataAsset* _Damage, AActor* _DamageGiver, const FHitResult _Hit) {
    return FDamageStruct{};
}

void UCombatTools::ApplyDamageReduction(AActor* _From, FDamageStruct& _DamageStruct, FGameplayTag _DamageReductionTag) {
}


