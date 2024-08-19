#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Attenuation.h"
#include "Engine/Attenuation.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/Attenuation.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "DamageResultStruct.h"
#include "DamageStruct.h"
#include "EnumWound.h"
#include "ExplosionDamageStruct.h"
#include "CombatTools.generated.h"

class AASFCharacter;
class AActor;
class UDamagePrimaryDataAsset;
class UForceFeedbackAttenuation;
class UForceFeedbackEffect;
class UZoneExplosionDataAsset;

UCLASS(Blueprintable)
class ASF_API UCombatTools : public UObject {
    GENERATED_BODY()
public:
    UCombatTools();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDamageStruct SetDamageGiverInDamageStruct(const FDamageStruct& _Damage, AActor* _DamageGiver);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetZoneExplosionMaxRadius(const FExplosionDamageStruct& _Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWoundCount(const TArray<FGameplayTag>& _WoundTags, EnumWound _WoundType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHealPointIndexForLightWound(const AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static UForceFeedbackAttenuation* GetForceFeedbackAttenuation(UObject* _WorldContext, EAttenuationDistanceModel DistanceAlgorithm, TEnumAsByte<EAttenuationShape::Type> AttenuationShape, float dBAttenuationAtMax, ENaturalSoundFalloffMode FalloffMode, FVector AttenuationShapeExtents, float FalloffDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDataAssetZoneExplosionMaxRadius(const UZoneExplosionDataAsset* _Damage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContextObject"))
    static void FindTargetIn_Rectangle(UObject* _WorldContextObject, TArray<AActor*>& Results, TArray<AActor*>& Allies, AActor* _From, FVector _Location, FVector BoxSize, FRotator _Roatation, bool _IgnoreAlly, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TEnumAsByte<ECollisionChannel> CollisionChannelVerification, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContextObject"))
    static void FindTargetForZoneExplosion_V2(UObject* _WorldContextObject, TArray<FHitResult>& Results, TArray<FHitResult>& Allies, AActor* _From, FVector _Location, FExplosionDamageStruct _ExplosionDamage, const TArray<TEnumAsByte<EObjectTypeQuery>>& MultiSphereObjectTypes, TEnumAsByte<ECollisionChannel> CollisionChannelVerification, FVector _Dir, float _Angle, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContextObject"))
    static TArray<FDamageResultStruct> DoExplosionDamage(UObject* _WorldContextObject, AActor* _From, FVector _Location, const FExplosionDamageStruct& _ExplosionDamage, const TArray<TEnumAsByte<EObjectTypeQuery>>& MultiSphereObjectTypes, TEnumAsByte<ECollisionChannel> CollisionChannelVerification, TSoftObjectPtr<UForceFeedbackEffect> _ForceFeedback_Class, FVector _Dir, float _Angle, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float _ShockWaveSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDamageStruct DamageDataAssetToDamageStruct(const UDamagePrimaryDataAsset* _Damage, AActor* _DamageGiver, const FHitResult _Hit);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyDamageReduction(AActor* _From, UPARAM(Ref) FDamageStruct& _DamageStruct, FGameplayTag _DamageReductionTag);
    
};

