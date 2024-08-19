#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EStressStep.h"
#include "Event_StressDelegate.h"
#include "Event_Stress_EffectDelegate.h"
#include "Event_Stress_Float_BoolDelegate.h"
#include "Event_Stress_StressStepDelegate.h"
#include "Event_floatDelegate.h"
#include "StressDamage.h"
#include "Templates/SubclassOf.h"
#include "Tinda_Float.h"
#include "Stress_Component.generated.h"

class ASquad;
class UAnimationComponentHumanoid;
class UDamageReceiverComponent;
class UNavigationQueryFilter;
class URest_DataAsset;
class UStatComponent;
class UStressAcknows_DataAsset;
class UStressComponent_DataAsset;
class UStressEffect;
class UStressEffect_DataAsset;
class UStress_DataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UStress_Component : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatComponent* StatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTinda_Float Stress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EStressStep StressStep;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_float OnStressValueChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Stress_Float_Bool OnStressAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Stress_Float_Bool OnStressRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageReceiverComponent* DamageReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimationComponentHumanoid* AnimationComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass_WithBlockingDoors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStress_DataAsset*> Stress_DataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStressComponent_DataAsset* StressComponent_DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URest_DataAsset* RestDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStressAcknows_DataAsset* StressAcknowsAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Stress_Effect Event_Stress_EffectChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Stress_StressStep OnStressStepChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Stress Event_ShelterHealStress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStressDamage> StressDamagesOverTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Stress OnDamageStressOverTime_PreTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Stress OnDamageStressOverTime_PostTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UStressEffect>> AddedStressEffects;
    
    UStress_Component(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    EStressStep UpdateStressStep_Increase(int32 nbStepUp);
    
    UFUNCTION(BlueprintCallable)
    EStressStep UpdateStressStep_Decrease(int32 nbStepDown);
    
    UFUNCTION(BlueprintCallable)
    void ShelterHeal(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStressStep(const TSoftClassPtr<UStressEffect>& _ForceEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailableStressEffect(const TSoftClassPtr<UStressEffect>& _EffectClass) const;
    
    UFUNCTION(BlueprintCallable)
    void HealStress(float _HealValue, bool _UseMultiplier, bool _bDislpayFeedback);
    
    UFUNCTION(BlueprintCallable)
    float GetStressHealMultiplier();
    
    UFUNCTION(BlueprintCallable)
    float GetStressDamageMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStress_DataAsset* GetDataAssetForStressStep(EStressStep _StressStep);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentStressDescription(TArray<UStressEffect_DataAsset*>& _Desc);
    
    UFUNCTION(BlueprintCallable)
    void DoStressDamage(const FStressDamage& _Damage);
    
    UFUNCTION(BlueprintCallable)
    void DoDamageOverTime();
    
    UFUNCTION(BlueprintCallable)
    void ClearStress();
    
    UFUNCTION(BlueprintCallable)
    void BindSubLevelHandler();
    
    UFUNCTION(BlueprintCallable)
    void ApplyStressStep(const TSoftClassPtr<UStressEffect>& _ForceEffect);
    
};

