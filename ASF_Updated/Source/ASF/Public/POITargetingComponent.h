#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "DamageResultStruct.h"
#include "Event_UPOITargetingComponent_ActorDelegate.h"
#include "Event_UPOITargetingComponent_Actor_ActorDelegate.h"
#include "OnDetectionUpdatedBPDelegate.h"
#include "PerceptionDelegate.h"
#include "POITargetingComponent.generated.h"

class AASFCharacter;
class AActor;
class ASubLevelHandler;
class UAIPointOfInterestContainer;
class UPOIDefaultContainer;
class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UPOITargetingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDetectionUpdatedBP Delegate_Test;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UPOITargetingComponent_Actor_Actor OnTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UPOITargetingComponent_Actor OnEnemySpotted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UPOITargetingComponent_Actor OnWeaponDetectionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMultithreading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DynamicPOIContainer_Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIPointOfInterestContainer*> DynamicPOIContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpotEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> TargetEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* TargetEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> HasTargetEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* HasTargetEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponPerceptionValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AdditionalLayersByOrder;
    
public:
    UPOITargetingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AActor* UpdateTarget(UPOIDefaultContainer* TargetResult, bool ForceSelect);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateEffects(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SightLost();
    
    UFUNCTION(BlueprintCallable)
    void SelectTarget(AActor* NewTarget, bool _KeepTarget);
    
public:
    UFUNCTION(BlueprintCallable)
    void RunWeaponDetection_Task(UPOIDefaultContainer* _SightResult, FOnDetectionUpdatedBP Delegate_BP, const FPerceptionDelegate& Delegate_CPP);
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* RunWeaponDetection(UPOIDefaultContainer* _SightResult);
    
    UFUNCTION(BlueprintCallable)
    void RunTargetDetection_Task(UPOIDefaultContainer* _SightResult, FOnDetectionUpdatedBP Delegate_BP, const FPerceptionDelegate& Delegate_CPP);
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* RunTargetDetection(UPOIDefaultContainer* _SightResult);
    
    UFUNCTION(BlueprintCallable)
    void RunSpotPhaseDetection_Task(UPOIDefaultContainer* _SightResult, FOnDetectionUpdatedBP Delegate_BP, const FPerceptionDelegate& Delegate_CPP);
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* RunSpotPhaseDetection(UPOIDefaultContainer* _SightResult);
    
    UFUNCTION(BlueprintCallable)
    void RunSightDetection_Task(UPOIDefaultContainer* _SightResult, FOnDetectionUpdatedBP Delegate_BP, const FPerceptionDelegate& Delegate_CPP);
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* RunSightDetection();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveTargetEffect();
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitTargetingComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWeaponHasATarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UTinda_Effect> GetTargetEffetClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAIPointOfInterestContainer*> GetDynamicPOIContainer() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSpot(AActor* SpotedActor);
    
    UFUNCTION(BlueprintCallable)
    void EnablePOIPerceptionLayer(FGameplayTag _PerceptionTag, int32 _LayerOrder);
    
    UFUNCTION(BlueprintCallable)
    void DisablePOIPerceptionLayer(FGameplayTag _PerceptionTag);
    
    UFUNCTION(BlueprintCallable)
    void ComputeAdditionalPerceptions_Task(UPOIDefaultContainer* _PerceptionResult, FOnDetectionUpdatedBP Delegate_BP, const FPerceptionDelegate& Delegate_CPP, int32 LayerIdx);
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* ComputeAdditionalPerceptions(UPOIDefaultContainer* _PerceptionResult);
    
    UFUNCTION(BlueprintCallable)
    void ClearSightDetection();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginSubLevelUnLoad(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
};

